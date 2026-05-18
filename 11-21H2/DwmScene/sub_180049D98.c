/*
 * XREFs of sub_180049D98 @ 0x180049D98
 * Callers:
 *     sub_1800140D0 @ 0x1800140D0 (sub_1800140D0.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 * Callees:
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 */

__int64 __fastcall sub_180049D98(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v4 = *(_QWORD *)(a1 + 120);
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
