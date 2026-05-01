/*
 * XREFs of _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788C34
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807882A8 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807883A0 (CreationThreadDispatcher--RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_scalar_deleting_destructor_ @ 0x180789440 (CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___--_scalar_deleting_destructo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::_scalar_deleting_destructor_ @ 0x1807894A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___--_scala.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180789C20 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$A.c)
 *     _GuidedSnapAssistViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180789D84 (_GuidedSnapAssistViewController--[IXamlMultitaskingViewController]--InvokeSwitchIte_ea_180789D84.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
