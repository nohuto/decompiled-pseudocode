/*
 * XREFs of ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800AB584
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AC338 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE940 (std--_Func_impl_std--_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std_ea_1800AE940.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AEB10 (std--_Func_impl_std--_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std_ea_1800AEB10.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUHSTRING__@@_NPEAU4@@Z @ 0x1800AB430 (-GetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800AC684 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 */

char __fastcall Windows::Services::TargetedContent::Internal::GetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        const wchar_t *a3,
        HSTRING *a4)
{
  int HasKey; // eax
  int String; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v12 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             this,
             a2,
             &v12);
  if ( HasKey < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      137LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)HasKey,
      v10);
  if ( v12 )
  {
    String = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetString(
               (__int64)this,
               (__int64)a2,
               (__int64)a3);
    if ( String < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        140LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)String,
        v10);
  }
  return v12;
}
