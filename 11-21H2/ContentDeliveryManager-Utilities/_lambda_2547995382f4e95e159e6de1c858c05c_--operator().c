/*
 * XREFs of _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x1800A9160
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_2547995382f4e95e159e6de1c858c05c__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE710 (std--_Func_impl_std--_Callable_obj__lambda_2547995382f4e95e159e6de1c858c05c__0__std_ea_1800AE710.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800ADB24 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall lambda_2547995382f4e95e159e6de1c858c05c_::operator()(__int64 a1, HSTRING a2, int a3, unsigned int a4)
{
  const WCHAR *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rbx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  const char *v18; // r9
  __int64 v19; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v25; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v27; // [rsp+70h] [rbp+8h] BYREF

  v7 = **(const WCHAR ***)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, v7, -1, 1) == 2 && **(_DWORD **)(a1 + 8) == a3 )
  {
    v9 = *(RTL_SRWLOCK **)(a1 + 16);
    AcquireSRWLockExclusive(v9);
    v24[1] = v9;
    v23 = 0LL;
    TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                       *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                       (struct CreativeFramework::Triggers::PropertySetHelper *)&v23,
                                       v10);
    try
    {
      if ( TriggerRegistrationFromSetting < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          585LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)TriggerRegistrationFromSetting,
          bIgnoreCase);
      v12 = *(_QWORD *)(a1 + 32);
      v24[0] = v23;
      v27 = a4;
      v22 = a3;
      v13 = *(_QWORD *)(v12 + 24);
      if ( !v13 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, _QWORD *, int *, unsigned int *))(*(_QWORD *)v13 + 16LL))(v13, v24, &v22, &v27);
      v14 = v23;
      v15 = *(__int64 **)(a1 + 40);
      v25 = 0LL;
      v16 = v15[1];
      v17 = *v15;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v25, v17, v16);
      Windows::Services::TargetedContent::Internal::SetTriggerState(&v25, v14, a4);
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( v9 )
        ReleaseSRWLockExclusive(v9);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x24D,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        v18);
    }
  }
  return 1;
}
