/*
 * XREFs of sub_140722890 @ 0x140722890
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     sub_1409B0030 @ 0x1409B0030 (sub_1409B0030.c)
 *     sub_1409EB814 @ 0x1409EB814 (sub_1409EB814.c)
 * Callees:
 *     sub_1407228BC @ 0x1407228BC (sub_1407228BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140722890(void *a1, char a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a1, 0);
    else
      sub_1407228BC(a1, a3 - 48);
  }
}
