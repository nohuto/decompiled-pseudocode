/*
 * XREFs of ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5DBC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1800A4CB8 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5020 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A6608 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??$make_wnf_subscription@$$BY0CA@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@K@Z @ 0x1800A6818 (--$make_wnf_subscription@$$BY0CA@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F0958 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800F1854 (-IsAnyOOBE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(unsigned_char_const_&)_::function_void___cdecl(unsigned_char_const_&)___lambda_7d0739256fada0ff8c98c9de4f75de3b__void_ @ 0x180203C38 (wistd--function_void___cdecl(unsigned_char_const_-)_--function_void___cdecl(unsigned_char_const_.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications(
        TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  TouchKeyboardExperienceManager *v4; // rdi
  TouchKeyboardExperienceManager *v5; // rax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  TouchKeyboardExperienceManager *v7; // rdi
  TouchKeyboardExperienceManager *v8; // rax
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  TouchKeyboardExperienceManager *v10; // rdi
  TouchKeyboardExperienceManager *v11; // rax
  struct wil::details::wnf_subscription_state_base *v12; // rdx
  TouchKeyboardExperienceManager *v13; // rdi
  TouchKeyboardExperienceManager *v14; // rax
  struct wil::details::wnf_subscription_state_base *v15; // rdx
  TouchKeyboardExperienceManager *v16; // rdi
  TouchKeyboardExperienceManager *v17; // rax
  struct wil::details::wnf_subscription_state_base *v18; // rdx
  TouchKeyboardExperienceManager *v19; // rdi
  TouchKeyboardExperienceManager *v20; // rax
  struct wil::details::wnf_subscription_state_base *v21; // rdx
  TouchKeyboardExperienceManager *v22; // rdi
  TouchKeyboardExperienceManager *v23; // rax
  struct wil::details::wnf_subscription_state_base *v24; // rdx
  TouchKeyboardExperienceManager *v25; // rdi
  TouchKeyboardExperienceManager *wnf; // rax
  struct wil::details::wnf_subscription_state_base *v27; // rdx
  TouchKeyboardExperienceManager *v28; // rdi
  TouchKeyboardExperienceManager *v29; // rax
  struct wil::details::wnf_subscription_state_base *v30; // rdx
  TouchKeyboardExperienceManager *v31; // rdi
  __int64 v32; // rdx
  TouchKeyboardExperienceManager *v33; // rax
  struct wil::details::wnf_subscription_state_base *v34; // rdx
  TouchKeyboardExperienceManager *v35; // rdi
  TouchKeyboardExperienceManager *v36; // rax
  struct wil::details::wnf_subscription_state_base *v37; // rdx
  TouchKeyboardExperienceManager *v38; // rdi
  const char *v39; // r9
  TouchKeyboardExperienceManager *v40; // rax
  struct wil::details::wnf_subscription_state_base *v41; // rdx
  TouchKeyboardExperienceManager *v42; // rdi
  TouchKeyboardExperienceManager *v43; // rax
  struct wil::details::wnf_subscription_state_base *v44; // rdx
  TouchKeyboardExperienceManager *v45; // rdi
  TouchKeyboardExperienceManager *v46; // rax
  struct wil::details::wnf_subscription_state_base *v47; // rdx
  TouchKeyboardExperienceManager *v48; // rdi
  TouchKeyboardExperienceManager *v49; // rax
  struct wil::details::wnf_subscription_state_base *v50; // rdx
  TouchKeyboardExperienceManager *v51; // rdi
  __int64 v52; // rdx
  TouchKeyboardExperienceManager *v53; // rax
  struct wil::details::wnf_subscription_state_base *v54; // rdx
  TouchKeyboardExperienceManager *v55; // rdi
  wil::details *v56[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v57[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+40h] [rbp-31h] BYREF
  TouchKeyboardExperienceManager *v59; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v60)(); // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v58 = off_1807A03B8;
  v59 = this;
  v60 = &v58;
  v2 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                           v56,
                                           &WNF_ENTR_FULLLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                           v57,
                                           0LL);
  v4 = v2;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2232) != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2232,
      *(_QWORD *)v2);
    *(_QWORD *)v4 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v3);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A03E0;
  v59 = this;
  v60 = &v58;
  v5 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                           v56,
                                           &WNF_ENTR_WIDELAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                           v57,
                                           0LL);
  v7 = v5;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2248) != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2248,
      *(_QWORD *)v5);
    *(_QWORD *)v7 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v6);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0408;
  v59 = this;
  v60 = &v58;
  v8 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                           v56,
                                           &WNF_ENTR_NARROWLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                           v57,
                                           0LL);
  v10 = v8;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2240) != v8 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2240,
      *(_QWORD *)v8);
    *(_QWORD *)v10 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v9);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0430;
  v59 = this;
  v60 = &v58;
  v11 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_HANDWRITING_AVAILABILITY_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v13 = v11;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2256) != v11 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2256,
      *(_QWORD *)v11);
    *(_QWORD *)v13 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v12);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0458;
  v59 = this;
  v60 = &v58;
  v14 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_SPLITLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v16 = v14;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2264) != v14 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2264,
      *(_QWORD *)v14);
    *(_QWORD *)v16 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v15);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0480;
  v59 = this;
  v60 = &v58;
  v17 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_EMOJI_AVAILABILITY_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v19 = v17;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2272) != v17 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2272,
      *(_QWORD *)v17);
    *(_QWORD *)v19 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v18);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A04A8;
  v59 = this;
  v60 = &v58;
  v20 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_FORCEDOCKED_TOUCHKEYBOARD_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v22 = v20;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2280) != v20 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2280,
      *(_QWORD *)v20);
    *(_QWORD *)v22 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v21);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A04D0;
  v59 = this;
  v60 = &v58;
  v23 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_TOUCHKEYBOARDDICTATION_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v25 = v23;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2288) != v23 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2288,
      *(_QWORD *)v23);
    *(_QWORD *)v25 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v24);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A04F8;
  v59 = this;
  v60 = &v58;
  wnf = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<unsigned long>(
                                            v56,
                                            (__int64)&WNF_ACC_EC_ENABLED,
                                            (__int64)v57);
  v28 = wnf;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2296) != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2296,
      *(_QWORD *)wnf);
    *(_QWORD *)v28 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v27);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0520;
  v59 = this;
  v60 = &v58;
  v29 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_ALLOWLINGUISTICDATACOLLECTION_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v31 = v29;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2320) != v29 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2320,
      *(_QWORD *)v29);
    *(_QWORD *)v31 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v30);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  LOBYTE(v32) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    v32);
  v58 = off_1807A0548;
  v59 = this;
  v60 = &v58;
  v33 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_ENTR_TEXTINPUTSUGGESTIONUPDATE_POLICY_VALUE_CHANGED,
                                            v57,
                                            0LL);
  v35 = v33;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2312) != v33 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2312,
      *(_QWORD *)v33);
    *(_QWORD *)v35 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v34);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0570;
  v59 = this;
  v60 = &v58;
  v36 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_SPCH_ALLOW_REMOTE_SPEECH_SERVICES,
                                            v57,
                                            0LL);
  v38 = v36;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2352) != v36 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2352,
      *(_QWORD *)v36);
    *(_QWORD *)v38 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v37);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  if ( IsAnyOOBE()
    && !(unsigned int)RegisterWaitUntilOOBECompleted(
                        TouchKeyboardExperienceManager::OobeCompletedCallback,
                        this,
                        (char *)this + 960) )
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x9D3,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v39);
  }
  v58 = off_1807A0598;
  v59 = this;
  v60 = &v58;
  v40 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<unsigned char [32]>(
                                            v56,
                                            &WNF_TKBN_TOUCH_EVENT,
                                            v57);
  v42 = v40;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2328) != v40 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2328,
      *(_QWORD *)v40);
    *(_QWORD *)v42 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v41);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0598;
  v59 = this;
  v60 = &v58;
  v43 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<unsigned char [32]>(
                                            v56,
                                            &WNF_TKBN_RESTRICTED_TOUCH_EVENT,
                                            v57);
  v45 = v43;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2336) != v43 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2336,
      *(_QWORD *)v43);
    *(_QWORD *)v45 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v44);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A0598;
  v59 = this;
  v60 = &v58;
  v46 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<unsigned char [32]>(
                                            v56,
                                            &WNF_TKBN_SYSTEM_TOUCH_EVENT,
                                            v57);
  v48 = v46;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2344) != v46 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2344,
      *(_QWORD *)v46);
    *(_QWORD *)v48 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v47);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  v58 = off_1807A05C0;
  v59 = this;
  v60 = &v58;
  v49 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                            v56,
                                            &WNF_CDP_ALLOW_CLIPBOARDHISTORY_POLICY_CHANGE,
                                            v57,
                                            0LL);
  v51 = v49;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2368) != v49 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2368,
      *(_QWORD *)v49);
    *(_QWORD *)v51 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v50);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
  wistd::function_void___cdecl_unsigned_char_const____::function_void___cdecl_unsigned_char_const______lambda_7d0739256fada0ff8c98c9de4f75de3b__void_(
    v57,
    this);
  v53 = (TouchKeyboardExperienceManager *)wil::make_wnf_subscription<unsigned char>(v56, v52, (__int64)v57);
  v55 = v53;
  if ( (TouchKeyboardExperienceManager *)((char *)this + 2376) != v53 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 2376,
      *(_QWORD *)v53);
    *(_QWORD *)v55 = 0LL;
  }
  if ( v56[0] )
    wil::details::delete_wnf_subscription_state(v56[0], v54);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v57);
}
