/*
 * XREFs of USBType1AdjustPositionWithin1Ms @ 0x1C000362C
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C00051A0 (USBType1RenderBytePosition.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0002720 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     USBMidiInGetCurrentTime @ 0x1C00032B0 (USBMidiInGetCurrentTime.c)
 */

unsigned __int64 __fastcall USBType1AdjustPositionWithin1Ms(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 CurrentTime; // r11
  unsigned __int64 v11; // rax
  char v12; // r8
  char v13; // dl
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 152);
  v9 = 0LL;
  if ( a2 )
  {
    CurrentTime = USBMidiInGetCurrentTime();
    v11 = *(_QWORD *)(a3 + 8) + a2 * (unsigned int)(a4 - *(_DWORD *)a3);
    if ( CurrentTime < v11 )
      v11 = CurrentTime;
    v9 = (CurrentTime - v11) * (unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 104)) / (1000 * a2);
    v12 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v13 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( v13 || v12 )
      WPP_RECORDER_AND_TRACE_SF_ii(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v12,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        0xAu,
        (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  }
  return v9;
}
