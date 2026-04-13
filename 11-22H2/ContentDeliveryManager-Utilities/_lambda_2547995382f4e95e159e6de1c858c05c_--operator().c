/*
 * XREFs of _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x18009B528
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_2547995382f4e95e159e6de1c858c05c__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009FA30 (std--_Func_impl_std--_Callable_obj__lambda_2547995382f4e95e159e6de1c858c05c__0__std_ea_18009FA30.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004960 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F7CC (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009BE44 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009F04C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_2547995382f4e95e159e6de1c858c05c_::operator()(__int64 a1, HSTRING a2, int a3, unsigned int a4)
{
  const WCHAR *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rbx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  const char *v16; // r9
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-28h] BYREF
  RTL_SRWLOCK *v22; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF

  v7 = **(const WCHAR ***)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, v7, -1, 1) == 2 && **(_DWORD **)(a1 + 8) == a3 )
  {
    v9 = *(RTL_SRWLOCK **)(a1 + 16);
    AcquireSRWLockExclusive(v9);
    v22 = v9;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                       *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                       (struct CreativeFramework::Triggers::PropertySetHelper *)&v20,
                                       v10);
    try
    {
      if ( TriggerRegistrationFromSetting < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x249,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)TriggerRegistrationFromSetting,
          bIgnoreCase);
      v12 = *(_QWORD *)(a1 + 32);
      v21[0] = v20;
      v24 = a4;
      v19 = a3;
      v13 = *(_QWORD *)(v12 + 24);
      if ( !v13 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, _QWORD *, int *, unsigned int *))(*(_QWORD *)v13 + 16LL))(v13, v21, &v19, &v24);
      v14 = v20;
      v15 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
              v21,
              *(__int64 **)(a1 + 40));
      Windows::Services::TargetedContent::Internal::SetTriggerState(v15, v14, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x24D,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        v16);
    }
  }
  return 1;
}
