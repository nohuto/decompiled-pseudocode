/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$3 @ 0x18006DC84
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall InputSystemServerConnection::Create_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}
