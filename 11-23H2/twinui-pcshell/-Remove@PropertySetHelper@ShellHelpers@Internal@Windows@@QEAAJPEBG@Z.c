/*
 * XREFs of ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1803B0CE0
 * Callers:
 *     _lambda_667ec943145f044c0b36791820c9a348_::operator() @ 0x1803ACA30 (_lambda_667ec943145f044c0b36791820c9a348_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B8114 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x1800DDBC8 (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  PVOID Reserved1; // rdi
  int PropSetMap; // ebx
  int v6; // eax
  const WCHAR *v8[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[0] = L"ApplicationMultiviewActivationPolicy";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8, a3)[1].Reserved.Reserved1;
  v8[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))this,
                 (__int64)v8);
  if ( PropSetMap >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(const WCHAR *, PVOID))(*(_QWORD *)v8[0] + 88LL))(v8[0], Reserved1);
    PropSetMap = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  if ( PropSetMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropSetMap);
  return (unsigned int)PropSetMap;
}
