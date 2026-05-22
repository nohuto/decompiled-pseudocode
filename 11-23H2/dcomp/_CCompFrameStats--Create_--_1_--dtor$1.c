/*
 * XREFs of _CCompFrameStats::Create_::_1_::dtor$1 @ 0x1801A9859
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801004A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CCompFrameStats::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)&std::nothrow);
}
