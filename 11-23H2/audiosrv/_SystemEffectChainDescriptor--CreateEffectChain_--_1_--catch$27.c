/*
 * XREFs of _SystemEffectChainDescriptor::CreateEffectChain_::_1_::catch$27 @ 0x18007AE9D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain_::_1_::catch_27(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x2D,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
