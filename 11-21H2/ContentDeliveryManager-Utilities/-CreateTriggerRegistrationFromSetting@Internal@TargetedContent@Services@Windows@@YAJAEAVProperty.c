/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C
 * Callers:
 *     _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x1800A9160 (_lambda_2547995382f4e95e159e6de1c858c05c_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE730 (std--_Func_impl_std--_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std_ea_1800AE730.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800962F4 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x1800A6B84 (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x1800AB1F0 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800AB584 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AC338 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800AC684 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800AC7E0 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  HSTRING *v8; // r9
  HSTRING *v9; // r9
  HSTRING *v10; // r9
  const WCHAR *StringRawBuffer; // rax
  int v12; // ecx
  int v13; // eax
  HSTRING *v14; // r9
  int v15; // eax
  HSTRING *v16; // r9
  int v17; // eax
  HSTRING *v18; // r9
  int v19; // eax
  HSTRING *v20; // r9
  int v21; // eax
  HSTRING *v22; // r9
  int v23; // eax
  HSTRING *v24; // r9
  int v25; // eax
  int v26; // edi
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int HasKey; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  int Int32; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edi
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v50; // r8
  int TriggerStateTransitionsFromSetting; // eax
  int v52; // eax
  int v53; // eax
  struct CreativeFramework::Triggers::PropertySetHelper *v54; // rax
  struct CreativeFramework::Triggers::PropertySetHelper *v55; // rcx
  const char *v56; // r9
  __int64 result; // rax
  int v58; // [rsp+20h] [rbp-98h]
  int v59; // [rsp+20h] [rbp-98h]
  HSTRING v60; // [rsp+40h] [rbp-78h] BYREF
  struct CreativeFramework::Triggers::PropertySetHelper *v61; // [rsp+48h] [rbp-70h] BYREF
  HSTRING string; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v63; // [rsp+58h] [rbp-60h] BYREF
  HSTRING v64; // [rsp+60h] [rbp-58h] BYREF
  HSTRING v65; // [rsp+68h] [rbp-50h] BYREF
  HSTRING v66; // [rsp+70h] [rbp-48h] BYREF
  HSTRING v67; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-38h] BYREF
  __int64 v69; // [rsp+88h] [rbp-30h] BYREF
  _QWORD v70[5]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v72; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v73; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v74; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  v67 = 0LL;
  try
  {
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
            (const wchar_t *)&v67,
            v5) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        358LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v58);
    WindowsDeleteString(0LL);
    v66 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
            (const wchar_t *)&v66,
            v6) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        360LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v58);
    WindowsDeleteString(0LL);
    v65 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
            (const wchar_t *)&v65,
            v7) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        362LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v58);
    WindowsDeleteString(0LL);
    v64 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
      (const wchar_t *)&v64,
      v8);
    WindowsDeleteString(0LL);
    v63 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
      (const wchar_t *)&v63,
      v9);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
            (const wchar_t *)&string,
            v10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        368LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v58);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(StringRawBuffer);
    v61 = 0LL;
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
            v12,
            v67,
            v66,
            v65,
            v64,
            v63,
            &v61);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        371LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v13,
        v59);
    WindowsDeleteString(0LL);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
           (const wchar_t *)&v60,
           v14) )
    {
      v15 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 72LL))(
              v61,
              v60);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          376LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v15,
          v59);
    }
    WindowsDeleteString(v60);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
           (const wchar_t *)&v60,
           v16) )
    {
      v17 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 104LL))(
              v61,
              v60);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          380LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v17,
          v59);
    }
    WindowsDeleteString(v60);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
           (const wchar_t *)&v60,
           v18) )
    {
      v19 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 152LL))(
              v61,
              v60);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          384LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v19,
          v59);
    }
    WindowsDeleteString(v60);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
           (const wchar_t *)&v60,
           v20) )
    {
      v21 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 216LL))(
              v61,
              v60);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          388LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v21,
          v59);
    }
    WindowsDeleteString(v60);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
           (const wchar_t *)&v60,
           v22) )
    {
      v23 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 232LL))(
              v61,
              v60);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          392LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v23,
          v59);
    }
    WindowsDeleteString(v60);
    v60 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"scoreName",
           (const wchar_t *)&v60,
           v24) )
    {
      v25 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v61 + 296LL))(
              v61,
              v60);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          396LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v25,
          v59);
    }
    v26 = *((_DWORD *)this + 4);
    if ( v26 < 0 )
    {
      v27 = (unsigned int)v26;
      v28 = 361LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)v27);
      goto LABEL_38;
    }
    HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
               this,
               L"delay",
               &v72);
    v26 = HasKey;
    if ( HasKey < 0 )
    {
      v27 = (unsigned int)HasKey;
      v28 = 366LL;
      goto LABEL_21;
    }
    if ( (_BYTE)v72 )
    {
      v72 = 0LL;
      v30 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
              this,
              L"delay",
              &v72);
      v26 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x178,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v30);
        v31 = v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        goto LABEL_38;
      }
      v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 104LL))(v72, &v69);
      v26 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v32);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x179,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v26);
        v33 = v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
LABEL_38:
        if ( v26 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            400LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v26,
            v59);
        v35 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64))(*(_QWORD *)v61 + 248LL))(
                v61,
                v69);
        if ( v35 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            401LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v35,
            v59);
        Int32 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                  this,
                  L"options",
                  &v73);
        if ( Int32 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            404LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)Int32,
            v59);
        v37 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v61 + 264LL))(
                v61,
                v73);
        if ( v37 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            405LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v37,
            v59);
        v38 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                this,
                L"predicateKind",
                &v74);
        if ( v38 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            408LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v38,
            v59);
        v39 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v61 + 120LL))(
                v61,
                v74);
        if ( v39 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            409LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v39,
            v59);
        v40 = *((_DWORD *)this + 4);
        if ( v40 >= 0 )
        {
          v43 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                  this,
                  L"scoreValue",
                  &v72);
          v40 = v43;
          if ( v43 >= 0 )
          {
            if ( (_BYTE)v72 )
            {
              v72 = 0LL;
              v44 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                      this,
                      L"scoreValue",
                      &v72);
              v40 = v44;
              if ( v44 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x178,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                  (const char *)(unsigned int)v44);
                v45 = v72;
                if ( v72 )
                {
                  v72 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                }
                goto LABEL_63;
              }
              v46 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v72 + 128LL))(v72, v70);
              v40 = v46;
              if ( v46 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x77,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                  (const char *)(unsigned int)v46);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x179,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                  (const char *)(unsigned int)v40);
                v47 = v72;
                if ( v72 )
                {
                  v72 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
                }
                goto LABEL_63;
              }
              v48 = v72;
              if ( v72 )
              {
                v72 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
              }
            }
            else
            {
              v70[0] = 0LL;
            }
            v40 = 0;
LABEL_63:
            if ( v40 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                412LL,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v40,
                v59);
            v49 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v61 + 312LL))(v61);
            if ( v49 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                413LL,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v49,
                v59);
            TriggerStateTransitionsFromSetting = Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
                                                   this,
                                                   v61,
                                                   v50);
            if ( TriggerStateTransitionsFromSetting < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                415LL,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)TriggerStateTransitionsFromSetting,
                v59);
            v52 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                    this,
                    L"conditionFlags",
                    &v68);
            if ( v52 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                418LL,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v52,
                v59);
            v53 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v61 + 280LL))(
                    v61,
                    v68);
            if ( v53 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                419LL,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v53,
                v59);
            v54 = v61;
            v61 = 0LL;
            *(_QWORD *)a2 = v54;
            WindowsDeleteString(v60);
            v60 = 0LL;
            v55 = v61;
            if ( v61 )
            {
              v61 = 0LL;
              (*(void (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v55 + 16LL))(v55);
            }
            WindowsDeleteString(string);
            string = 0LL;
            WindowsDeleteString(v63);
            v63 = 0LL;
            WindowsDeleteString(v64);
            v64 = 0LL;
            WindowsDeleteString(v65);
            v65 = 0LL;
            WindowsDeleteString(v66);
            v66 = 0LL;
            WindowsDeleteString(v67);
            return 0LL;
          }
          v41 = (unsigned int)v43;
          v42 = 366LL;
        }
        else
        {
          v41 = (unsigned int)v40;
          v42 = 361LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v42,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)v41);
        goto LABEL_63;
      }
      v34 = v72;
      if ( v72 )
      {
        v72 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    else
    {
      v69 = 0LL;
    }
    v26 = 0;
    goto LABEL_38;
  }
  catch ( ... )
  {
    LODWORD(v72) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1A8,
                     (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v56);
    return (unsigned int)v72;
  }
  return result;
}
