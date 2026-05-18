/*
 * XREFs of sub_1800501D0 @ 0x1800501D0
 * Callers:
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 * Callees:
 *     sub_180050214 @ 0x180050214 (sub_180050214.c)
 */

__int64 __fastcall sub_1800501D0(__int64 a1, _QWORD *a2)
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
  return sub_180050214(a1, &v4);
}
