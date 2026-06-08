/*
 * XREFs of PepPerfSelectionHandler @ 0x1C000D1D0
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x1C000D3E4 (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfSelectionHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned int v9; // r10d
  unsigned __int64 v11; // r11
  unsigned __int64 *v12; // r9
  unsigned __int64 v13; // rax

  v9 = a3;
  if ( a2 >= (unsigned int)a3 )
  {
    v9 = a2;
    if ( a2 > a4 )
      v9 = a4;
  }
  if ( a9 )
  {
    v11 = (unsigned int)PepPerformanceFromPercentage(a1, v9, a3, a9);
    *v12 = v11;
    v13 = *(unsigned int *)(a1 + 64);
    if ( v11 >= v13 )
      v11 = (unsigned int)v13;
    if ( a8 )
      *a8 = v11 * *(unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL) / *(unsigned int *)(*(_QWORD *)(a1 + 40) + 4LL);
  }
  return v9;
}
