/*
 * XREFs of sub_1800A1704 @ 0x1800A1704
 * Callers:
 *     sub_1800A1F90 @ 0x1800A1F90 (sub_1800A1F90.c)
 * Callees:
 *     sub_1800A19A8 @ 0x1800A19A8 (sub_1800A19A8.c)
 */

__int64 __fastcall sub_1800A1704(__int64 a1, _QWORD *a2)
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
  return sub_1800A19A8(a1, &v4);
}
