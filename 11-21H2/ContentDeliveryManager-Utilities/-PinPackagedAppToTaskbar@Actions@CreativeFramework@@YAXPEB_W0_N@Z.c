/*
 * XREFs of ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x1800C92E4
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C8C60 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x1800C911C (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinPackagedAppToTaskbar(
        PCWSTR packageFamilyName,
        PCWSTR packageRelativeApplicationId,
        const wchar_t *a3)
{
  char v3; // si
  unsigned int v6; // eax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  __int64 v10; // r8
  const wchar_t *v11; // r9
  CreativeFramework::Actions **v12; // rcx
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  CreativeFramework::Actions *v14[3]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h]
  WCHAR applicationUserModelId[136]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = (char)a3;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(
         packageFamilyName,
         packageRelativeApplicationId,
         &applicationUserModelIdLength,
         applicationUserModelId);
  v7 = 0LL;
  if ( v6 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      24LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
  v15 = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  if ( applicationUserModelId[0] )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( applicationUserModelId[v8] );
    v7 = v8;
  }
  std::wstring::assign((unsigned __int64 *)v14, (char *)applicationUserModelId, v7);
  v12 = v14;
  if ( v15 >= 8 )
    v12 = (CreativeFramework::Actions **)v14[0];
  LOBYTE(v11) = v3;
  CreativeFramework::Actions::PinApp((const WCHAR *)v12, v9, v10, v11);
  if ( v15 >= 8 )
    operator delete(v14[0]);
}
