/*
 * XREFs of sub_180074020 @ 0x180074020
 * Callers:
 *     sub_180073ED8 @ 0x180073ED8 (sub_180073ED8.c)
 *     sub_180073F6C @ 0x180073F6C (sub_180073F6C.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_180074020(char *a1, __int64 a2)
{
  __int64 i; // rdi

  for ( i = a2; i; --i )
  {
    memset(a1, 0, 0x98uLL);
    sub_18002B7C0((__int64)a1);
    a1 += 152;
  }
  sub_18002AA98((__int64)a1, (__int64)a1);
  return a1;
}
