/*
 * XREFs of _TSSession::Create_::_1_::dtor$0 @ 0x180045EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180002B30 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 128), (const struct std::nothrow_t *)&std::nothrow);
}
