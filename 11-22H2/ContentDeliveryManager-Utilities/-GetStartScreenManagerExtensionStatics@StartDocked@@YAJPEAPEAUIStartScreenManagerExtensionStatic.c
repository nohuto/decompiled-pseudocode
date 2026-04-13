/*
 * XREFs of ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800AE190
 * Callers:
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800AC6C8 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 *     ??0LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C7058 (--0LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall StartDocked::GetStartScreenManagerExtensionStatics(
        StartDocked *this,
        struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, StartDocked *)); // rsi
  __int64 v7; // rdi
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, StartDocked *); // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-9h] BYREF
  __int64 v16; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER v17; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_QWORD *)this = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsUdk.ApplicationModel.AppExtensions.ExtensionFactory",
    0x3Bu,
    0x3Au);
  ActivationFactory = RoGetActivationFactory(v16, &GUID_836da1ed_5be8_5365_8452_6af327aa427b, &v14);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v13 = 0LL;
    v5 = v14;
    v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, StartDocked *)))(*(_QWORD *)v14 + 80LL);
    v13 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsUdk.UI.StartScreen.StartScreenManagerExtension",
      0x36u,
      0x35u);
    v7 = v16;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)&off_1800FE0B0, v8);
    v10 = v6(v5, v9[1].Reserved.Reserved1, v7, &v13);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 82LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v13);
      goto LABEL_11;
    }
    if ( v13 )
    {
      v10 = (**v13)(v13, &GUID_4c550f3f_f924_5f93_bef5_7b65b013cc8e, this);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 83LL;
        goto LABEL_5;
      }
    }
    else
    {
      *(_QWORD *)this = 0LL;
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v13);
    v4 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
    (const char *)(unsigned int)ActivationFactory);
LABEL_11:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  return v4;
}
