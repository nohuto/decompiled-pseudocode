/*
 * XREFs of sub_18003A4B0 @ 0x18003A4B0
 * Callers:
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 *     sub_180094000 @ 0x180094000 (sub_180094000.c)
 * Callees:
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 */

__int64 *__fastcall sub_18003A4B0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax

  v2 = a2;
  if ( a2 <= 0xFFFFFFFFFFFFFFFLL )
  {
    while ( v2 > 0 )
    {
      v4 = sub_18001C1B8(16 * v2, (__int64)&unk_180106A06);
      if ( v4 )
      {
        *a1 = v4;
        a1[1] = v2;
        return a1;
      }
      v2 /= 2LL;
    }
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  return a1;
}
