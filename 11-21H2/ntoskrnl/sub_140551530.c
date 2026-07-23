/*
 * XREFs of sub_140551530 @ 0x140551530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405515F8 @ 0x1405515F8 (sub_1405515F8.c)
 */

__int64 __fastcall sub_140551530(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)sub_1405515F8() )
  {
    sub_14042A5E0((char *)qword_14003AF00 + 4 * v1, 0LL);
    sub_1402AD030(&RunRef);
  }
  return 0LL;
}
