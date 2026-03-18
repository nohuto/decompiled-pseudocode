/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C00CBB28
 * Callers:
 *     bConstructGET @ 0x1C00CBA10 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // r10d
  FIX v6; // r11d
  FIX x; // eax
  FIX v9; // esi
  int v10; // ebx
  int v11; // r9d
  FIX v12; // r12d
  FIX v13; // r8d
  FIX v14; // edx
  FIX v16; // ebp
  LONG v17; // eax
  int v18; // r11d
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // r11d
  unsigned int v26; // r10d
  int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // edx
  bool v32; // zf
  int v33; // eax
  int v34; // r8d
  __int64 v35; // rax
  struct EDGE *result; // rax
  LONG top; // eax
  LONG bottom; // ecx
  bool v39; // sf
  bool v40; // of
  bool v41; // cc

  y = a4->y;
  v6 = a3->y;
  x = a4->x;
  v9 = a3->x;
  v10 = y - v6;
  v11 = y - v6;
  v12 = x;
  v13 = v6;
  if ( y - v6 < 0 )
    v12 = v9;
  v14 = y;
  v16 = 0;
  if ( v10 < 0 )
  {
    v9 = x;
    v14 = v6;
    v13 = y;
  }
  v17 = v14;
  v18 = v6 - y;
  if ( v10 < 0 )
    v11 = v18;
  *((_DWORD *)a2 + 10) = ((v10 >> 31) & 0xFFFFFFFE) + 1;
  v19 = 0;
  if ( a5 )
  {
    top = a5->top;
    if ( v14 < top )
      return a2;
    bottom = a5->bottom;
    if ( v13 > bottom )
      return a2;
    v40 = __OFSUB__(v13, top);
    v39 = v13 - top < 0;
    v41 = v13 < top;
    v16 = v13;
    if ( v13 >= top )
      top = v13;
    LOBYTE(v19) = v39 ^ v40;
    if ( !v41 )
      v16 = 0;
    v13 = top;
    v17 = v14;
    if ( v14 > bottom )
      v17 = a5->bottom;
  }
  v20 = (v13 + 15) >> 4;
  v21 = ((v17 + 15) >> 4) - v20;
  *((_DWORD *)a2 + 4) = v20;
  *((_DWORD *)a2 + 2) = v21;
  if ( v21 <= 0 )
    return a2;
  v22 = v12 - v9;
  if ( v12 - v9 < 0 )
  {
    v22 = v9 - v12;
    v23 = -v11;
    v24 = -1;
  }
  else
  {
    v23 = -1;
    v24 = 1;
  }
  *((_DWORD *)a2 + 9) = v24;
  *((_DWORD *)a2 + 5) = v23;
  if ( v22 < v11 )
  {
    *((_DWORD *)a2 + 8) = 0;
    v25 = 0;
  }
  else
  {
    v25 = v22 / v11;
    *((_DWORD *)a2 + 8) = v22 / v11;
    v22 %= v11;
    if ( *((_DWORD *)a2 + 9) == -1 )
    {
      v25 = -v25;
      *((_DWORD *)a2 + 8) = v25;
    }
  }
  *((_DWORD *)a2 + 6) = v22;
  *((_DWORD *)a2 + 7) = v11;
  if ( v19 )
  {
    v26 = a5->top;
    v13 = v16;
  }
  else
  {
    v26 = (v13 + 15) & 0xFFFFFFF0;
  }
  if ( v13 != v26 )
  {
    v27 = *((_DWORD *)a2 + 5);
    v28 = v22;
    v29 = v26 - v13;
    do
    {
      v9 += v25;
      v27 += v28;
      if ( v27 >= 0 )
      {
        v27 -= v11;
        v9 += *((_DWORD *)a2 + 9);
      }
      --v29;
    }
    while ( v29 );
    *((_DWORD *)a2 + 5) = v27;
  }
  v30 = *((_DWORD *)a2 + 5);
  v31 = (v9 + 15) >> 4;
  v32 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v31;
  if ( v32 )
    v33 = ((v9 + 15) & 0xFFFFFFF0) - v9;
  else
    v33 = ((_BYTE)v9 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v34 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 7) = 16 * v11;
  *((_DWORD *)a2 + 5) = v30 - v11 * v33;
  while ( 1 )
  {
    v35 = *(_QWORD *)a1;
    if ( v34 <= *(_DWORD *)(*(_QWORD *)a1 + 16LL)
      && (v34 != *(_DWORD *)(*(_QWORD *)a1 + 16LL) || v31 <= *(_DWORD *)(v35 + 12)) )
    {
      break;
    }
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v35;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
