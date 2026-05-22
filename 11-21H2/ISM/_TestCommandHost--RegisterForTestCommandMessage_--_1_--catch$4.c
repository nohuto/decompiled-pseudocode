/*
 * XREFs of _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$4 @ 0x180055A48
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E2C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TestCommandHost::RegisterForTestCommandMessage_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x3E,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
    a4);
  return 0LL;
}
