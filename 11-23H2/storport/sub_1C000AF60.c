/*
 * XREFs of sub_1C000AF60 @ 0x1C000AF60
 * Callers:
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1C000AF60(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // di
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r14
  int v8; // esi
  unsigned __int8 v9; // al
  int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  int v16; // esi
  __int64 v17; // r8
  unsigned __int8 *v18; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // r10d
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  int v37; // esi

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 255;
  v9 = *(_BYTE *)(v1 + 2);
  v10 = 0;
  if ( v9 == 40 )
    v11 = *(_DWORD *)(v1 + 20);
  else
    v11 = *(unsigned __int8 *)(v1 + 2);
  v12 = *(_QWORD *)(a1 + 168);
  if ( v9 != 40 )
    v12 = 0LL;
  if ( v11 )
  {
    if ( v11 == 23 )
    {
      if ( v9 == 40 )
      {
        v33 = *(_DWORD *)(v12 + 56);
        if ( v33 )
        {
          while ( 1 )
          {
            v34 = *(unsigned int *)(v12 + 4LL * v2 + 120);
            if ( (unsigned int)v34 >= 0x80 )
            {
              v35 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v34 <= (unsigned int)v35 )
              {
                v36 = v34 + v12;
                if ( *(_DWORD *)(v34 + v12) == 96 && v34 + 24 <= v35 )
                  break;
              }
            }
            if ( ++v2 >= v33 )
              goto LABEL_57;
          }
          v6 = *(_BYTE *)(v36 + 8);
          v7 = *(_BYTE *)(v36 + 9);
        }
LABEL_57:
        v21 = v7;
        LODWORD(v22) = (v6 | 0x1700) << 16;
      }
      else
      {
        v21 = *(unsigned __int8 *)(v1 + 9);
        LODWORD(v22) = ((v9 << 8) | *(unsigned __int8 *)(v1 + 4)) << 16;
      }
      goto LABEL_22;
    }
    if ( v11 != 36 )
    {
      if ( v11 != 37 )
        return (unsigned __int64)v11 << 24;
      if ( v9 != 40 )
        return (unsigned __int8)*(_DWORD *)(v1 + 64) | (unsigned __int64)((*(_DWORD *)(v1 + 8) | (((v9 << 8) | (unsigned int)*(unsigned __int8 *)(v1 + 4)) << 8)) << 8);
      v23 = *(_DWORD *)(v12 + 56);
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          v25 = *(unsigned int *)(v12 + 4LL * v24 + 120);
          if ( (unsigned int)v25 >= 0x80 )
          {
            v26 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v25 <= (unsigned int)v26 )
            {
              v27 = v25 + v12;
              if ( *(_DWORD *)(v25 + v12) == 98 && v25 + 24 <= v26 )
                break;
            }
          }
          if ( ++v24 >= v23 )
            return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((((unsigned __int8)v11 << 8) | (unsigned int)v4) << 8)) << 8);
        }
        v4 = *(_BYTE *)(v27 + 8);
        v8 = *(_DWORD *)(v27 + 12);
        v2 = *(_DWORD *)(v27 + 16);
      }
      return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((((unsigned __int8)v11 << 8) | (unsigned int)v4) << 8)) << 8);
    }
    if ( v9 != 40 )
    {
      v21 = *(unsigned __int8 *)(v1 + 4);
      v22 = (*(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v9 << 8)) << 8)) << 8;
      return v21 | v22;
    }
    v28 = *(_DWORD *)(v12 + 56);
    v29 = 0;
    if ( v28 )
    {
      while ( 1 )
      {
        v30 = *(unsigned int *)(v12 + 4LL * v29 + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v31 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v30 <= (unsigned int)v31 )
          {
            v32 = v30 + v12;
            if ( *(_DWORD *)(v30 + v12) == 97 && v30 + 24 <= v31 )
              break;
          }
        }
        if ( ++v29 >= v28 )
          goto LABEL_47;
      }
      v2 = *(_DWORD *)(v32 + 12);
      v10 = *(_DWORD *)(v32 + 16);
      v5 = *(_BYTE *)(v32 + 8);
    }
LABEL_47:
    v21 = v5;
    v20 = v10 | ((v2 | ((unsigned __int8)v11 << 8)) << 8);
LABEL_21:
    LODWORD(v22) = v20 << 8;
LABEL_22:
    v22 = (int)v22;
    return v21 | v22;
  }
  if ( v9 != 40 )
  {
    v20 = (((v9 << 8) | *(unsigned __int8 *)(v1 + 72)) << 8) | *(unsigned __int8 *)(v1 + 9);
    v21 = *(unsigned __int8 *)(v1 + 8);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(v12 + 2) != 40 )
    return (unsigned __int64)v3 << 16;
  if ( *(_DWORD *)(v12 + 20) )
    return (unsigned __int64)v3 << 16;
  v13 = *(_DWORD *)(v12 + 56);
  if ( !v13 )
    return (unsigned __int64)v3 << 16;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v12 + 4LL * v2 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_67;
    v15 = *(unsigned int *)(v12 + 16);
    if ( (unsigned int)v14 > (unsigned int)v15 )
      goto LABEL_67;
    v16 = *(_DWORD *)(v14 + v12);
    v17 = v14 + v12;
    if ( v16 == 64 )
    {
      if ( v14 + 40 <= v15 )
      {
        if ( !*(_BYTE *)(v17 + 10) )
          return (unsigned __int64)v3 << 16;
LABEL_15:
        v18 = (unsigned __int8 *)(v17 + 24);
        goto LABEL_16;
      }
      goto LABEL_67;
    }
    v37 = v16 - 65;
    if ( v37 )
      break;
    if ( v14 + 56 <= v15 )
    {
      if ( !*(_BYTE *)(v17 + 10) )
        return (unsigned __int64)v3 << 16;
      goto LABEL_15;
    }
LABEL_67:
    if ( ++v2 >= v13 )
      return (unsigned __int64)v3 << 16;
  }
  if ( v37 != 1 || v14 + 40 > v15 )
    goto LABEL_67;
  if ( !*(_DWORD *)(v17 + 12) )
    return (unsigned __int64)v3 << 16;
  v18 = (unsigned __int8 *)(v17 + 32);
LABEL_16:
  if ( v18 )
    v3 = *v18;
  return (unsigned __int64)v3 << 16;
}
