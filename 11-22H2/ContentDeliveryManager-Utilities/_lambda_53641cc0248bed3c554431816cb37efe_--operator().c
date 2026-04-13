/*
 * XREFs of _lambda_53641cc0248bed3c554431816cb37efe_::operator() @ 0x18009B690
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009FA50 (std--_Func_impl_std--_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std_ea_18009FA50.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x180092800 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009BE44 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_53641cc0248bed3c554431816cb37efe_::operator()(
        __int64 *a1,
        Windows::Services::TargetedContent::Internal *a2)
{
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v4; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v6; // r8
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                     a2,
                                     (struct CreativeFramework::Triggers::PropertySetHelper *)&v11,
                                     v4);
  if ( TriggerRegistrationFromSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)TriggerRegistrationFromSetting,
      v9);
  v6 = v11;
  v11 = 0LL;
  v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
         *a1,
         0,
         v6,
         1);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7,
      v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return 1;
}
