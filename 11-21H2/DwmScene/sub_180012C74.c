/*
 * XREFs of sub_180012C74 @ 0x180012C74
 * Callers:
 *     sub_1800423C8 @ 0x1800423C8 (sub_1800423C8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180012C74(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        *a2 = *(_QWORD *)(a1 + 72);
        a2[1] = *(_QWORD *)(a1 + 80);
        return a2;
      }
    }
  }
  return a2;
}
