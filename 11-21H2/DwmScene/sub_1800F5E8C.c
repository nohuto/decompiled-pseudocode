/*
 * XREFs of sub_1800F5E8C @ 0x1800F5E8C
 * Callers:
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F5E8C(__int64 a1)
{
  if ( qword_1801F7EB0 || !a1 )
    return 0;
  qword_1801F7EB0 = a1;
  return 1;
}
