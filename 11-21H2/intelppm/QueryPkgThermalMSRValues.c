/*
 * XREFs of QueryPkgThermalMSRValues @ 0x1C00032F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryPkgThermalMSRValues(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned int i; // r8d
  __int64 v8; // rax
  unsigned int v9; // r8d
  _QWORD *v10; // r9
  __int64 v11; // rax

  v4 = 0;
  if ( a2 && a3 && (v5 = *(_QWORD *)(a2 + 48)) != 0 && *(_DWORD *)(a2 + 24) == 2 )
  {
    *a3 = *(_DWORD *)(v5 + 32) + *(_DWORD *)(v5 + 16);
    if ( a4 )
    {
      for ( i = 0; i < *(_DWORD *)(v5 + 16); a4 += 24LL )
      {
        v8 = i++;
        *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 40 * v8 + 24);
        *(_QWORD *)(a4 + 8) = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 40 * v8 + 32);
      }
      v9 = 0;
      if ( *(_DWORD *)(v5 + 32) )
      {
        v10 = (_QWORD *)(a4 + 16);
        do
        {
          v11 = v9++;
          *((_DWORD *)v10 - 4) = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40 * v11 + 24);
          *(v10 - 1) = *(_QWORD *)(v5 + 8);
          *v10 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 40 * v11 + 32);
          v10 += 3;
        }
        while ( v9 < *(_DWORD *)(v5 + 32) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
