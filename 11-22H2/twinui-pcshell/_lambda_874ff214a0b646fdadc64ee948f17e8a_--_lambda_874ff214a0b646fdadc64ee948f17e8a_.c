/*
 * XREFs of _lambda_874ff214a0b646fdadc64ee948f17e8a_::_lambda_874ff214a0b646fdadc64ee948f17e8a_ @ 0x1807699F0
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___ @ 0x180768B08 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_180768B08.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_874ff214a0b646fdadc64ee948f17e8a_::_lambda_874ff214a0b646fdadc64ee948f17e8a_(
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
