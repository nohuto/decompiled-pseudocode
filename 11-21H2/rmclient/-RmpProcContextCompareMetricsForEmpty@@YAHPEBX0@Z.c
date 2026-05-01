/*
 * XREFs of ?RmpProcContextCompareMetricsForEmpty@@YAHPEBX0@Z @ 0x180012D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcContextCompareMetricsForEmpty(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 v10; // rax

  v2 = a1[14];
  v3 = a2[14] & 0x20;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !v3 )
      return 0xFFFFFFFFLL;
  }
  else if ( v3 )
  {
    return 1LL;
  }
  v6 = a2[14];
  v7 = v2 & 7;
  if ( v7 < (v6 & 7) )
    return 0xFFFFFFFFLL;
  if ( v7 <= (v6 & 7) )
  {
    v8 = (v6 >> 3) & 3;
    v9 = (v2 >> 3) & 3;
    if ( v9 < v8 )
      return 0xFFFFFFFFLL;
    if ( v9 <= v8 )
    {
      v10 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a1 + 2) > v10 )
        return 0xFFFFFFFFLL;
      if ( *((_QWORD *)a1 + 2) >= v10 )
        return 0LL;
    }
  }
  return 1LL;
}
