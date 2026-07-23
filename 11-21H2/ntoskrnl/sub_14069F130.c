/*
 * XREFs of sub_14069F130 @ 0x14069F130
 * Callers:
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14065B994 @ 0x14065B994 (sub_14065B994.c)
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 *     sub_14065CB84 @ 0x14065CB84 (sub_14065CB84.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_140920D44 @ 0x140920D44 (sub_140920D44.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14069F130(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
