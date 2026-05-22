/*
 * XREFs of _SystemCursorService2::CreatePermanentCursors_::_1_::dtor$4 @ 0x1800EC7FF
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SystemCursorService2::CreatePermanentCursors_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
