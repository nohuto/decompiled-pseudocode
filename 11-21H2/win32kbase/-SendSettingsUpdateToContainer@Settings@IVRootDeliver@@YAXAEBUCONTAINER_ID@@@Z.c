/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E8A48
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF2E0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00B5160 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E89EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EFF74 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F0028 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FCFCC (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  _QWORD v9[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-28h]

  CIVGenericSerializer::CIVGenericSerializer(v9);
  v5 = (_DWORD *)v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 24) = gTouchPadParameters;
    v5[8] = DWORD2(gTouchPadParameters);
    v5[9] = qword_1C0294F10;
    v5[10] = WORD6(gTouchPadParameters) & 0x7FF | ((*(_BYTE *)(&qword_1C0294F10 + 1) & 0x7F) << 11);
    *v5 = *((_DWORD *)gpsi + 497);
    v5[1] = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
              (CDeviceAcceleration *)((char *)qword_1C0288098 + 104),
              v3,
              v4);
    v5[2] = *((_DWORD *)gpsi + 1247);
    v5[3] = dword_1C028F880;
    v5[4] = dword_1C028F850;
    v5[5] = dword_1C028F890;
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      v6 = ivrIVSend((const struct CIVSerializer *)v9, 3u, this);
    else
      v6 = ivrIVBroadcast((const struct CIVSerializer *)v9, 3u, this);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          17,
          (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids,
          v6);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        16,
        (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids);
    }
  }
  v9[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
}
