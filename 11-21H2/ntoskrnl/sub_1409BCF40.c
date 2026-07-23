/*
 * XREFs of sub_1409BCF40 @ 0x1409BCF40
 * Callers:
 *     sub_1409BD378 @ 0x1409BD378 (sub_1409BD378.c)
 * Callees:
 *     sub_1409BCDDC @ 0x1409BCDDC (sub_1409BCDDC.c)
 *     sub_1409BD054 @ 0x1409BD054 (sub_1409BD054.c)
 */

__int64 __fastcall sub_1409BCF40(__int64 a1, int *a2, unsigned int a3, int a4)
{
  int v4; // eax

  v4 = *a2;
  if ( !*a2 )
  {
    v4 = sub_1409BD054(a1, a3);
    *a2 = v4;
  }
  return sub_1409BCDDC(a1, v4, a4);
}
