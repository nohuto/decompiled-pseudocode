/*
 * XREFs of sub_18002C5D4 @ 0x18002C5D4
 * Callers:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     sub_18002C858 @ 0x18002C858 (sub_18002C858.c)
 */

__int64 __fastcall sub_18002C5D4(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_18002C858(a1);
  return a2;
}
