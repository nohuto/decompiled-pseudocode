/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$2 @ 0x18006F14D
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
