/*
 * XREFs of sub_180048158 @ 0x180048158
 * Callers:
 *     sub_180048430 @ 0x180048430 (sub_180048430.c)
 * Callees:
 *     sub_18004819C @ 0x18004819C (sub_18004819C.c)
 */

__int64 __fastcall sub_180048158(__int64 a1, _QWORD *a2)
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
  return sub_18004819C(a1, &v4);
}
