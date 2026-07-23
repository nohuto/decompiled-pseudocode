/*
 * XREFs of sub_1403B607C @ 0x1403B607C
 * Callers:
 *     sub_14051EFC0 @ 0x14051EFC0 (sub_14051EFC0.c)
 *     sub_14090A314 @ 0x14090A314 (sub_14090A314.c)
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A54E70 @ 0x140A54E70 (sub_140A54E70.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B607C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx

  v2 = 0;
  if ( qword_140C4ABA0 )
  {
    LODWORD(a2) = HIDWORD(KeGetPcr()[1].LockArray);
    return (unsigned int)sub_14042A5E0(1LL, a2);
  }
  return v2;
}
