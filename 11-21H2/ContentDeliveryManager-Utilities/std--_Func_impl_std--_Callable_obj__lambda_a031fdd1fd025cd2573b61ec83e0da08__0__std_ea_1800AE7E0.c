/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18004C7E8 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x180094818 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targe_ea_180094818.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x180095ECC (-RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Servi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        HSTRING *a2,
        int *a3,
        int *a4)
{
  int v5; // edi
  int v6; // ebp
  HSTRING v7; // r14
  __int64 v8; // rsi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v9; // rax
  int v10; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v11; // rbx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0LL;
  v9 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)operator new(
                                                                                                    0x58uLL,
                                                                                                    (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl(v9);
    v10 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
            (__int64)v11,
            v7,
            v6,
            v5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v11 + 8LL))(v11);
      v8 = (__int64)v11;
      if ( v11 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v11 + 16LL))(v11);
      v10 = 0;
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      382LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v10,
      v14);
  v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::InsertAtInternal(
          *(_QWORD *)(a1 + 8),
          0,
          v8,
          1);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      344LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v12,
      v14);
  return 1;
}
