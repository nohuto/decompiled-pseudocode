/*
 * XREFs of ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF84C
 * Callers:
 *     ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800BFC6C (-IsPinnedToStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@U.c)
 *     ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800C1740 (-SwapTilesInStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT v9; // eax
  int ActivationFactory; // eax
  int v11; // eax
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13[1] = a1;
  *a2 = 0LL;
  string = 0LL;
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)*a1 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(v4, &string);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v6);
    WindowsDeleteString(string);
    string = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    return v7;
  }
  v13[0] = 0LL;
  v15 = 0LL;
  v9 = WindowsCreateStringReference(L"WindowsUdk.UI.StartScreen.TileId", 0x20u, &hstringHeader, &v15);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    JUMPOUT(0x1800BFAF8LL);
  }
  ActivationFactory = RoGetActivationFactory(v15, &GUID_a04afcd6_91ec_52d7_ab03_75f8cc65a086, v13);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    WindowsDeleteString(string);
    string = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    return v7;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD *))(*(_QWORD *)v13[0] + 72LL))(v13[0], string, a2);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v11);
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    WindowsDeleteString(string);
    string = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    return v7;
  }
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  WindowsDeleteString(string);
  string = 0LL;
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return 0LL;
}
