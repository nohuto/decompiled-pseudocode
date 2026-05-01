/*
 * XREFs of _lambda_ef4126646d7c3b67819dc4e9d2cf7836_::_lambda_ef4126646d7c3b67819dc4e9d2cf7836_ @ 0x180600048
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_ef4126646d7c3b67819dc4e9d2cf7836___ @ 0x1805FF098 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_1805FF098.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_ef4126646d7c3b67819dc4e9d2cf7836_::_lambda_ef4126646d7c3b67819dc4e9d2cf7836_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
