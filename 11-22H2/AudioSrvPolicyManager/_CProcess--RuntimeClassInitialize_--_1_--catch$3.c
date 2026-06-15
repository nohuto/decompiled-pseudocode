/*
 * XREFs of _CProcess::RuntimeClassInitialize_::_1_::catch$3 @ 0x18004A76A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001E19C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CProcess::RuntimeClassInitialize_::_1_::catch_3(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 288) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0xA62,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                            a4);
  return 0LL;
}
