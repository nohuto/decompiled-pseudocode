/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0130D6C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0130984 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0132780 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v5; // ebx
  char v7; // dl
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // [rsp+48h] [rbp-20h]

  SetProtocolType(0xFFFFLL);
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL)) )
    return 0LL;
  v8 = a3;
  v5 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL);
  if ( v5 < 0 )
  {
    v5 = -1073741823;
    SetProtocolType(a2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        3u,
        0xEu,
        (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids,
        3221225473LL,
        v8,
        0LL);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  return (unsigned int)v5;
}
