/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01F6194
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F44EC (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01ECBAC (-IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD138 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2)
{
  int v3; // ebx
  PDEVICE_OBJECT *v4; // rdx
  _UNKNOWN **v5; // r8
  PDEVICE_OBJECT *v6; // rdx
  _UNKNOWN **v7; // r8

  *((_DWORD *)this + 2) += 128;
  v3 = CIVSerializer::ExtendByMeasuredExtra(this);
  if ( v3 >= 0 )
  {
    v3 = IVSerializeFullKeyboardStates(this);
    if ( v3 < 0 )
    {
      v6 = &WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v6,
          (_DWORD)v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          36,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v3);
      }
    }
  }
  else
  {
    v4 = &WPP_GLOBAL_Control;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v4,
        (_DWORD)v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        35,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
