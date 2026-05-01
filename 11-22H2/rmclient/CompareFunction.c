/*
 * XREFs of CompareFunction @ 0x1800123F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CompareFunction(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx

  v2 = a1[14];
  v3 = a2[14] & 0x20;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !v3 )
      return -1;
  }
  else if ( v3 )
  {
    return 1;
  }
  v6 = a2[14];
  v7 = v2 & 7;
  if ( v7 < (v6 & 7) )
    return -1;
  if ( v7 > (v6 & 7) )
    return 1;
  v8 = (v6 >> 3) & 3;
  v9 = (v2 >> 3) & 3;
  if ( v9 < v8 )
    return -1;
  if ( v9 > v8 )
    return 1;
  v10 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a1 + 2) > v10 )
    return -1;
  return *((_QWORD *)a1 + 2) < v10;
}
