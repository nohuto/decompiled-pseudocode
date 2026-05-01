/*
 * XREFs of _AgileRegistrationList::Register_::_1_::catch$15 @ 0x18021F8E3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AgileRegistrationList::Register_::_1_::catch_15(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x1E,
                           (int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           a4);
  return 0LL;
}
