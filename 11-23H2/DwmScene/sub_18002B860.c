/*
 * XREFs of sub_18002B860 @ 0x18002B860
 * Callers:
 *     sub_18002B82C @ 0x18002B82C (sub_18002B82C.c)
 *     sub_18002B944 @ 0x18002B944 (sub_18002B944.c)
 * Callees:
 *     sub_18002AED4 @ 0x18002AED4 (sub_18002AED4.c)
 */

__int64 __fastcall sub_18002B860(void **a1)
{
  sub_18002AED4((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0xF8uLL);
}
