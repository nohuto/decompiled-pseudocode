/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x1800C2D60
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C2BD0 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r8d
  wil::details::in1diag3 *v8; // rcx
  HSTRING_HEADER *v9; // rax
  int ActivationFactory; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, HSTRING); // rdi
  unsigned __int64 v13; // rcx
  HRESULT v14; // eax
  __int64 result; // rax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+24h] [rbp-DCh]
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v19; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v17 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a1, a2, &applicationUserModelIdLength, applicationUserModelId);
  v8 = retaddr;
  if ( v6 )
LABEL_14:
    wil::details::in1diag3::_Throw_Win32(
      v8,
      45LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
  v19 = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  v17 = 1;
  v18 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v19, v7);
  ActivationFactory = RoGetActivationFactory(v9[1].Reserved.Reserved1, &GUID_491635eb_1fd0_5465_bbf8_cc0b37d30613, &v18);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1686LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      applicationUserModelIdLength);
  v11 = v18;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v18 + 48LL);
  v13 = -1LL;
  do
    ++v13;
  while ( applicationUserModelId[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_14;
  }
  if ( (int)v13 + 1 < (unsigned int)v13 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v14 = WindowsCreateStringReference(applicationUserModelId, v13, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    JUMPOUT(0x1800C2F49LL);
  }
  result = v12(v11, a3, string);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      48LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)result,
      applicationUserModelIdLength);
  if ( v18 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return result;
}
