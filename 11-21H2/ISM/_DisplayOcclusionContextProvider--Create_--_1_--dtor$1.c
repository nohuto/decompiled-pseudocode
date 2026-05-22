/*
 * XREFs of _DisplayOcclusionContextProvider::Create_::_1_::dtor$1 @ 0x18019E969
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DisplayOcclusionContextProvider::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 56));
}
