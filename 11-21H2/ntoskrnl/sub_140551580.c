/*
 * XREFs of sub_140551580 @ 0x140551580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405515F8 @ 0x1405515F8 (sub_1405515F8.c)
 */

void __fastcall sub_140551580(int a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)sub_1405515F8() )
    {
      sub_14042A5E0(0LL, (char *)qword_14003AF00 + 4 * a5);
      sub_14042A5E0(v6, v5);
      sub_1402AD030(&RunRef);
    }
  }
}
