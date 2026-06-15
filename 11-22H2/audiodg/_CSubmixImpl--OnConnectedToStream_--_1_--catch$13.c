/*
 * XREFs of _CSubmixImpl::OnConnectedToStream_::_1_::catch$13 @ 0x140034A67
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140068C30 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnConnectedToStream_::_1_::catch_13(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x5B2,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                           a4);
  return 0LL;
}
