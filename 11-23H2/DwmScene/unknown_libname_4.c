/*
 * XREFs of unknown_libname_4 @ 0x18002F6CC
 * Callers:
 *     sub_18003881C @ 0x18003881C (sub_18003881C.c)
 * Callees:
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    sub_180032160(a3, i);
    a3 += 16LL;
  }
  return a3;
}
