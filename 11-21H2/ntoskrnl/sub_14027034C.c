/*
 * XREFs of sub_14027034C @ 0x14027034C
 * Callers:
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_1409706E4 @ 0x1409706E4 (sub_1409706E4.c)
 * Callees:
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 */

__int64 __fastcall sub_14027034C(__int64 a1)
{
  __int64 v2; // rdx
  BOOL v3; // ebp
  __int64 v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // r12
  int v7; // ebx
  KIRQL v8; // al
  unsigned __int64 v9; // rdi
  KIRQL v10; // r13
  volatile LONG *v11; // rcx
  __int64 v12; // rdi
  void *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // edx
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  signed __int32 v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h]

  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v29 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C51F48 + 8 * v2);
  if ( *(_QWORD *)(a1 + 64) )
    v3 = (*(_BYTE *)(a1 + 56) & 0x20) == 0;
  v5 = (_QWORD *)(a1 + 128);
  v6 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  while ( v5 )
  {
    v6 += sub_140273390((ULONG_PTR)v5);
    if ( v3 && *(_QWORD *)(*v5 + 64LL) && (*(_BYTE *)(*v5 + 62LL) & 0xC) == 8 )
    {
      v14 = (void *)v5[14];
      if ( v14 )
      {
        sub_140970668(v14);
        v5[14] = 0LL;
      }
    }
    v5 = (_QWORD *)v5[2];
  }
  v28 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = v8;
  v10 = v8;
  while ( 1 )
  {
    v11 = (volatile LONG *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    sub_1402F32E0(&v28);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v23 = *((_QWORD *)v21 + 4375);
        v19 = (v22 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v22;
        if ( v19 )
          sub_140418E4C(v21);
      }
    }
  }
  __writecr8(v9);
  v12 = sub_140287C30(a1);
  if ( v12 )
  {
    if ( (v7 & 0x1000) != 0 )
    {
      v24 = v12 - v29;
      if ( (ULONG_PTR *)v4 == &StartContext )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((int *)v25 + 8615);
        if ( (_DWORD)v26 != -1 )
        {
          if ( v24 + v26 <= 0x100 )
          {
            do
            {
              if ( v24 >= 0x80000 )
                break;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, v26 + v24, v26);
              v19 = (_DWORD)v26 == v27;
              LODWORD(v26) = v27;
              if ( v19 )
                goto LABEL_15;
            }
            while ( v27 != -1 && v24 + v27 <= 0x100 );
          }
          if ( (int)v26 > 192
            && (_DWORD)v26 == _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, 192, v26) )
          {
            v24 += (int)v26 - 192;
          }
        }
      }
      if ( v24 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 16960), v24);
    }
LABEL_15:
    sub_14028CE10(v4, v12 - v29);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17528), -v12);
  }
  return v6;
}
