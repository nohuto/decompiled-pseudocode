/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DCAC0
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E2D34 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800DB648 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     ??_9ITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800DCA5C (--_9ITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v3; // rax
  int ActivationFactory; // eax
  int v5; // eax
  DWORD v6; // edx
  int v7; // r8d
  wchar_t *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  wchar_t *v11; // rcx
  __int64 v12; // rcx
  wchar_t *v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v16; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = (wchar_t *)L"Windows.Services.TargetedContent.TargetedContentSubscription";
  v15 = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)&v13, a3);
  ActivationFactory = RoGetActivationFactory(v3[1].Reserved.Reserved1, &GUID_faddfe80_360d_4916_b53c_7ea27090d02a, &v15);
  try
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1686LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory,
        1);
    v13 = 0LL;
    v5 =  Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics::`vcall'{48,{flat}}(v15);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1671LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v5,
        1);
    v8 = v13;
    v14 = 0LL;
    v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13,
           v6,
           v7);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(wchar_t *, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1647LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v9,
        9);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x126,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v10);
  }
}
