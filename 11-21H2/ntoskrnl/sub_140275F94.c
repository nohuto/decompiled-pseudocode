/*
 * XREFs of sub_140275F94 @ 0x140275F94
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 * Callees:
 *     sub_140274E94 @ 0x140274E94 (sub_140274E94.c)
 *     sub_1402EEC18 @ 0x1402EEC18 (sub_1402EEC18.c)
 */

__int64 __fastcall sub_140275F94(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return sub_140274E94(a1, a2, a3, a4);
  else
    return sub_1402EEC18();
}
