/*
 * XREFs of sub_1403B2A28 @ 0x1403B2A28
 * Callers:
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_1403CD4E0 @ 0x1403CD4E0 (sub_1403CD4E0.c)
 *     sub_1403CD570 @ 0x1403CD570 (sub_1403CD570.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140514560 @ 0x140514560 (sub_140514560.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140515358 @ 0x140515358 (sub_140515358.c)
 *     sub_1405158A0 @ 0x1405158A0 (sub_1405158A0.c)
 *     sub_1405160A0 @ 0x1405160A0 (sub_1405160A0.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403B2A28(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BD30);
  v4 = (__int64 *)qword_140C4BD40;
  v5 = v3;
  while ( v4 != &qword_140C4BD40 )
  {
    if ( (__int64 *)a1 == v4 )
    {
      ++*(_DWORD *)(a1 + 112);
      v2 = 1;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BD30);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v2 == 0 ? 0xC000000D : 0;
}
