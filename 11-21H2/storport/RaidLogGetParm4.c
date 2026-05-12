/*
 * XREFs of RaidLogGetParm4 @ 0x1C00057C0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidLogGetParm4(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int8 v3; // r10
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // si
  unsigned __int8 v6; // r11
  unsigned __int8 v7; // bl
  int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned __int64 v15; // r11
  int v16; // esi
  __int64 v17; // r8
  unsigned __int8 *v18; // rcx
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
  v9 = *(unsigned __int8 *)(v1 + 2);
  v10 = 0;
  if ( (_BYTE)v9 == 40 )
    v11 = *(_DWORD *)(v1 + 20);
  else
    v11 = *(unsigned __int8 *)(v1 + 2);
  v12 = v1;
  if ( (_BYTE)v9 != 40 )
    v12 = 0LL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 0x17u:
        if ( (_BYTE)v9 != 40 )
        {
          v21 = *(unsigned __int8 *)(v1 + 9);
          LODWORD(v22) = (*(unsigned __int8 *)(v1 + 4) | (v9 << 8)) << 16;
          goto LABEL_22;
        }
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
        v22 = (v6 | 0x1700LL) << 16;
        break;
      case 0x24u:
        if ( (_BYTE)v9 != 40 )
        {
          v21 = *(unsigned __int8 *)(v1 + 4);
          v20 = *(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v9 << 8)) << 8);
          goto LABEL_21;
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
        v22 = (int)((v10 | ((v2 | 0x2400) << 8)) << 8);
        break;
      case 0x25u:
        if ( (_BYTE)v9 != 40 )
          return (unsigned __int8)*(_DWORD *)(v1 + 64) | (unsigned __int64)((*(_DWORD *)(v1 + 8) | ((*(unsigned __int8 *)(v1 + 4) | (unsigned int)(v9 << 8)) << 8)) << 8);
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
              return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((v4 | 0x2500u) << 8)) << 8);
          }
          v4 = *(_BYTE *)(v27 + 8);
          v8 = *(_DWORD *)(v27 + 12);
          v2 = *(_DWORD *)(v27 + 16);
        }
        return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((v4 | 0x2500u) << 8)) << 8);
      default:
        return (unsigned __int64)v11 << 24;
    }
    return v21 | v22;
  }
  if ( (_BYTE)v9 != 40 )
  {
    v20 = (((v9 << 8) | *(unsigned __int8 *)(v1 + 72)) << 8) | *(unsigned __int8 *)(v1 + 9);
    v21 = *(unsigned __int8 *)(v1 + 8);
LABEL_21:
    LODWORD(v22) = v20 << 8;
LABEL_22:
    v22 = (int)v22;
    return v21 | v22;
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
    v14 = *(unsigned int *)(v12 + 4LL * v10 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_68;
    v15 = *(unsigned int *)(v12 + 16);
    if ( (unsigned int)v14 > (unsigned int)v15 )
      goto LABEL_68;
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
      goto LABEL_68;
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
LABEL_68:
    if ( ++v10 >= v13 )
      return (unsigned __int64)v3 << 16;
  }
  if ( v37 != 1 || v14 + 40 > v15 )
    goto LABEL_68;
  v18 = (unsigned __int8 *)(v17 + 32);
  if ( !*(_DWORD *)(v17 + 12) )
    v18 = 0LL;
LABEL_16:
  if ( v18 )
    v3 = *v18;
  return (unsigned __int64)v3 << 16;
}
