/*
 * XREFs of _QueueGenericWorkItem_::_1_::dtor$1 @ 0x1800462DB
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180002B30 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall QueueGenericWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 168), (const struct std::nothrow_t *)&std::nothrow);
}
