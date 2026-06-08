/*
 * XREFs of PerfSelectionHwp @ 0x1C0001810
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001978 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionHwp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        char a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned int v9; // r10d
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // r9
  unsigned int v16; // r11d
  char v17; // si
  unsigned int v18; // r14d
  int v19; // ebp
  unsigned int i; // edx
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+70h] [rbp+48h]

  v9 = a3;
  if ( a2 >= a3 )
    v9 = a2;
  if ( v9 > a4 )
    v9 = a4;
  if ( a9 )
  {
    v13 = PerformanceFromPercentage(a1, v9);
    v17 = 0;
    v18 = v13;
    v19 = 0;
    v22 = 0LL;
    if ( *(_BYTE *)(v14 + 125) && (a7 & 4) == 0 )
    {
      v19 = (unsigned __int8)v13 << 16;
      LODWORD(v22) = v19;
    }
    if ( *(_BYTE *)(v14 + 126) )
    {
      v19 |= (unsigned __int8)PerformanceFromPercentage(v14, v16);
      LODWORD(v22) = v19;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v19 |= (unsigned __int8)PerformanceFromPercentage(a1, a4) << 8;
      LODWORD(v22) = v19;
    }
    if ( *(_BYTE *)(a1 + 128) )
      LODWORD(v22) = v19 | ((255 * a5 / 0x64u) << 24);
    if ( *(_BYTE *)(a1 + 129) )
    {
      for ( i = a6; i > 0x7F; i /= 0xAu )
        ++v17;
      HIDWORD(v22) = i & 0x7F | ((v17 & 7) << 7);
    }
    *v15 = v22;
    v21 = *(_QWORD *)(a1 + 88);
    if ( v18 < v21 )
      v21 = v18;
    if ( a8 )
      *a8 = v21 * *(unsigned int *)(a1 + 96) / *(_QWORD *)(a1 + 48);
  }
  return v9;
}
