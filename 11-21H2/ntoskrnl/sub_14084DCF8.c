/*
 * XREFs of sub_14084DCF8 @ 0x14084DCF8
 * Callers:
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 * Callees:
 *     sub_1403D2224 @ 0x1403D2224 (sub_1403D2224.c)
 */

void sub_14084DCF8()
{
  if ( qword_140C54EA0 )
  {
    sub_1403D2224((PVOID *)qword_140C54EA0, (unsigned __int16)word_140C54E9C);
    qword_140C54EA0 = 0LL;
    word_140C54E9C = 0;
  }
}
