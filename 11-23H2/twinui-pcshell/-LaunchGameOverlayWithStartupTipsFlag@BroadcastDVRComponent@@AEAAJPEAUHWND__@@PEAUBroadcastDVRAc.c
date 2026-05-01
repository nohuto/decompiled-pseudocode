/*
 * XREFs of ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D8EC4
 * Callers:
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x1803D10BC (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ @ 0x1803D4100 (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ.c)
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1803D921C (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(
        BroadcastDVRComponent *this,
        HWND a2,
        struct BroadcastDVRActiveAppInfo *a3)
{
  HWND v4; // r14
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, HSTRING *); // rdi
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v15; // r8
  int v16; // eax
  const WCHAR *v17; // rax
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  UINT32 v21; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-CCh] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 length; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v28; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER v29; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v30; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v32[512]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
    a2);
  v26 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  Windows::Internal::StringReference::_ConstructorHelper(
    (Windows::Internal::StringReference *)&v30,
    c_wzGameBarStartupTipsUri);
  v5 = (__int64 *)Windows::Internal::StringReference::StringReference(&v28, L"Windows.Foundation.Uri");
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         *v5,
         (__int64 *)&v26);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD66,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_24;
  }
  if ( a3 )
  {
    v25 = 0LL;
    dwProcessId = 0;
    GetWindowThreadProcessId(v4, &dwProcessId);
    string = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
    v9 = **v26;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v10 = v9(v8, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v25);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 3440LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v10);
      if ( string )
        WindowsDeleteString(string);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      goto LABEL_24;
    }
    v12 = v25;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v25 + 56LL);
    WindowsDeleteString(string);
    string = 0LL;
    v10 = v13(v12, *((_QWORD *)a3 + 6), &string);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 3441LL;
      goto LABEL_8;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    if ( length )
    {
      v15 = L"AumId";
      if ( !*((_BYTE *)a3 + 19) )
        v15 = L"TitleId";
      v16 = swprintf_s<512>(
              v32,
              L"ms-gamingoverlay://startuptips?%ls=%ls&ProcessId=%lu&WindowId=%llu",
              v15,
              StringRawBuffer,
              dwProcessId,
              v4);
    }
    else
    {
      v16 = swprintf_s<512>(v32, L"ms-gamingoverlay://startuptips?pid=%lu&WindowId=%llu", dwProcessId, v4);
    }
    if ( v16 > 0 )
    {
      Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&v28, v32);
      v21 = 0;
      v17 = WindowsGetStringRawBuffer(v28, &v21);
      v30 = 0LL;
      WindowsCreateStringReference(v17, v21, &hstringHeader, &v30);
    }
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  }
  v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[1])(v26);
  v28 = 0LL;
  v21 = 0;
  v18 = WindowsGetStringRawBuffer(v30, &v21);
  WindowsCreateStringReference(v18, v21, &v29, &v28);
  BroadcastDVRComponent::LaunchGameOverlayWithUri(v19, &v28, &v27);
  v7 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  return v7;
}
