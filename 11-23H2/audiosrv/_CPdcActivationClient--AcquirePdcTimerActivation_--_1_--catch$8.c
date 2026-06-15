/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$8 @ 0x18007BA7F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180111BB0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch_8(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-8h]

  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x38,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\pdcactivationclient.cpp",
    (const char *)0x8007000ELL,
    v3);
  return 0LL;
}
