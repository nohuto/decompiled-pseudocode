/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x1405E7140
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405E7AF0 @ 0x1405E7AF0 (sub_1405E7AF0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(
        _RTL_BALANCED_NODE *a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE **a3,
        _RTL_BALANCED_NODE **a4)
{
  _RTL_BALANCED_NODE *Pool2; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 Root; // rdx
  unsigned __int64 v11; // rbp
  BOOLEAN v12; // r8
  _RTL_BALANCED_NODE *v13; // rax
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  _RTL_BALANCED_NODE *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(64LL, 40LL, 1886539858LL);
  else
    Pool2 = 0LL;
  v9 = sub_1405E7AF0(&dword_140D04904);
  Root = (unsigned __int64)stru_140C0D780.Root;
  v11 = v9;
  if ( ((__int64)stru_140C0D780.Min & 1) != 0 )
  {
    if ( !stru_140C0D780.Root )
    {
      v12 = 0;
      goto LABEL_11;
    }
    Root = (unsigned __int64)&stru_140C0D780 ^ (unsigned __int64)stru_140C0D780.Root;
  }
  v12 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (__int64)a1 - *(_QWORD *)(Root + 24) >= 0 )
      {
        if ( (__int64)a1 - *(_QWORD *)(Root + 24) <= 0 )
        {
          v16 = *(_RTL_BALANCED_NODE **)(Root + 32);
          if ( !a3 || v16 == *a3 )
            *(_QWORD *)(Root + 32) = a2;
          v14 = 0x40000000;
LABEL_27:
          if ( a4 )
            *a4 = v16;
          goto LABEL_29;
        }
        v15 = *(_QWORD *)(Root + 8);
        if ( !v15 || (v13 = (_RTL_BALANCED_NODE *)(Root ^ v15)) == 0LL )
        {
          v12 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)Root )
          break;
        v13 = (_RTL_BALANCED_NODE *)(Root ^ *(_QWORD *)Root);
        if ( !v13 )
          break;
      }
      Root = (unsigned __int64)v13;
    }
  }
LABEL_11:
  if ( Pool2 )
  {
    Pool2[1].Children[0] = a1;
    Pool2[1].Children[1] = a2;
    RtlRbInsertNodeEx(&stru_140C0D780, (PRTL_BALANCED_NODE)Root, v12, Pool2);
    if ( a3 )
      v16 = *a3;
    else
      v16 = 0LL;
    Pool2 = 0LL;
    v14 = 0;
    goto LABEL_27;
  }
  v14 = -1073741670;
LABEL_29:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D04904);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v14;
}
