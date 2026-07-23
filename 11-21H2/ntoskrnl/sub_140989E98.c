/*
 * XREFs of sub_140989E98 @ 0x140989E98
 * Callers:
 *     sub_1405CA1A0 @ 0x1405CA1A0 (sub_1405CA1A0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EDF80 @ 0x1407EDF80 (sub_1407EDF80.c)
 *     sub_1407EE888 @ 0x1407EE888 (sub_1407EE888.c)
 */

void __fastcall sub_140989E98(char a1)
{
  sub_140753094(1);
  if ( byte_140C24511 != a1 )
  {
    byte_140C24511 = a1;
    sub_1407EDF80(1, a1);
  }
  sub_1407EE888();
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
}
