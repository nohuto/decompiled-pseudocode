/*
 * XREFs of sub_1409BCF8C @ 0x1409BCF8C
 * Callers:
 *     sub_1409BD378 @ 0x1409BD378 (sub_1409BD378.c)
 * Callees:
 *     sub_1409BCDDC @ 0x1409BCDDC (sub_1409BCDDC.c)
 *     sub_1409BD054 @ 0x1409BD054 (sub_1409BD054.c)
 *     sub_1409BD268 @ 0x1409BD268 (sub_1409BD268.c)
 */

__int64 __fastcall sub_1409BCF8C(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int v5; // eax
  int v10; // ebx
  int v11; // eax

  v5 = *a2;
  if ( !*a2 )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      v10 = sub_1409BD054(a1, a4);
      *a3 = v10;
    }
    v11 = sub_1409BD268(a1, a4);
    v5 = sub_1409BCDDC(a1, v10, v11);
    *a2 = v5;
  }
  return sub_1409BCDDC(a1, v5, a5);
}
