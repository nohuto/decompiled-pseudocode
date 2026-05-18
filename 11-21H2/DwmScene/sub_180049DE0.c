/*
 * XREFs of sub_180049DE0 @ 0x180049DE0
 * Callers:
 *     sub_1800ABAF0 @ 0x1800ABAF0 (sub_1800ABAF0.c)
 * Callees:
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 */

__int64 __fastcall sub_180049DE0(__int64 a1, __int64 a2, _QWORD *a3)
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
  return sub_18009341C(v4, a2, &v6);
}
