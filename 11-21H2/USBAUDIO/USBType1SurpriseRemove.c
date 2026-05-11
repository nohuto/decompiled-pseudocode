/*
 * XREFs of USBType1SurpriseRemove @ 0x1C003A490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall USBType1SurpriseRemove(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // dl
  __int64 v4; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      8u,
      0x1Eu,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  if ( *(_BYTE *)(v1 + 96) )
    *(_BYTE *)(v1 + 100) = 0;
  return 0LL;
}
