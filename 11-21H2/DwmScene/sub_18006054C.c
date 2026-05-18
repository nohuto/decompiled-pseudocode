/*
 * XREFs of sub_18006054C @ 0x18006054C
 * Callers:
 *     sub_1800629F0 @ 0x1800629F0 (sub_1800629F0.c)
 * Callees:
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 */

__int64 __fastcall sub_18006054C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  v4 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *(_QWORD *)&v4 = *a2;
  *((_QWORD *)&v4 + 1) = v2;
  return sub_180060E7C(a1, &v4);
}
