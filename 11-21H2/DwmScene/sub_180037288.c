/*
 * XREFs of sub_180037288 @ 0x180037288
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035FAC @ 0x180035FAC (sub_180035FAC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180037288(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r8
  __int64 v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v3 = (_QWORD *)(*(_QWORD *)(a1 + 888) + 16 * a3);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        *a2 = *v3;
        a2[1] = v3[1];
        return a2;
      }
    }
  }
  return a2;
}
