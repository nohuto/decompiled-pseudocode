/*
 * XREFs of DeviceRequestPowerUp @ 0x1C002A38C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     PinAddPinToList @ 0x1C0009F24 (PinAddPinToList.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C002F010 (PropertyGetSetChannelConfiguration.c)
 *     PropertyGetSetMuxSource @ 0x1C002F170 (PropertyGetSetMuxSource.c)
 *     PropertySetBoolean @ 0x1C002F9D0 (PropertySetBoolean.c)
 *     PropertySetBooleanSideband @ 0x1C002FC84 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1C002FE54 (PropertySetDbLevelSideband.c)
 *     PropertySetFeatureValue @ 0x1C002FF80 (PropertySetFeatureValue.c)
 *     PropertySetMixerLevels @ 0x1C0030100 (PropertySetMixerLevels.c)
 *     PropertySetTopologyNodeEnable @ 0x1C00302D0 (PropertySetTopologyNodeEnable.c)
 *     IncrementActivePinCount @ 0x1C0039BB0 (IncrementActivePinCount.c)
 *     PropertySetDbLevel @ 0x1C003E370 (PropertySetDbLevel.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0009C90 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(__int64 a1)
{
  _QWORD *Context; // rdi
  _DWORD *v3; // rdx
  bool v4; // al
  ULONG *v5; // r8

  Context = *(_QWORD **)(a1 + 16);
  v3 = (_DWORD *)Context[66];
  if ( v3 )
    *v3 = 0;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = v4;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v3,
      (_DWORD)v5,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a1 + 32),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           Context,
           0LL);
}
