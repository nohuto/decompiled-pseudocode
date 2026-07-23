/*
 * XREFs of sub_1403689A4 @ 0x1403689A4
 * Callers:
 *     sub_1407E65A0 @ 0x1407E65A0 (sub_1407E65A0.c)
 *     sub_140933DDC @ 0x140933DDC (sub_140933DDC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403689A4(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r14
  KIRQL v7; // al
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf

  v3 = (KSPIN_LOCK *)(a1 + 1496);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1496));
  v8 = (_QWORD *)(a1 + 1280);
  v9 = v7;
  v10 = *(_QWORD **)(a1 + 1280);
  if ( v10 == (_QWORD *)(a1 + 1280) )
  {
LABEL_2:
    v11 = 0;
  }
  else if ( a3 || (v11 = 1, a2) )
  {
    while ( (*(_DWORD *)(v10 - 2) & 2) != 0 || (v10[5] != a3 || a2 && v10[20] != a2) && (a3 || v10[20] != a2) )
    {
      v10 = (_QWORD *)*v10;
      if ( v8 == v10 )
        goto LABEL_2;
    }
    v11 = 1;
  }
  KeReleaseSpinLockFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v11;
}
