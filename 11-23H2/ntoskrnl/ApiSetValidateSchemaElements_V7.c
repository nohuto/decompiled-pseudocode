/*
 * XREFs of ApiSetValidateSchemaElements_V7 @ 0x140417320
 * Callers:
 *     ApiSetValidateSchemaFormat_V7 @ 0x1404177F0 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetValidateSchemaElements_V7(__int64 a1)
{
  unsigned __int16 *v2; // rax
  unsigned int v3; // ebx
  unsigned int *v4; // rcx
  unsigned int v5; // ebp
  unsigned int *v6; // rdx
  unsigned int *v7; // r12
  __int64 v8; // r10
  unsigned int v9; // edx
  unsigned int *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v20; // r10d
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // ebp
  __int64 v29; // r10
  unsigned int *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int v33; // r8d
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // r11
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // r10d
  unsigned int v44; // r8d
  unsigned __int64 v45; // rdx
  unsigned int v46; // ecx
  unsigned int v47; // r9d
  unsigned int v48; // ecx
  unsigned int v49; // r9d
  int v50; // [rsp+20h] [rbp-48h]
  unsigned __int16 *v51; // [rsp+70h] [rbp+8h]
  unsigned int *v52; // [rsp+78h] [rbp+10h]
  unsigned int *v53; // [rsp+80h] [rbp+18h]

  v2 = (unsigned __int16 *)(a1 + 98);
  v3 = 0;
  v51 = (unsigned __int16 *)(a1 + 98);
  v4 = (unsigned int *)(a1 + 88);
  v5 = 0;
  v52 = v4;
  v6 = (unsigned int *)(a1 + 28);
  v7 = (unsigned int *)(a1 + 20);
  v53 = (unsigned int *)(a1 + 28);
  if ( *(_DWORD *)(a1 + 44) )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(a1 + 6);
      v9 = *v6;
      v10 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 40) + v5 * (unsigned __int64)*(unsigned __int8 *)(a1 + 50) - v8);
      v11 = *v10;
      if ( (unsigned int)v11 > v9 )
        break;
      v12 = *((unsigned __int16 *)v10 + 2);
      v13 = v12 + v11 + 1;
      if ( v13 < (unsigned int)v11 )
        return v3;
      if ( v13 > v9 )
        break;
      LOBYTE(v50) = 0;
      if ( (unsigned int)ApiSetpSearchForSectionIndex_V7(
                           a1,
                           a1 + 40,
                           a1 + v11 + *(unsigned int *)(a1 + 24) - v8,
                           v12,
                           v50) != v5 )
        break;
      if ( (*((_BYTE *)v10 + 22) & 2) != 0 )
      {
        v14 = v10[3];
        if ( (unsigned int)v14 > *(_DWORD *)(a1 + 80) - 1 )
          return (unsigned int)-1073741596;
        v15 = *(unsigned __int16 *)(a1 + 6);
        v16 = *(unsigned int *)(a1 + 76) + v14 * *(unsigned __int8 *)(a1 + 86) - v15;
        v17 = *(_DWORD *)(v16 + a1);
        if ( v17 > *v7 )
          return (unsigned int)-1073741596;
        v18 = v17 + 2 * *(unsigned __int16 *)(v16 + a1 + 4);
        if ( v18 < v17 )
          return v3;
        if ( v18 > *v7 )
          return (unsigned int)-1073741596;
      }
      else
      {
        LOWORD(v15) = *(_WORD *)(a1 + 6);
      }
      if ( *((_WORD *)v10 + 10) )
      {
        v20 = *((unsigned __int16 *)v10 + 10);
        v21 = v10[4];
        while ( v21 <= (unsigned int)*(unsigned __int16 *)(a1 + 96) - 1 )
        {
          v22 = *v7;
          v23 = a1
              + v21 * (unsigned __int64)*(unsigned __int16 *)(a1 + 98)
              - (unsigned __int16)v15
              + *(unsigned int *)(a1 + 88);
          v24 = *(_DWORD *)(v23 + 4);
          if ( v24 > *v7 )
            break;
          v25 = v24 + *(unsigned __int16 *)(v23 + 12);
          if ( v25 < v24 )
            return v3;
          if ( v25 > v22 )
            break;
          v26 = *(_DWORD *)(v23 + 8);
          if ( v26 > v22 )
            break;
          v27 = v26 + *(unsigned __int16 *)(v23 + 14);
          if ( v27 < v26 )
            return v3;
          if ( v27 > v22 )
            break;
          v21 = *(_DWORD *)v23;
          if ( !--v20 )
            goto LABEL_24;
        }
        return (unsigned int)-1073741596;
      }
LABEL_24:
      ++v5;
      v6 = (unsigned int *)(a1 + 28);
      if ( v5 >= *(_DWORD *)(a1 + 44) )
        goto LABEL_27;
    }
    return (unsigned int)-1073741596;
  }
  v51 = v2;
  v52 = v4;
  v53 = (unsigned int *)(a1 + 28);
LABEL_27:
  v28 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    while ( 1 )
    {
      v29 = *(unsigned __int16 *)(a1 + 6);
      v30 = (unsigned int *)(a1
                           + *(unsigned __int8 *)(a1 + 62) * (unsigned __int64)v28
                           - v29
                           + *(unsigned int *)(a1 + 52));
      v31 = *v30;
      if ( (*(_BYTE *)(a1 + 63) & 1) != 0 )
      {
        if ( (unsigned int)v31 > *v7 )
          return (unsigned int)-1073741596;
        v32 = *((unsigned __int16 *)v30 + 2);
        v33 = v32 + v31 + *((unsigned __int8 *)v30 + 6) + 1;
        if ( v33 < (unsigned int)v31 )
          return v3;
        if ( v33 > *v7 )
          return (unsigned int)-1073741596;
        v34 = *(unsigned int *)(a1 + 16);
        LOBYTE(v50) = 1;
      }
      else
      {
        v35 = *v6;
        if ( (unsigned int)v31 > v35 )
          return (unsigned int)-1073741596;
        v32 = *((unsigned __int16 *)v30 + 2);
        v36 = v32 + v31 + *((unsigned __int8 *)v30 + 6) + 1;
        if ( v36 < (unsigned int)v31 )
          return v3;
        if ( v36 > v35 )
          return (unsigned int)-1073741596;
        v34 = *(unsigned int *)(a1 + 24);
        LOBYTE(v50) = 0;
      }
      if ( (unsigned int)ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v31 + a1 + v34 - v29, v32, v50) != v28 )
        return (unsigned int)-1073741596;
      if ( (*((_BYTE *)v30 + 19) & 2) != 0 )
      {
        v37 = v30[2];
        if ( (unsigned int)v37 > *(_DWORD *)(a1 + 80) - 1 )
          return (unsigned int)-1073741596;
        v38 = *(unsigned __int16 *)(a1 + 6);
        v39 = *(unsigned int *)(a1 + 76) + v37 * *(unsigned __int8 *)(a1 + 86) - v38;
        v40 = *(_DWORD *)(v39 + a1);
        if ( v40 > *v7 )
          return (unsigned int)-1073741596;
        v41 = v40 + 2 * *(unsigned __int16 *)(v39 + a1 + 4);
        if ( v41 < v40 )
          return v3;
        if ( v41 > *v7 )
          return (unsigned int)-1073741596;
      }
      else
      {
        LOWORD(v38) = *(_WORD *)(a1 + 6);
      }
      if ( *((_WORD *)v30 + 8) )
        break;
LABEL_55:
      if ( ++v28 >= *(_DWORD *)(a1 + 56) )
        return v3;
      v6 = v53;
    }
    v42 = v30[3];
    v43 = *((unsigned __int16 *)v30 + 8);
    while ( v42 <= (unsigned int)*(unsigned __int16 *)(a1 + 96) - 1 )
    {
      v44 = *v7;
      v45 = a1 + v42 * (unsigned __int64)*v51 - (unsigned __int16)v38 + *v52;
      v46 = *(_DWORD *)(v45 + 4);
      if ( v46 > *v7 )
        break;
      v47 = v46 + *(unsigned __int16 *)(v45 + 12);
      if ( v47 < v46 )
        return v3;
      if ( v47 > v44 )
        break;
      v48 = *(_DWORD *)(v45 + 8);
      if ( v48 > v44 )
        break;
      v49 = v48 + *(unsigned __int16 *)(v45 + 14);
      if ( v49 < v48 )
        return v3;
      if ( v49 > v44 )
        break;
      v42 = *(_DWORD *)v45;
      if ( !--v43 )
        goto LABEL_55;
    }
    return (unsigned int)-1073741596;
  }
  return v3;
}
