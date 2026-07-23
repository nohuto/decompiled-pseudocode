/*
 * XREFs of sub_1407EEC68 @ 0x1407EEC68
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_140995690 @ 0x140995690 (sub_140995690.c)
 * Callees:
 *     sub_140994918 @ 0x140994918 (sub_140994918.c)
 */

bool __fastcall sub_1407EEC68(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C22A00 )
    return (unsigned __int8)sub_140994918(a1, 0LL) != 0;
  return v1;
}
