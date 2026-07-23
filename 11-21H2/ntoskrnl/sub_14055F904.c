/*
 * XREFs of sub_14055F904 @ 0x14055F904
 * Callers:
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140942760 @ 0x140942760 (sub_140942760.c)
 *     sub_140942D5C @ 0x140942D5C (sub_140942D5C.c)
 *     sub_140942DD8 @ 0x140942DD8 (sub_140942DD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_14055F904(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  Pool2 = ExAllocatePool2(64LL, 80LL, 1399877200LL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_BYTE *)(Pool2 + 72) = 0;
    if ( sub_140942760(Pool2, a3) )
    {
      sub_140942DD8(a1);
      sub_140942DD8(a2);
      v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C46AA0);
      v10 = v7 + 2;
      v11 = *(_QWORD **)(a2 + 40);
      if ( *v11 != a2 + 32
        || (*v10 = a2 + 32,
            v7[3] = v11,
            *v11 = v10,
            *(_QWORD *)(a2 + 40) = v10,
            v12 = *(_QWORD **)(a1 + 24),
            *v12 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *v7 = a1 + 16;
      v7[1] = v12;
      *v12 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KeReleaseSpinLockFromDpcLevel(&qword_140C46AA0);
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
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      sub_140942D5C(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
