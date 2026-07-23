/*
 * XREFs of sub_14058B540 @ 0x14058B540
 * Callers:
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 * Callees:
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     sub_14028AF80 @ 0x14028AF80 (sub_14028AF80.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_14058B540(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // r12
  KIRQL v5; // bl
  _QWORD *v6; // rax
  __int64 v7; // rsi
  volatile LONG *v8; // r14
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  __int64 result; // rax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v4 = (_QWORD *)(a1 + 1704);
  while ( 1 )
  {
    v5 = v3;
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = (__int64)(v6 - 1);
    v8 = (volatile LONG *)(v6 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      sub_14028AF80(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      v14 = sub_140287FB8(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = *((_QWORD *)CurrentPrcb + 4375);
            v18 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
            *(_DWORD *)(v17 + 20) &= v18;
            if ( v13 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( v14 )
        sub_1405C4B8C(a1, 1LL, v14);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v9 = KeGetCurrentIrql();
          if ( v9 <= 0xFu && v5 <= 0xFu && v9 >= 2u )
          {
            v10 = KeGetCurrentPrcb();
            v11 = *((_QWORD *)v10 + 4375);
            v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C((__int64)v10);
          }
        }
      }
      __writecr8(v5);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && v5 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        v22 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v13 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v13 )
          sub_140418E4C((__int64)v20);
      }
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
