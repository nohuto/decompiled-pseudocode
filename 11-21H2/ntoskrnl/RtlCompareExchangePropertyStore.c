/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x1405E7300
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405E7AF0 @ 0x1405E7AF0 (sub_1405E7AF0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // ebp
  void *v5; // r13
  _OWORD *i; // rsi
  unsigned __int64 v8; // rdi
  char *v9; // rax
  char *Pool2; // rbx
  int v11; // r14d
  unsigned int v12; // esi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r9
  int v20; // eax
  void *v21; // rbp
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  NTSTATUS v25; // ebx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  __int64 v28; // r8
  int v29; // eax

  v4 = 0;
  v5 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    v8 = (unsigned __int8)sub_1405E7AF0(&dword_140D04908);
    if ( qword_140C1BC18 )
    {
      v9 = (char *)bsearch(i, qword_140C1BC18, (unsigned int)dword_140C1BC20, 0x18uLL, sub_1405E7BE0);
      if ( v9 )
        break;
    }
    if ( (unsigned __int8)v8 > 2u )
    {
      v25 = -1073741670;
      goto LABEL_42;
    }
    Pool2 = (char *)qword_140C1BC18;
    if ( qword_140C1BC18 && (_DWORD)dword_140C1BC20 + 1 != dword_140C1BC10 )
      goto LABEL_28;
    v11 = dword_140C1BC10;
    if ( dword_140C1BC10 )
    {
      v12 = 2 * dword_140C1BC10;
      if ( 2 * dword_140C1BC10 < (unsigned int)dword_140C1BC10 )
        goto LABEL_40;
    }
    else
    {
      v12 = 16;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D04908);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    Pool2 = (char *)ExAllocatePool2(64LL, 24LL * v12, 1886539858LL);
    if ( !Pool2 )
    {
LABEL_40:
      v25 = -1073741801;
      goto LABEL_42;
    }
    v8 = (unsigned __int8)sub_1405E7AF0(&dword_140D04908);
    if ( v11 == dword_140C1BC10 )
    {
      v21 = qword_140C1BC18;
      if ( qword_140C1BC18 )
      {
        memmove(Pool2, qword_140C1BC18, 24LL * (unsigned int)dword_140C1BC20);
        v5 = v21;
      }
      dword_140C1BC10 = v12;
      i = (_OWORD *)Key;
      qword_140C1BC18 = Pool2;
LABEL_28:
      v22 = 3LL * (unsigned int)dword_140C1BC20;
      LODWORD(dword_140C1BC20) = dword_140C1BC20 + 1;
      v9 = &Pool2[8 * v22];
      if ( Exchange )
        v23 = *Exchange;
      else
        v23 = 0LL;
      *((_QWORD *)v9 + 2) = v23;
      v4 = 1;
      *(_OWORD *)v9 = *i;
      break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D04908);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v16 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v16 )
            sub_140418E4C((__int64)v18);
        }
      }
    }
    __writecr8(v8);
    ExFreePoolWithTag(Pool2, 0);
  }
  v24 = *((_QWORD *)v9 + 2);
  if ( !Exchange || v24 == *Exchange )
    *((_QWORD *)v9 + 2) = Comperand;
  if ( Context )
    *Context = v24;
  if ( v4 )
  {
    qsort(qword_140C1BC18, (unsigned int)dword_140C1BC20, 0x18uLL, sub_1405E7BE0);
    v25 = 0;
  }
  else
  {
    v25 = 0x40000000;
  }
LABEL_42:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D04908);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = *((_QWORD *)v27 + 4375);
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v16 )
          sub_140418E4C((__int64)v27);
      }
    }
  }
  __writecr8((unsigned __int8)v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v25;
}
