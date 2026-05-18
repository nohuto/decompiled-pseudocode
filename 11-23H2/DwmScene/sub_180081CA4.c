/*
 * XREFs of sub_180081CA4 @ 0x180081CA4
 * Callers:
 *     sub_180081A24 @ 0x180081A24 (sub_180081A24.c)
 *     sub_180081A84 @ 0x180081A84 (sub_180081A84.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 */

char *__fastcall sub_180081CA4(char *a1, __int64 a2)
{
  char *v3; // rbx

  v3 = a1;
  if ( a2 )
  {
    memset(a1, 0, 4 * a2);
    v3 += 4 * a2;
  }
  return v3;
}
