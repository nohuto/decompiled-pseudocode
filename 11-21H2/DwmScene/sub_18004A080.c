/*
 * XREFs of sub_18004A080 @ 0x18004A080
 * Callers:
 *     sub_1800140D0 @ 0x1800140D0 (sub_1800140D0.c)
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 */

__int64 __fastcall sub_18004A080(__int64 a1, __int64 a2, _QWORD *a3)
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
  return sub_1800935DC(v4, a2, &v6);
}
