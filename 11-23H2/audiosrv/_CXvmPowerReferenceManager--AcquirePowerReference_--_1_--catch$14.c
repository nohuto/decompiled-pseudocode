/*
 * XREFs of _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::catch$14 @ 0x18011A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180111BB0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CXvmPowerReferenceManager::AcquirePowerReference_::_1_::catch_14(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x171,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
