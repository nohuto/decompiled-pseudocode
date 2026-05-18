/*
 * XREFs of sub_1800509B4 @ 0x1800509B4
 * Callers:
 *     sub_180051A40 @ 0x180051A40 (sub_180051A40.c)
 * Callees:
 *     sub_1800511A0 @ 0x1800511A0 (sub_1800511A0.c)
 */

__int64 __fastcall sub_1800509B4(__int64 a1, _QWORD *a2)
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
  return sub_1800511A0(a1, &v4);
}
