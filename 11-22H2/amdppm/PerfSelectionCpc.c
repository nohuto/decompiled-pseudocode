/*
 * XREFs of PerfSelectionCpc @ 0x1C0001C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionCpc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        unsigned __int64 *a9)
{
  unsigned __int64 v9; // r10

  if ( a2 >= a3 )
    a3 = a2;
  if ( a3 > a4 )
    a3 = a4;
  if ( a9 )
  {
    if ( a3 == *(_DWORD *)(a1 + 100) )
    {
      v9 = *(_QWORD *)(a1 + 40);
    }
    else if ( a3 == 100 )
    {
      v9 = *(_QWORD *)(a1 + 48);
    }
    else if ( *(_BYTE *)(a1 + 131) && a3 == *(_DWORD *)(a1 + 116) )
    {
      v9 = *(_QWORD *)(a1 + 88);
    }
    else if ( a3 == *(_DWORD *)(a1 + 108) )
    {
      v9 = *(_QWORD *)(a1 + 56);
    }
    else if ( a3 == *(_DWORD *)(a1 + 112) )
    {
      v9 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v9 = (*(_QWORD *)(a1 + 48) * (unsigned __int64)a3 + 50) / 0x64;
    }
    *a9 = v9;
    if ( v9 >= *(_QWORD *)(a1 + 88) )
      v9 = *(_QWORD *)(a1 + 88);
    if ( a8 )
      *a8 = v9 * *(unsigned int *)(a1 + 96) / *(_QWORD *)(a1 + 48);
  }
  return a3;
}
