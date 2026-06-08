/*
 * XREFs of QueryPkgIdleStateMSRValues @ 0x1C0001150
 * Callers:
 *     <none>
 * Callees:
 *     CycleTo100ns @ 0x1C00011F0 (CycleTo100ns.c)
 *     RefreshPkgIdleStateMSRValues @ 0x1C0001250 (RefreshPkgIdleStateMSRValues.c)
 */

__int64 __fastcall QueryPkgIdleStateMSRValues(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  int refreshed; // r11d
  _QWORD *v8; // rsi

  v4 = 0;
  if ( a2 && *(_DWORD *)(a2 + 24) == 1 )
  {
    v6 = *(_QWORD *)(a2 + 48);
    refreshed = 0;
    *a3 = *(_DWORD *)(v6 + 24);
    if ( a4 )
    {
      refreshed = RefreshPkgIdleStateMSRValues(a1, 0LL, a2);
      if ( refreshed >= 0 )
      {
        if ( *(_DWORD *)(v6 + 24) )
        {
          v8 = (_QWORD *)(a4 + 16);
          do
          {
            *((_DWORD *)v8 - 4) = *(_DWORD *)(v6 + 40LL * v4 + 56);
            *(v8 - 1) = *(_QWORD *)(v6 + 8);
            *v8 = CycleTo100ns(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 40LL * v4++ + 64));
            v8 += 3;
          }
          while ( v4 < *(_DWORD *)(v6 + 24) );
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
