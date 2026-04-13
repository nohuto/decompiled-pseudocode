/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800DF938
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E2D34 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075448 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??_9ITargetedContentContainerStatics@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800DCA1C (--_9ITargetedContentContainerStatics@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        __int64 *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  WCHAR *v9; // rdi
  int v10; // eax
  WCHAR *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  const char *StringRawBuffer; // rax
  int v17; // [rsp+20h] [rbp-78h]
  WCHAR *v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v21; // [rsp+50h] [rbp-48h]
  __int64 *v22; // [rsp+58h] [rbp-40h]
  HSTRING_HEADER v23; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = a2;
  v22 = a2;
  v21 = a3;
  *a2 = 0LL;
  v18 = (WCHAR *)L"Windows.Services.TargetedContent.TargetedContentContainer";
  v20 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&v18, (unsigned int)a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, &v20);
  try
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1686LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory,
        v17);
    v18 = 0LL;
    v6 =  Windows::Services::TargetedContent::ITargetedContentContainerStatics::`vcall'{48,{flat}}(v20);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1671LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v6,
        v17);
    v9 = v18;
    v19 = 0LL;
    v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
            (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v18,
            v7,
            v8);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(WCHAR *, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1647LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v10,
        v17);
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v19;
    v13 = 0LL;
    v19 = 0LL;
    v14 = *v3;
    *v3 = v12;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v19;
    }
    if ( v13 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v20 )
      (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v21, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (unsigned __int16 *)0x133,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v22;
  }
  return v3;
}
