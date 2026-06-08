/*
 * XREFs of PerfSelectionCppcRequestMsr @ 0x1C0003400
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001BD0 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionCppcRequestMsr(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned int v10; // r11d
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // r9d
  unsigned int v17; // ebx
  unsigned __int8 v18; // al
  int v19; // r9d
  unsigned __int8 v20; // al
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v24; // [rsp+70h] [rbp+48h]

  v10 = a3;
  if ( a2 >= a3 )
    v10 = a2;
  if ( v10 > a4 )
    v10 = a4;
  if ( a9 )
  {
    v13 = PerformanceFromPercentage(a1, v10);
    v24 = 0LL;
    v16 = 0;
    v17 = v13;
    if ( *(_BYTE *)(v14 + 125) && (a7 & 4) == 0 )
    {
      v16 = (unsigned __int8)v13 << 16;
      LODWORD(v24) = v16;
    }
    if ( *(_BYTE *)(v14 + 126) )
    {
      v18 = PerformanceFromPercentage(v14, a3);
      v16 = v19 | (v18 << 8);
      LODWORD(v24) = v16;
    }
    if ( *(_BYTE *)(v15 + 127) )
    {
      v20 = PerformanceFromPercentage(v15, a4);
      v16 = v21 | v20;
      LODWORD(v24) = v16;
    }
    if ( *(_BYTE *)(v15 + 128) )
      LODWORD(v24) = v16 | ((255 * a5 / 0x64u) << 24);
    v22 = v17;
    *a9 = v24;
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v15 + 88) )
      v22 = *(_QWORD *)(v15 + 88);
    if ( a8 )
      *a8 = v22 * (unsigned __int64)*(unsigned int *)(v15 + 96) / *(_QWORD *)(v15 + 48);
  }
  return v10;
}
