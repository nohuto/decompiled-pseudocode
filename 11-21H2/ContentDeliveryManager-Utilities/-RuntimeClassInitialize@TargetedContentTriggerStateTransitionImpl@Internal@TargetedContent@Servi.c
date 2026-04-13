/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x180095ECC
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE7E0 (std--_Func_impl_std--_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std_ea_1800AE7E0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
        __int64 a1,
        HSTRING a2,
        int a3,
        int a4)
{
  HSTRING *v8; // rdi
  HRESULT v9; // eax
  const char *v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+40h] [rbp+8h]

  v8 = (HSTRING *)(a1 + 72);
  v9 = 0;
  if ( !a2 || a2 != *v8 )
  {
    WindowsDeleteString(*v8);
    *v8 = 0LL;
    v9 = WindowsDuplicateString(a2, v8);
  }
  if ( v9 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        329LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v9,
        v13);
    }
    catch ( ... )
    {
      *(_DWORD *)(v12 + 64) = wil::details::in1diag3::Return_CaughtException(
                                retaddr,
                                (void *)0x14E,
                                (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                                v11);
      return v15;
    }
  }
  *(_DWORD *)(a1 + 80) = a3;
  *(_DWORD *)(a1 + 84) = a4;
  return 0LL;
}
