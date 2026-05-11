/*
 * XREFs of DeviceRequestPowerUp @ 0x1C002806C
 * Callers:
 *     PinAddPinToList @ 0x1C00020DC (PinAddPinToList.c)
 *     IncrementActivePinCount @ 0x1C002A354 (IncrementActivePinCount.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C002FA70 (PropertyGetSetChannelConfiguration.c)
 *     PropertyGetSetMuxSource @ 0x1C002FBD0 (PropertyGetSetMuxSource.c)
 *     PropertySetBoolean @ 0x1C0030350 (PropertySetBoolean.c)
 *     PropertySetBooleanSideband @ 0x1C0030604 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevel @ 0x1C0030860 (PropertySetDbLevel.c)
 *     PropertySetDbLevelSideband @ 0x1C0030B3C (PropertySetDbLevelSideband.c)
 *     PropertySetFeatureValue @ 0x1C0030C70 (PropertySetFeatureValue.c)
 *     PropertySetMixerLevels @ 0x1C0030DF0 (PropertySetMixerLevels.c)
 *     PropertySetTopologyNodeEnable @ 0x1C0030FC0 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0001E74 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rdx
  char v4; // al
  int Context; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 16);
  v3 = (_DWORD *)v1[66];
  if ( v3 )
    *v3 = 0;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Context,
      v7,
      v8,
      v9);
  return PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a1 + 32),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           v1,
           0LL);
}
