/*
 * XREFs of _TSSession::Create_::_1_::dtor$4 @ 0x180045707
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX0@Z @ 0x180008ECC (--3@YAXPEAX0@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 40), *(void **)(a2 + 32));
}
