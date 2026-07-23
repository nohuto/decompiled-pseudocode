/*
 * XREFs of sub_140539900 @ 0x140539900
 * Callers:
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140539900(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r10
  unsigned int v11; // r9d
  bool v12; // cf
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx

  v2 = *(_DWORD *)(a1 + 912);
  v3 = *(_QWORD *)(a1 + 1072);
  v6 = 0;
  v7 = *(unsigned int *)(a2 + 152);
  v8 = *(_DWORD *)(v3 + 8 * v7);
  v9 = v8 - v2;
  *(_DWORD *)(v3 + 8 * v7) = v2;
  v10 = *(unsigned int *)(a2 + 152);
  v11 = 1;
  v12 = v8 < v2;
  v13 = *(_QWORD *)(a1 + 1072);
  if ( v12 )
    v9 = 0;
  if ( (_DWORD)v10 )
    v6 = *(_DWORD *)(v13 + 8LL * (unsigned int)(v10 - 1) + 4);
  *(_DWORD *)(v13 + 8 * v10 + 4) = v9;
  if ( v9 )
  {
    v14 = *(_DWORD *)(a2 + 200);
    if ( v9 < v6 )
    {
      if ( v14 > 0 )
        v14 = 0;
      v15 = v14 - 1;
    }
    else
    {
      if ( v14 < 0 )
        v14 = 0;
      v15 = v14 + 1;
    }
    *(_DWORD *)(a2 + 200) = v15;
    if ( v15 == 3 )
    {
      v11 = 2;
      *(_DWORD *)(a2 + 200) = 0;
      v16 = *(_DWORD *)(a2 + 152);
      if ( v16 < *(_DWORD *)(a1 + 800) )
      {
        *(_DWORD *)(v13 + 8LL * (v16 + 1)) = *(_DWORD *)(a1 + 912);
        *(_DWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 152) + 1) + 4) = 0;
      }
    }
    else if ( v15 == -3 )
    {
      v17 = *(_DWORD *)(a2 + 152);
      v11 = 3;
      *(_DWORD *)(a2 + 200) = 0;
      if ( v17 )
      {
        *(_DWORD *)(v13 + 8LL * (unsigned int)(v17 - 1)) = *(_DWORD *)(a1 + 912);
        *(_DWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 152) - 1) + 4) = 0;
      }
    }
  }
  return v11;
}
