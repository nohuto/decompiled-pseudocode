/*
 * XREFs of sub_180053418 @ 0x180053418
 * Callers:
 *     sub_180014E90 @ 0x180014E90 (sub_180014E90.c)
 *     sub_180051410 @ 0x180051410 (sub_180051410.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 *     sub_1800A8870 @ 0x1800A8870 (sub_1800A8870.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     sub_18005346C @ 0x18005346C (sub_18005346C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180053418(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v5 = *a2;
  *((_QWORD *)&v5 + 1) = v3;
  sub_18005346C(a1, a2, &v5);
  return sub_180010910((__int64)a2);
}
