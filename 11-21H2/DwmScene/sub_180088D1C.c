/*
 * XREFs of sub_180088D1C @ 0x180088D1C
 * Callers:
 *     sub_1800890E8 @ 0x1800890E8 (sub_1800890E8.c)
 *     sub_180093FA4 @ 0x180093FA4 (sub_180093FA4.c)
 *     sub_180094524 @ 0x180094524 (sub_180094524.c)
 *     sub_180094588 @ 0x180094588 (sub_180094588.c)
 *     sub_1800945EC @ 0x1800945EC (sub_1800945EC.c)
 *     sub_18009474C @ 0x18009474C (sub_18009474C.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009AC14 @ 0x18009AC14 (sub_18009AC14.c)
 *     sub_18009ACB8 @ 0x18009ACB8 (sub_18009ACB8.c)
 *     sub_18009B094 @ 0x18009B094 (sub_18009B094.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 *     sub_18009B450 @ 0x18009B450 (sub_18009B450.c)
 *     sub_18009B540 @ 0x18009B540 (sub_18009B540.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180088D1C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 >= 0x10 )
        result = sub_180010884(*(char **)v3, v4 + 1);
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 15LL;
      *(_BYTE *)v3 = 0;
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
