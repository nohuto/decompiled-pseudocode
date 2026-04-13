/*
 * XREFs of _lambda_a031fdd1fd025cd2573b61ec83e0da08_::operator() @ 0x18009B6E0
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009FA20 (std--_Func_impl_std--_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std_ea_18009FA20.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x1800867E0 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedCo_ea_1800867E0.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x1800894B0 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targe_ea_1800894B0.c)
 */

char __fastcall lambda_a031fdd1fd025cd2573b61ec83e0da08_::operator()(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+48h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v17 = a4;
  v18 = a3;
  v14 = a2;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,HSTRING__ * &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &>(
         &v16,
         &v14,
         &v18,
         &v17);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v8,
      v13);
  v9 = v16;
  v16 = 0LL;
  v13 = v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v10 = v13;
  v13 = 0LL;
  v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::InsertAtInternal(
          *a1,
          0,
          v10,
          1);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v11,
      v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return 1;
}
