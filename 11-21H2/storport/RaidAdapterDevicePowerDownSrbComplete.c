/*
 * XREFs of RaidAdapterDevicePowerDownSrbComplete @ 0x1C0048980
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
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
      (__int64)&WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      v2,
      v1,
      Status);
  }
  *(_WORD *)(v2 + 4432) = 0;
  return RaidAdapterDevicePowerstopAdapter(v1, v2);
}
