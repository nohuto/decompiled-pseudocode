/*
 * XREFs of _DragNDropProcessor::OnInput_::_1_::dtor$2 @ 0x180140E23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragNDropProcessor::OnInput_::_1_::dtor_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)(a2 + 336), a2, a3, a4);
}
