/*
 * XREFs of ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D69A8
 * Callers:
 *     _lambda_7cbe6e2ff7edb54ea653482a2b025563_::operator() @ 0x1803D4D08 (_lambda_7cbe6e2ff7edb54ea653482a2b025563_--operator().c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_SetCameraCaptureState@AEAPEAXAEAEAEAEAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAXAEAE1AEAPEBG@Z @ 0x1803D24D0 (--$Shell_BroadcastDVRComponent_SetCameraCaptureState@AEAPEAXAEAEAEAEAEAPEBG@GameDVRTraceProvider.c)
 *     ?PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z @ 0x1803DD4C4 (-PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_SetCameraCaptureState(
        void *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  const unsigned __int16 *v10; // [rsp+50h] [rbp-B0h] BYREF
  void *v11; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v13; // [rsp+860h] [rbp+760h] BYREF
  unsigned __int64 v14; // [rsp+868h] [rbp+768h] BYREF

  v11 = a1;
  LOBYTE(v9) = a2;
  LOBYTE(v8) = a3;
  v10 = a4;
  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_SetCameraCaptureState");
  StringCchPrintfExW(v13, v14, &v13, &v14, 0, (wchar_t *)L"%S=0x%I64x ", "hWnd", a1, v8, v9, v10, v11);
  GameDVR_OutputDebug::PrintType((GameDVR_OutputDebug *)OutputString, "fBroadcastMode", a2);
  GameDVR_OutputDebug::PrintType((GameDVR_OutputDebug *)OutputString, "fCameraEnabled", a3);
  StringCchPrintfExW(v13, v14, &v13, &v14, 0, (wchar_t *)L"%S=\"%s\" ", "result", a4);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_SetCameraCaptureState<void * &,unsigned char &,unsigned char &,unsigned short const * &>(
    (__int64 *)&v11,
    (char *)&v9,
    (char *)&v8,
    (__int64 *)&v10);
}
