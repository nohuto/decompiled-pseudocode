/*
 * XREFs of USBCaptureAdjustPositionWithin1Ms @ 0x1C0005E30
 * Callers:
 *     USBCaptureBytePosition @ 0x1C0005F20 (USBCaptureBytePosition.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0002720 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     USBMidiInGetCurrentTime @ 0x1C00032B0 (USBMidiInGetCurrentTime.c)
 */

unsigned __int64 __fastcall USBCaptureAdjustPositionWithin1Ms(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v5; // r10
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 CurrentTime; // rax
  unsigned __int64 v9; // rbx
  char v10; // r8
  char v11; // dl
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v4 = *a3;
  v5 = *((_QWORD *)a3 + 1);
  v6 = a4;
  if ( a1 <= *a3 )
    v7 = v5 - a2 * (v4 - a1);
  else
    v7 = v5 + a2 * (a1 - v4);
  CurrentTime = USBMidiInGetCurrentTime();
  if ( v7 > CurrentTime )
    v7 = CurrentTime;
  v9 = (CurrentTime - v7) * v6 / 0x989680;
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( v11 || v10 )
    WPP_RECORDER_AND_TRACE_SF_ii(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v10,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      v14,
      0x1Bu,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  return v9;
}
