/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy @ 0x18009F840
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_a031fdd1fd025cd2573b61ec83e0da08__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r10
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v2 = a2;
  if ( !a2 )
  {
    v2 = operator new(0x18uLL);
    if ( !v2 )
      std::_Xbad_alloc();
  }
  *v2 = off_1800E9410;
  v4 = *(_QWORD *)(a1 + 8);
  v2[1] = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 64);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 64), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      return v2;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), (volatile int *)v4);
  }
  return v2;
}
