/*
 * XREFs of sub_18002B83C @ 0x18002B83C
 * Callers:
 *     sub_18002A998 @ 0x18002A998 (sub_18002A998.c)
 *     sub_180058884 @ 0x180058884 (sub_180058884.c)
 *     sub_1800598E0 @ 0x1800598E0 (sub_1800598E0.c)
 *     sub_180059910 @ 0x180059910 (sub_180059910.c)
 *     sub_1800A2880 @ 0x1800A2880 (sub_1800A2880.c)
 *     sub_1800E4FCC @ 0x1800E4FCC (sub_1800E4FCC.c)
 *     sub_1800EB3A4 @ 0x1800EB3A4 (sub_1800EB3A4.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18002B83C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x58uLL);
  return result;
}
