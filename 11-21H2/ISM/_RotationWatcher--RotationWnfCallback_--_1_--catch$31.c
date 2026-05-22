/*
 * XREFs of _RotationWatcher::RotationWnfCallback_::_1_::catch$31 @ 0x1800FB3F2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C1EB4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall RotationWatcher::RotationWnfCallback_::_1_::catch_31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 216),
                           (void *)0x73,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
                           a4);
  return 0LL;
}
