/*
 * XREFs of ?PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z @ 0x1803DD4C4
 * Callers:
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D69A8 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D6AF8 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

void __fastcall GameDVR_OutputDebug::PrintType(GameDVR_OutputDebug *this, const char *a2, char a3)
{
  unsigned __int64 *v3; // r10
  size_t v4; // rdx
  bool v5; // zf
  wchar_t *Format; // rax
  unsigned __int16 **v7; // r8
  unsigned __int16 *v8; // rcx

  v3 = (unsigned __int64 *)((char *)this + 2056);
  v4 = *((_QWORD *)this + 257);
  v5 = a3 == 0;
  Format = L"%S=true ";
  v7 = (unsigned __int16 **)((char *)this + 2048);
  v8 = (unsigned __int16 *)*((_QWORD *)this + 256);
  if ( v5 )
    Format = (wchar_t *)L"%S=false ";
  StringCchPrintfExW(v8, v4, v7, v3, 0, Format, a2);
}
