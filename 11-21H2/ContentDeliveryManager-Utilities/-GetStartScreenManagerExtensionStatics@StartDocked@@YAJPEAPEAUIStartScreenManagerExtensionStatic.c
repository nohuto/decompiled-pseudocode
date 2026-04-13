/*
 * XREFs of ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF590
 * Callers:
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800BCFE0 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800E2404 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall StartDocked::GetStartScreenManagerExtensionStatics(
        StartDocked *this,
        struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, HSTRING, __int64 *); // r14
  HRESULT v9; // eax
  unsigned int v10; // r8d
  HSTRING v11; // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-19h] BYREF
  __int64 v17; // [rsp+38h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-9h] BYREF
  HSTRING string; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER v20; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_QWORD *)this = 0LL;
  v17 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsUdk.ApplicationModel.AppExtensions.ExtensionFactory",
         0x3Au,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
LABEL_28:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x1800BF842LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_836da1ed_5be8_5365_8452_6af327aa427b, &v17);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v5;
  }
  v16 = 0LL;
  v7 = v17;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, __int64 *))(*(_QWORD *)v17 + 80LL);
  v16 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"WindowsUdk.UI.StartScreen.StartScreenManagerExtension",
         0x35u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    goto LABEL_28;
  }
  v11 = string;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_180119E08, v10);
  v13 = v8(v7, v12[1].Reserved.Reserved1, v11, &v16);
  v5 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v13);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v5;
  }
  v14 = v16;
  if ( v16 )
  {
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, StartDocked *))v16)(
            v16,
            &GUID_4c550f3f_f924_5f93_bef5_7b65b013cc8e,
            this);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
        (const char *)(unsigned int)v15);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      return v5;
    }
    v14 = v16;
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
