/*
 * XREFs of RaidAdapterSetDevicePowerIrp @ 0x1C0014988
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C00148B8 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001E2E8 (RaidAdapterPowerUpDevice.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     McTemplateK0qpdudddd_EtwWriteTransfer @ 0x1C0047D9C (McTemplateK0qpdudddd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterSetDevicePowerIrp(__int64 a1, IRP *a2)
{
  int v4; // edi
  int LowPart; // ebp
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int128 v9; // [rsp+60h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 308);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    v9 = 0LL;
    IoGetActivityIdIrp(a2, &v9);
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0qpdudddd_EtwWriteTransfer(
        a2->Tail.Overlay.CurrentStackLocation,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(a1 + 56),
        (char)a2,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v4,
        LowPart,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( v4 == 1 )
  {
    if ( LowPart > 1 )
    {
      v6 = RaidAdapterPowerDownDevice(a1, a2);
      goto LABEL_9;
    }
  }
  else if ( v4 > 1 && LowPart == 1 )
  {
    v6 = RaidAdapterPowerUpDevice(a1, a2);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      18LL,
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      (unsigned int)v4,
      LowPart);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_9:
  v7 = v6;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids, a1, a2, v6);
  }
  return v7;
}
