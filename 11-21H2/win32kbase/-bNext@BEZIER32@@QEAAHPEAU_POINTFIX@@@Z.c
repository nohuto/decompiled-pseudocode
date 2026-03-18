/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00923D0
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00921C0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  int v3; // esi
  __int64 result; // rax
  int v5; // r9d
  int v6; // r15d
  int v7; // edi
  int v8; // ecx
  int v9; // r10d
  int v10; // r11d
  int v11; // r12d
  int v12; // r14d
  signed int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // r9d
  int v22; // r10d
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // r11d
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax

  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 3);
  v7 = -v5;
  if ( v5 >= 0 )
    v7 = *((_DWORD *)this + 4);
  v8 = abs32(v6);
  if ( v8 > v7 )
  {
    v9 = abs32(v6);
  }
  else
  {
    v9 = v5;
    if ( v5 < 0 )
      v9 = -v5;
  }
  v10 = *((_DWORD *)this + 8);
  v11 = *((_DWORD *)this + 7);
  v12 = -v10;
  if ( v10 >= 0 )
    v12 = *((_DWORD *)this + 8);
  v13 = abs32(*((_DWORD *)this + 7));
  if ( v13 > v12 )
  {
    v14 = v13;
  }
  else
  {
    v14 = *((_DWORD *)this + 8);
    if ( v10 < 0 )
      v14 = -*((_DWORD *)this + 8);
  }
  if ( v9 > v14 )
  {
    if ( v8 <= v7 )
    {
      v8 = v5;
      if ( v5 < 0 )
        v8 = -v5;
    }
  }
  else if ( v13 > v12 )
  {
    v8 = v13;
  }
  else
  {
    v8 = *((_DWORD *)this + 8);
    if ( v10 < 0 )
      v8 = -*((_DWORD *)this + 8);
  }
  if ( v8 > 523776 )
  {
    v34 = (v6 + v5) >> 3;
    *((_DWORD *)this + 3) = v34;
    v35 = *((_DWORD *)this + 2) - v34;
    *((_DWORD *)this + 4) = v5 >> 2;
    *((_DWORD *)this + 2) = v35 >> 1;
    v36 = (v10 + v11) >> 3;
    v37 = (*((_DWORD *)this + 6) - v36) >> 1;
    v3 *= 2;
    *((_DWORD *)this + 7) = v36;
    *((_DWORD *)this + 6) = v37;
    *((_DWORD *)this + 8) = v10 >> 2;
    *(_DWORD *)this = v3;
  }
  if ( (v3 & 1) == 0 )
  {
    v21 = *((_DWORD *)this + 4);
    v22 = *((_DWORD *)this + 3);
    do
    {
      v23 = v21 - 2 * v22;
      v24 = -v21;
      if ( v21 >= 0 )
        v24 = v21;
      v25 = 2 * v22 - v21;
      if ( v25 >= 0 )
        v23 = 2 * v22 - v21;
      if ( v24 <= v23 )
      {
        v24 = 2 * v22 - v21;
        if ( v25 < 0 )
          v24 = v21 - 2 * v22;
      }
      if ( v24 > 130944 )
        break;
      v26 = *((_DWORD *)this + 8);
      v27 = *((_DWORD *)this + 7);
      v28 = -v26;
      v29 = v26 - 2 * v27;
      if ( v26 >= 0 )
        v28 = *((_DWORD *)this + 8);
      v30 = 2 * v27 - v26;
      if ( v30 >= 0 )
        v29 = 2 * v27 - v26;
      if ( v28 <= v29 )
      {
        v28 = 2 * v27 - v26;
        if ( v30 < 0 )
          v28 = v26 - 2 * v27;
      }
      if ( v28 > 130944 )
        break;
      v31 = *((_DWORD *)this + 2);
      v21 *= 4;
      *((_DWORD *)this + 4) = v21;
      v32 = v22 + 2 * v31;
      v33 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 2) = v32;
      v22 = 8 * v22 - v21;
      *((_DWORD *)this + 3) = v22;
      *((_DWORD *)this + 6) = v27 + 2 * v33;
      *((_DWORD *)this + 8) = 4 * v26;
      *((_DWORD *)this + 7) = 8 * v27 - 4 * v26;
      *(int *)this >>= 1;
    }
    while ( (*(_DWORD *)this & 1) == 0 );
  }
  v15 = *((_DWORD *)this + 3);
  v16 = *((_DWORD *)this + 7);
  v17 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) += v17;
  --*(_DWORD *)this;
  *((_DWORD *)this + 2) = v15 + v17;
  v18 = v15 + v15 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v15;
  v19 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) += v19;
  *((_DWORD *)this + 6) = v16 + v19;
  v20 = v16 - *((_DWORD *)this + 8);
  *((_DWORD *)this + 3) = v18;
  *((_DWORD *)this + 7) = v16 + v20;
  result = 1LL;
  *((_DWORD *)this + 8) = v16;
  return result;
}
