/*
 * XREFs of PepPerfStateSelectionHandler @ 0x1C000D290
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
  unsigned __int8 v10; // r11
  unsigned __int8 v11; // bl
  unsigned __int8 v13; // r10
  __int64 v14; // r8
  unsigned __int8 v15; // cl
  __int64 v16; // rbx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r8
  __int64 v19; // r9

  v9 = *(_QWORD *)(a1 + 40);
  v10 = 0;
  v11 = 0;
  v13 = *(_BYTE *)(v9 + 33);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v9 + 40);
    while ( *(_DWORD *)(v14 + 24LL * v11 + 8) > a4 )
    {
      if ( ++v11 >= v13 )
        goto LABEL_7;
    }
    v10 = v11;
LABEL_7:
    v15 = v13 - 1;
    while ( *(_DWORD *)(v14 + 24LL * v13 - 16) < a3
         || (a7 & 1) == 0 && *(_DWORD *)(v14 + 24LL * v13 - 24) < *(_DWORD *)(v9 + 8) )
    {
      if ( !--v13 )
        goto LABEL_14;
    }
  }
  v15 = v13 - 1;
LABEL_14:
  v16 = *(_QWORD *)(v9 + 40);
  v17 = v10;
  if ( v15 >= v10 )
    v17 = v15;
  if ( (a7 & 2) != 0 )
  {
    v18 = v10 - 1;
    do
      v19 = v16 + 24LL * ++v18;
    while ( *(_DWORD *)(v19 + 8) > a2 && v18 < v17 );
  }
  else
  {
    v18 = v17 + 1;
    do
      v19 = v16 + 24LL * --v18;
    while ( *(_DWORD *)(v19 + 8) < a2 && v18 > v10 );
  }
  if ( a9 )
  {
    *a9 = v18 | (unsigned __int64)((v17 | ((v10 | ((255 * a5 / 0x64u) << 8)) << 8)) << 8);
    if ( a8 )
      *a8 = *(_DWORD *)(v19 + 4);
  }
  return *(unsigned int *)(v19 + 8);
}
