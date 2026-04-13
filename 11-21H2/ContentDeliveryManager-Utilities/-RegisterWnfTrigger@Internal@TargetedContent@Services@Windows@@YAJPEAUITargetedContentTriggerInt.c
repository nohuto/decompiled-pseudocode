/*
 * XREFs of ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A54D0 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A59B0 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A5A0C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800A65A0 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A6758 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C0C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC4C4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterWnfTrigger(
        Windows::Services::TargetedContent::Internal *a1,
        __int64 a2)
{
  ULONG v4; // ebx
  __int64 (__fastcall *v5)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rdi
  int v6; // eax
  int v7; // eax
  __int16 v8; // di
  HSTRING_HEADER *v9; // rcx
  HSTRING_HEADER *v10; // rdx
  HSTRING_HEADER *v11; // rdx
  char TaskOptionsFlagsForTrigger; // r12
  char TaskConditionFlagsForTrigger; // r13
  void **v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // si
  int v18; // r14d
  unsigned int v19; // r8d
  PVOID Reserved1; // rdi
  unsigned int v21; // r8d
  const WCHAR *v22; // rax
  HSTRING_HEADER *v23; // rax
  const char *v24; // r9
  __int64 result; // rax
  int v26; // [rsp+20h] [rbp-128h]
  unsigned int v27; // [rsp+50h] [rbp-F8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-F0h] BYREF
  int v29; // [rsp+60h] [rbp-E8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-E0h] BYREF
  const WCHAR *v31; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-D0h] BYREF
  int *v33; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-B8h]
  void *v35[3]; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+B0h] [rbp-98h]
  void *v37[3]; // [rsp+B8h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+D0h] [rbp-78h]
  HSTRING_HEADER v39; // [rsp+D8h] [rbp-70h] BYREF
  HSTRING_HEADER *v40; // [rsp+F0h] [rbp-58h]
  HSTRING_HEADER v41; // [rsp+F8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  try
  {
    v34 = a2;
    v4 = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
           a1,
           (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)a2).Data[0];
    v29 = 0;
    pv = 0LL;
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a1, &string);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        454LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v6,
        v26);
    v7 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
           a1,
           &v27);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        456LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v7,
        v26);
    v8 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v27);
    if ( ((v8 & 2) != 0 || !WindowsIsStringEmpty(string)) && (v8 & 0x100) == 0 )
    {
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(&v39, a1);
      v33 = &v29;
      v31 = (const WCHAR *)string;
      if ( !v40 )
        std::_Xbad_function_call();
      (*((void (__fastcall **)(HSTRING_HEADER *, const WCHAR **, LPVOID *, int **))v40->Reserved.Reserved1 + 2))(
        v40,
        &v31,
        &pv,
        &v33);
      v9 = v40;
      if ( v40 )
      {
        v10 = &v39;
        LOBYTE(v10) = v40 != &v39;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v40->Reserved.Reserved1 + 4))(v40, v10);
        v9 = 0LL;
        v40 = 0LL;
      }
      if ( v9 )
      {
        v11 = &v39;
        LOBYTE(v11) = v9 != &v39;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v9->Reserved.Reserved1 + 4))(v9, v11);
      }
    }
    TaskOptionsFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger((__int64)a1);
    TaskConditionFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger((__int64)a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v37, (__int64)a1);
    v14 = v37;
    if ( v38 >= 8 )
      v14 = (void **)v37[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v35, v14);
    v32 = 0LL;
    v15 = *(_QWORD *)(a2 + 8);
    v16 = *(_QWORD *)a2;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v32, v16, v15);
    v17 = v29;
    v18 = (int)pv;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)&off_180111BF0, v19)[1].Reserved.Reserved1;
    v22 = (const WCHAR *)v35;
    if ( v36 >= 8 )
      v22 = (const WCHAR *)v35[0];
    v31 = v22;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v41, &v31, v21);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
      v23[1].Reserved.Reserved1,
      (_DWORD)Reserved1,
      v4,
      v18,
      v17,
      TaskConditionFlagsForTrigger,
      TaskOptionsFlagsForTrigger,
      (__int64)&v32);
    if ( v36 >= 8 )
      operator delete(v35[0]);
    v36 = 7LL;
    v35[2] = 0LL;
    LOWORD(v35[0]) = 0;
    if ( v38 >= 8 )
      operator delete(v37[0]);
    v38 = 7LL;
    v37[2] = 0LL;
    LOWORD(v37[0]) = 0;
    WindowsDeleteString(string);
    string = 0LL;
    if ( pv )
      CoTaskMemFree(pv);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v27 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1D8,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v24);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v34);
    return v27;
  }
  return result;
}
