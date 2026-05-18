/*
 * XREFs of sub_180030860 @ 0x180030860
 * Callers:
 *     sub_180034C70 @ 0x180034C70 (sub_180034C70.c)
 * Callees:
 *     sub_1800F8330 @ 0x1800F8330 (sub_1800F8330.c)
 */

__int64 __fastcall sub_180030860(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *a2;
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F8330(a1, v4, &v6);
}
