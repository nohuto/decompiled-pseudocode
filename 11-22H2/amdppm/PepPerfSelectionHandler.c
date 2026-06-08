/*
 * XREFs of PepPerfSelectionHandler @ 0x1C000B2E0
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x1C000B560 (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned int v9; // r10d
  unsigned int v11; // eax
  _QWORD *v12; // r11
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // eax

  v9 = a3;
  if ( a2 >= a3 )
  {
    v9 = a2;
    if ( a2 > a4 )
      v9 = a4;
  }
  if ( a9 )
  {
    v11 = PepPerformanceFromPercentage(a1, v9);
    v13 = 0LL;
    v14 = v11;
    if ( (a7 & 4) == 0 )
      v13 = v11;
    *v12 = v13;
    v15 = *(_DWORD *)(a1 + 64);
    if ( v14 < v15 )
      v15 = v14;
    if ( a8 )
      *a8 = v15
          * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL)
          / *(unsigned int *)(*(_QWORD *)(a1 + 40) + 8LL);
  }
  return v9;
}
