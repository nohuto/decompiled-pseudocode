/*
 * XREFs of QueryPkgIdleStateMSRValues @ 0x1C0006A60
 * Callers:
 *     <none>
 * Callees:
 *     RefreshPkgIdleStateMSRValues @ 0x1C0003D00 (RefreshPkgIdleStateMSRValues.c)
 *     CycleTo100ns @ 0x1C0006B00 (CycleTo100ns.c)
 */

__int64 __fastcall QueryPkgIdleStateMSRValues(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  int refreshed; // r10d
  __int64 v7; // rdi
  _QWORD *v8; // rsi

  v4 = 0;
  if ( a2 && *(_DWORD *)(a2 + 24) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 48);
    refreshed = 0;
    *a3 = *(_DWORD *)(v7 + 24);
    if ( a4 )
    {
      refreshed = RefreshPkgIdleStateMSRValues(a1, 0LL, a2);
      if ( refreshed >= 0 )
      {
        if ( *(_DWORD *)(v7 + 24) )
        {
          v8 = (_QWORD *)(a4 + 16);
          do
          {
            *((_DWORD *)v8 - 4) = *(_DWORD *)(v7 + 40LL * v4 + 56);
            *(v8 - 1) = *(_QWORD *)(v7 + 8);
            *v8 = CycleTo100ns(*(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 40LL * v4++ + 64));
            v8 += 3;
          }
          while ( v4 < *(_DWORD *)(v7 + 24) );
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)refreshed;
}
