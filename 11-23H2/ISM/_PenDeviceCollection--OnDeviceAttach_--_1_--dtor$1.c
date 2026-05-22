/*
 * XREFs of _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800E4B93
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall PenDeviceCollection::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 56));
}
