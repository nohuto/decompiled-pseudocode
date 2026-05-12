/*
 * XREFs of RaidAdapterDevicePowerDownSrbComplete @ 0x1C004B940
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

NTSTATUS __fastcall RaidAdapterDevicePowerDownSrbComplete(__int64 a1)
{
  IRP *v1; // rdi
  __int64 v2; // rbx
  int Status; // [rsp+28h] [rbp-10h]

  v1 = *(IRP **)(a1 + 160);
  v2 = *(_QWORD *)(a1 + 216);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    Status = v1->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x16u,
      (__int64)&WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      v2,
      v1,
      Status);
  }
  *(_WORD *)(v2 + 4496) = 0;
  return RaidAdapterDevicePowerstopAdapter(v1, v2);
}
