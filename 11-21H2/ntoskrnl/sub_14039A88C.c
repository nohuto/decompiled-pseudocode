/*
 * XREFs of sub_14039A88C @ 0x14039A88C
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14080A52C @ 0x14080A52C (sub_14080A52C.c)
 *     sub_14099CFAC @ 0x14099CFAC (sub_14099CFAC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039A88C(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C09750);
  v3 = dword_140C09760;
  v4 = v2;
  if ( a1 )
    v3 = dword_140C0975C;
  KeReleaseSpinLockFromDpcLevel(&qword_140C09750);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
