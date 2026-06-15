/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$26 @ 0x18006E960
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103150 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch_26(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-38h]

  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 440),
    (void *)0x38,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\pdcactivationclient.cpp",
    (const char *)0x8007000ELL,
    v3);
  return 0LL;
}
