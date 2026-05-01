/*
 * XREFs of ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x180083590
 * Callers:
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_EvaluateIfViewIsGame(
        void *a1,
        void *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5,
        const unsigned __int16 *a6,
        bool a7,
        bool a8)
{
  const WCHAR *v8; // rbx
  int v11; // r15d
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // ecx
  REGHANDLE v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  bool v23; // [rsp+40h] [rbp-C0h] BYREF
  bool v24; // [rsp+41h] [rbp-BFh] BYREF
  bool v25; // [rsp+42h] [rbp-BEh] BYREF
  char v26; // [rsp+43h] [rbp-BDh] BYREF
  char v27; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h]
  void *v29; // [rsp+50h] [rbp-B0h] BYREF
  void *v30; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR OutputString[1024]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v33; // [rsp+870h] [rbp+770h] BYREF
  unsigned __int64 v34; // [rsp+878h] [rbp+778h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+880h] [rbp+780h] BYREF
  void *v36; // [rsp+890h] [rbp+790h]
  int v37; // [rsp+898h] [rbp+798h]
  int v38; // [rsp+89Ch] [rbp+79Ch]
  void **v39; // [rsp+8A0h] [rbp+7A0h]
  __int64 v40; // [rsp+8A8h] [rbp+7A8h]
  void **v41; // [rsp+8B0h] [rbp+7B0h]
  __int64 v42; // [rsp+8B8h] [rbp+7B8h]
  char *v43; // [rsp+8C0h] [rbp+7C0h]
  __int64 v44; // [rsp+8C8h] [rbp+7C8h]
  char *v45; // [rsp+8D0h] [rbp+7D0h]
  __int64 v46; // [rsp+8D8h] [rbp+7D8h]
  bool *v47; // [rsp+8E0h] [rbp+7E0h]
  __int64 v48; // [rsp+8E8h] [rbp+7E8h]
  const WCHAR *v49; // [rsp+8F0h] [rbp+7F0h]
  int v50; // [rsp+8F8h] [rbp+7F8h]
  int v51; // [rsp+8FCh] [rbp+7FCh]
  bool *v52; // [rsp+900h] [rbp+800h]
  __int64 v53; // [rsp+908h] [rbp+808h]
  bool *v54; // [rsp+910h] [rbp+810h]
  __int64 v55; // [rsp+918h] [rbp+818h]

  v8 = a6;
  v11 = a4;
  v12 = a3;
  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_EvaluateIfViewIsGame");
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=0x%I64x ", "hWnd", a1);
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=0x%I64x ", "hWndRoot", a2);
  LODWORD(v18) = v12;
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=%d ", "fIsGame", v18);
  LODWORD(v19) = v11;
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=%d ", "fIsBlocked", v19);
  LODWORD(v20) = a5;
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=%d ", "fIsModern", v20);
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=\"%s\" ", "pwszAppId", a6);
  LODWORD(v21) = a7;
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=%d ", "fIsXboxApp", v21);
  LODWORD(v22) = a8;
  StringCchPrintfExW(v33, v34, &v33, &v34, 0, (wchar_t *)L"%S=%d ", "fIsCentennial", v22);
  GameDVR_OutputDebug::OutputString(OutputString);
  v14 = *(_QWORD *)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v13,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v14 > 5u )
  {
    v23 = a8;
    v24 = a7;
    v54 = &v23;
    v52 = &v24;
    v25 = a5;
    v26 = v11;
    v27 = v12;
    v29 = a2;
    v30 = a1;
    v55 = 1LL;
    v53 = 1LL;
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v8 = &LocaleName;
      v16 = 2;
    }
    v50 = v16;
    v47 = &v25;
    v51 = 0;
    v45 = &v26;
    v43 = &v27;
    v41 = &v29;
    v39 = &v30;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v14 + 8);
    v48 = 1LL;
    v46 = 1LL;
    v44 = 1LL;
    EventDescriptor.Keyword = 0LL;
    v49 = v8;
    v42 = 8LL;
    v40 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v36 = &unk_180847125;
    UserData.Reserved = 2;
    v17 = *(_QWORD *)(v14 + 32);
    v38 = 1;
    v37 = 143;
    v28 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v17, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
