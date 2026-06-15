/*
 * XREFs of _CSebNotifier::AcquireSebReference_::_1_::catch$18 @ 0x18006E870
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103150 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSebNotifier::AcquireSebReference_::_1_::catch_18(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 4328),
    (void *)0x1ED,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    (const char *)0x8007000ELL,
    v3);
  return 0LL;
}
