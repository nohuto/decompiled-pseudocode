/*
 * XREFs of ?BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z @ 0x180083340
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x1800839E8 (--$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAP.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OnApplicationViewChanged_NewApp(
        void *a1,
        void *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5,
        const unsigned __int16 *a6)
{
  const unsigned __int16 *v6; // r15
  int v8; // r14d
  int v10; // esi
  __int64 v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  const unsigned __int16 *v16; // [rsp+50h] [rbp-B0h] BYREF
  void *v17; // [rsp+58h] [rbp-A8h] BYREF
  void *v18; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR OutputString[1024]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v20; // [rsp+870h] [rbp+770h] BYREF
  unsigned __int64 v21; // [rsp+878h] [rbp+778h] BYREF

  v6 = a6;
  v8 = a4;
  v10 = a3;
  v18 = a1;
  v17 = a2;
  LOBYTE(v15) = a3;
  LOBYTE(v14) = a4;
  v16 = a6;
  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_OnApplicationViewChanged_NewApp");
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=0x%I64x ", "hWnd", a1, v14, v15, v16, v17, v18);
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=0x%I64x ", "hWndRoot", a2);
  LODWORD(v11) = v10;
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=%d ", "fIsGame", v11);
  LODWORD(v12) = v8;
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=%d ", "fIsBlocked", v12);
  LODWORD(v13) = a5;
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=%d ", "fIsXboxApp", v13);
  StringCchPrintfExW(v20, v21, &v20, &v21, 0, (wchar_t *)L"%S=\"%s\" ", "presenceId", v6);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp<void * &,void * &,bool &,bool &,bool &,unsigned short const * &>(
    (unsigned int)&v18,
    (unsigned int)&v17,
    (unsigned int)&v15,
    (unsigned int)&v14,
    (__int64)&a5,
    (__int64)&v16);
}
