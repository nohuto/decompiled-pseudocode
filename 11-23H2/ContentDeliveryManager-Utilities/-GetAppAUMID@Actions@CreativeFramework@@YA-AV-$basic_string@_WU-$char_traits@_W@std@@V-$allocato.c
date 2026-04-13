/*
 * XREFs of ?GetAppAUMID@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800B5F40
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800B6170 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800B01C0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetAppAUMID(__int64 a1, const WCHAR *a2, const WCHAR *a3)
{
  unsigned int v6; // eax
  UINT32 applicationUserModelIdLength[4]; // [rsp+20h] [rbp-148h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  applicationUserModelIdLength[1] = HIDWORD(a1);
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v6 = FormatApplicationUserModelId(a2, a3, applicationUserModelIdLength, applicationUserModelId);
  if ( v6 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      23LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength[0]);
  std::wstring::wstring(a1);
  return a1;
}
