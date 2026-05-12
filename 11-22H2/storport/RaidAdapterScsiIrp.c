/*
 * XREFs of RaidAdapterScsiIrp @ 0x1C00A70B8
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0004BA0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterScsiIrp(__int64 a1, IRP *a2)
{
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Fu,
      (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      a2);
  }
  return RaidCompleteRequestEx(a2, 0, 0xC0000001);
}
