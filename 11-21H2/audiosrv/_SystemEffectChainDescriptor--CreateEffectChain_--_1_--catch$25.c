/*
 * XREFs of _SystemEffectChainDescriptor::CreateEffectChain_::_1_::catch$25 @ 0x18006F302
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain_::_1_::catch_25(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x2F,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v3);
  return 0LL;
}
