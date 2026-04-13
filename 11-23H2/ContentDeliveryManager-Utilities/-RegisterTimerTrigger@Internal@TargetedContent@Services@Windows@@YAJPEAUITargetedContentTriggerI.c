/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180098760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097EB8 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097F88 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180098310 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180098C44 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800D03B0 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D3324 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v7; // rdx
  bool v8; // r8
  unsigned __int64 FileTimeFromString; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // r8d
  PVOID Reserved1; // rdi
  unsigned int v14; // r8d
  const WCHAR *v15; // rcx
  HSTRING_HEADER *v16; // rax
  int v17; // r9d
  const char *v18; // r9
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v21; // rcx
  int v22; // [rsp+20h] [rbp-108h]
  HSTRING string; // [rsp+50h] [rbp-D8h] BYREF
  const WCHAR *v24; // [rsp+58h] [rbp-D0h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-C8h]
  __int64 v26; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v27[4]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v28[4]; // [rsp+98h] [rbp-90h] BYREF
  HSTRING_HEADER v29; // [rsp+B8h] [rbp-70h] BYREF
  HSTRING_HEADER v30; // [rsp+D8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v25 = a2;
  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL);
  WindowsDeleteString(0LL);
  try
  {
    string = 0LL;
    v5 = v4(a1, &string);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5,
        v22);
    StringRawBuffer = (CreativeFramework::CommonHelper::StringUtils *)WindowsGetStringRawBuffer(string, 0LL);
    FileTimeFromString = (unsigned __int64)CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
                                             StringRawBuffer,
                                             v7,
                                             v8);
    v10 = (unsigned int)FileTimeFromString + (HIDWORD(FileTimeFromString) << 32);
    Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((__int64)v28, a1);
    v11 = v28;
    if ( v28[3] >= 8uLL )
      v11 = (_QWORD *)v28[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v27, v11);
    std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
      &v26,
      a2);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)&off_1800F55C0, v12)[1].Reserved.Reserved1;
    v15 = (const WCHAR *)v27;
    if ( v27[3] >= 8uLL )
      v15 = (const WCHAR *)v27[0];
    v24 = v15;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v24, v14);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      v16[1].Reserved.Reserved1,
      (_DWORD)Reserved1,
      v10,
      v17);
    std::wstring::_Tidy(v27, 1, 0LL);
    std::wstring::_Tidy(v28, 1, 0LL);
    WindowsDeleteString(string);
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x1E9,
                        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                        v18);
    v21 = (std::_Ref_count_base *)v25[1];
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    return (unsigned int)string;
  }
  string = 0LL;
  v19 = (std::_Ref_count_base *)a2[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  return 0LL;
}
