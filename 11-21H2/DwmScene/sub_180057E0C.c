/*
 * XREFs of sub_180057E0C @ 0x180057E0C
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_180065080 @ 0x180065080 (sub_180065080.c)
 *     sub_1800716B0 @ 0x1800716B0 (sub_1800716B0.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_1800790F0 @ 0x1800790F0 (sub_1800790F0.c)
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 * Callees:
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 */

__int64 __fastcall sub_180057E0C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v4 = *(_QWORD *)(a1 + 18648);
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800933B8(v4, a2, &v6);
}
