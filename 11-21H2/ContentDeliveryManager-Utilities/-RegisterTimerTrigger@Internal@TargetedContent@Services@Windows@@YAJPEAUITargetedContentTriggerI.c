/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A5F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A54D0 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A59B0 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800A65A0 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800E860C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC20C (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v7; // rdx
  bool v8; // r8
  unsigned __int64 FileTimeFromString; // rax
  unsigned __int64 v10; // rbx
  void **v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // r8d
  PVOID Reserved1; // rdi
  unsigned int v16; // r8d
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rax
  int v19; // r9d
  const char *v20; // r9
  __int64 result; // rax
  int v22; // [rsp+20h] [rbp-108h]
  HSTRING string; // [rsp+50h] [rbp-D8h] BYREF
  const WCHAR *v24; // [rsp+58h] [rbp-D0h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-C8h]
  __int128 v26; // [rsp+68h] [rbp-C0h] BYREF
  void *v27[3]; // [rsp+78h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-98h]
  void *v29[3]; // [rsp+98h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+B0h] [rbp-78h]
  HSTRING_HEADER v31; // [rsp+B8h] [rbp-70h] BYREF
  HSTRING_HEADER v32; // [rsp+D8h] [rbp-50h] BYREF
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
        477LL,
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
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v29, a1);
    v11 = v29;
    if ( v30 >= 8 )
      v11 = (void **)v29[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v27, v11);
    v26 = 0LL;
    v12 = a2[1];
    v13 = *a2;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v26, v13, v12);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_180111B70, v14)[1].Reserved.Reserved1;
    v17 = (const WCHAR *)v27;
    if ( v28 >= 8 )
      v17 = (const WCHAR *)v27[0];
    v24 = v17;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, &v24, v16);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      v18[1].Reserved.Reserved1,
      (_DWORD)Reserved1,
      v10,
      v19);
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
    if ( v30 >= 8 )
      operator delete(v29[0]);
    v30 = 7LL;
    v29[2] = 0LL;
    LOWORD(v29[0]) = 0;
    WindowsDeleteString(string);
    string = 0LL;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a2);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x1E9,
                        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                        v20);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v25);
    return (unsigned int)string;
  }
  return result;
}
