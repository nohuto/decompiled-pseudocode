/*
 * XREFs of ?CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800B2180
 * Callers:
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800B3D28 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800B0210 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::LaunchUriService::CreateApplicationUserModelIdFromPackageData(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  unsigned int v7; // eax
  UINT32 applicationUserModelIdLength[4]; // [rsp+20h] [rbp-148h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  applicationUserModelIdLength[1] = HIDWORD(a2);
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v7 = FormatApplicationUserModelId(a3, a4, applicationUserModelIdLength, applicationUserModelId);
  if ( v7 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      140LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v7,
      applicationUserModelIdLength[0]);
  std::wstring::wstring(a2);
  return a2;
}
