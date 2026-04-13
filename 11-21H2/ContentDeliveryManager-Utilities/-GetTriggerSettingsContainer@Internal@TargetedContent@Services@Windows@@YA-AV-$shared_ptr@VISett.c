/*
 * XREFs of ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AB6C4
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x1800A01AC (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800A9544 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x1800A4E84 (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A5E7C (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A6758 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C0C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800AB380 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
const WCHAR **__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
        const WCHAR **a1,
        __int64 a2)
{
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 *v8; // rbx
  unsigned int v9; // r8d
  const WCHAR *v10; // rdi
  __int64 (__fastcall *v11)(const WCHAR *, _QWORD *, PVOID, __int64); // rbx
  void **v12; // rax
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rdx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rbx
  int v19; // eax
  __int16 v20; // di
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rbx
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  const WCHAR *v25; // rcx
  const WCHAR *v26; // rdx
  __int64 (__fastcall *v27)(__int64, HSTRING *); // rbx
  int v28; // eax
  char *v29; // rax
  unsigned __int64 v30; // r8
  unsigned int v31; // r8d
  HSTRING_HEADER *v32; // rcx
  HSTRING_HEADER *v33; // rdx
  HSTRING_HEADER *v34; // rdx
  char *v35; // rax
  unsigned __int64 *v36; // rbx
  const WCHAR *v37; // rdi
  __int64 (__fastcall *v38)(const WCHAR *, _QWORD *, PVOID, __int64); // rbx
  const WCHAR *v39; // rax
  HSTRING_HEADER *v40; // rax
  __int64 v41; // r9
  const WCHAR **v42; // rax
  const WCHAR *v43; // rcx
  const WCHAR *v44; // rdx
  int v46; // [rsp+20h] [rbp-99h]
  HSTRING v47; // [rsp+30h] [rbp-89h] BYREF
  HSTRING v48; // [rsp+38h] [rbp-81h] BYREF
  int v49; // [rsp+40h] [rbp-79h] BYREF
  HSTRING string; // [rsp+48h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-69h] BYREF
  int v52; // [rsp+58h] [rbp-61h]
  HSTRING v53; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v54[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v55[2]; // [rsp+78h] [rbp-41h] BYREF
  void *v56[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v57; // [rsp+98h] [rbp-21h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-19h]
  WCHAR *v59; // [rsp+A8h] [rbp-11h] BYREF
  const WCHAR *v60; // [rsp+B0h] [rbp-9h]
  __int64 v61; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v62; // [rsp+C0h] [rbp+7h]
  HSTRING_HEADER v63; // [rsp+C8h] [rbp+Fh] BYREF
  HSTRING_HEADER *v64; // [rsp+E0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v55[0] = a1;
  v52 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v49);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      213LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4,
      v46);
  Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer((__int64)a1, v49);
  v52 = 1;
  string = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a2, &string);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      217LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6,
      v46);
  v58 = 7LL;
  v57 = 0LL;
  LOWORD(v56[0]) = 0;
  if ( !WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v8 = Windows::Services::TargetedContent::Internal::NormalizedString((unsigned __int64 *)&v63, StringRawBuffer);
    if ( v56 != (void **)v8 )
    {
      if ( v58 >= 8 )
        operator delete(v56[0]);
      v58 = 7LL;
      v57 = 0LL;
      LOWORD(v56[0]) = 0;
      std::wstring::_Assign_rv(v56, v8);
    }
    if ( (unsigned __int64)v64 >= 8 )
      operator delete(v63.Reserved.Reserved1);
    v10 = *a1;
    v11 = **(__int64 (__fastcall ***)(const WCHAR *, _QWORD *, PVOID, __int64))*a1;
    v12 = v56;
    if ( v58 >= 8 )
      v12 = (void **)v56[0];
    pv = v12;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, (const WCHAR **)&pv, v9);
    LOBYTE(v14) = 1;
    v15 = v11(v10, v54, v13[1].Reserved.Reserved1, v14);
    v16 = 0LL;
    v17 = 0LL;
    if ( &v59 != (WCHAR **)v15 )
    {
      v16 = *(const WCHAR **)(v15 + 8);
      *(_QWORD *)(v15 + 8) = 0LL;
      v17 = *(const WCHAR **)v15;
      *(_QWORD *)v15 = 0LL;
    }
    v60 = a1[1];
    a1[1] = v16;
    v59 = (WCHAR *)*a1;
    *a1 = v17;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v59);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v54);
  }
  v47 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
  WindowsDeleteString(0LL);
  v47 = 0LL;
  v19 = v18(a2, &v47);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      226LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19,
      v46);
  v20 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v49);
  if ( (v20 & 0x10) != 0 )
  {
    v48 = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL);
    WindowsDeleteString(0LL);
    v48 = 0LL;
    v22 = v21(a2, &v48);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        231LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v22,
        v46);
    LOBYTE(v23) = 1;
    v24 = (**(__int64 (__fastcall ***)(const WCHAR *, _QWORD *, HSTRING, __int64))*a1)(*a1, v54, v48, v23);
    v25 = 0LL;
    v26 = 0LL;
    if ( &v59 != (WCHAR **)v24 )
    {
      v25 = *(const WCHAR **)(v24 + 8);
      *(_QWORD *)(v24 + 8) = 0LL;
      v26 = *(const WCHAR **)v24;
      *(_QWORD *)v24 = 0LL;
    }
    v60 = a1[1];
    a1[1] = v25;
    v59 = (WCHAR *)*a1;
    *a1 = v26;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v59);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v54);
    if ( WindowsIsStringEmpty(v47) )
    {
      v27 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL);
      WindowsDeleteString(v47);
      v47 = 0LL;
      v28 = v27(a2, &v47);
      if ( v28 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          238LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v28,
          v46);
    }
    WindowsDeleteString(v48);
  }
  if ( !WindowsIsStringEmpty(v47) )
  {
    if ( (v20 & 0x101) == 1 )
    {
      LODWORD(v48) = 0;
      pv = 0LL;
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(&v63, a2);
      v54[0] = &v48;
      v59 = (WCHAR *)v47;
      if ( !v64 )
        std::_Xbad_function_call();
      (*((void (__fastcall **)(HSTRING_HEADER *, WCHAR **, LPVOID *, _QWORD *))v64->Reserved.Reserved1 + 2))(
        v64,
        &v59,
        &pv,
        v54);
      Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&v53, (unsigned int)v48, (__int64)pv);
      v29 = (char *)WindowsGetStringRawBuffer(v53, 0LL);
      v62 = 7LL;
      v61 = 0LL;
      LOWORD(v59) = 0;
      if ( *(_WORD *)v29 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( *(_WORD *)&v29[2 * v30] );
      }
      else
      {
        v30 = 0LL;
      }
      std::wstring::assign((unsigned __int64 *)&v59, v29, v30);
      if ( v58 >= 8 )
        operator delete(v56[0]);
      v58 = 7LL;
      v57 = 0LL;
      LOWORD(v56[0]) = 0;
      std::wstring::_Assign_rv(v56, &v59);
      if ( v62 >= 8 )
        operator delete(v59);
      WindowsDeleteString(v53);
      v53 = 0LL;
      v32 = v64;
      if ( v64 )
      {
        v33 = &v63;
        LOBYTE(v33) = v64 != &v63;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v64->Reserved.Reserved1 + 4))(v64, v33);
        v32 = 0LL;
        v64 = 0LL;
      }
      if ( v32 )
      {
        v34 = &v63;
        LOBYTE(v34) = v32 != &v63;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v32->Reserved.Reserved1 + 4))(v32, v34);
        v64 = 0LL;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      v35 = (char *)WindowsGetStringRawBuffer(v47, 0LL);
      v36 = Windows::Services::TargetedContent::Internal::NormalizedString((unsigned __int64 *)&v63, v35);
      if ( v56 != (void **)v36 )
      {
        if ( v58 >= 8 )
          operator delete(v56[0]);
        v58 = 7LL;
        v57 = 0LL;
        LOWORD(v56[0]) = 0;
        std::wstring::_Assign_rv(v56, v36);
      }
      if ( (unsigned __int64)v64 >= 8 )
        operator delete(v63.Reserved.Reserved1);
    }
    v37 = *a1;
    v38 = **(__int64 (__fastcall ***)(const WCHAR *, _QWORD *, PVOID, __int64))*a1;
    v39 = (const WCHAR *)v56;
    if ( v58 >= 8 )
      v39 = (const WCHAR *)v56[0];
    v59 = (WCHAR *)v39;
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, (const WCHAR **)&v59, v31);
    LOBYTE(v41) = 1;
    v42 = (const WCHAR **)v38(v37, v54, v40[1].Reserved.Reserved1, v41);
    v43 = 0LL;
    v44 = 0LL;
    if ( v55 != v42 )
    {
      v43 = v42[1];
      v42[1] = 0LL;
      v44 = *v42;
      *v42 = 0LL;
    }
    v55[1] = a1[1];
    a1[1] = v43;
    v55[0] = *a1;
    *a1 = v44;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v55);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v54);
  }
  WindowsDeleteString(v47);
  v47 = 0LL;
  if ( v58 >= 8 )
    operator delete(v56[0]);
  v58 = 7LL;
  v57 = 0LL;
  LOWORD(v56[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
