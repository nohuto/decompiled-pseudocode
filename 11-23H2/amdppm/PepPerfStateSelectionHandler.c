/*
 * XREFs of PepPerfStateSelectionHandler @ 0x1C000B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        unsigned __int64 *a9)
{
  __int64 v9; // rdi
  unsigned __int8 v10; // bl
  unsigned __int8 v13; // r11
  unsigned __int8 v14; // r10
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  __int64 v17; // r10
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  __int64 v20; // r8
  unsigned __int8 v21; // r10

  v9 = *(_QWORD *)(a1 + 40);
  v10 = 0;
  v13 = 0;
  v14 = *(_BYTE *)(v9 + 37);
  while ( v13 < v14 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL * v13 + 8) <= a4 )
    {
      v10 = v13;
      break;
    }
    ++v13;
  }
  v15 = v14 - 1;
  while ( v14 )
  {
    v16 = *(_QWORD *)(v9 + 40);
    if ( *(_DWORD *)(v16 + 24LL * v14 - 16) >= a3
      && ((a7 & 1) != 0 || *(_DWORD *)(v16 + 24LL * v14 - 24) >= *(_DWORD *)(v9 + 12)) )
    {
      v15 = v14 - 1;
      break;
    }
    --v14;
  }
  v17 = *(_QWORD *)(v9 + 40);
  v18 = v10;
  if ( v15 >= v10 )
    v18 = v15;
  if ( (a7 & 2) != 0 )
  {
    v19 = v10 - 1;
    do
      v20 = v17 + 24LL * ++v19;
    while ( *(_DWORD *)(v20 + 8) > a2 && v19 < v18 );
  }
  else
  {
    v19 = v18 + 1;
    do
      v20 = v17 + 24LL * --v19;
    while ( *(_DWORD *)(v20 + 8) < a2 && v19 > v10 );
  }
  v21 = v19;
  if ( (a7 & 4) != 0 )
    v21 = -1;
  if ( a9 )
  {
    *a9 = v21 | (unsigned __int64)((v18 | ((v10 | ((255 * a5 / 0x64u) << 8)) << 8)) << 8);
    if ( a8 )
      *a8 = *(_DWORD *)(v20 + 4);
  }
  return *(unsigned int *)(v20 + 8);
}
