/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C000E780
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C000E5C0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C00377E4 (RaidAdapterRequestDirectComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r8
  unsigned __int8 v3; // r10
  unsigned __int8 v4; // bp
  char v6; // r11
  __int64 v7; // rdi
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r15
  unsigned __int8 *v10; // rsi
  int v11; // edx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // r14
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // r10
  __int64 result; // rax
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r14d
  unsigned int v28; // r10d
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // ebp
  unsigned int v32; // r10d
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // esi
  unsigned int v37; // r10d
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // ecx
  int v41; // [rsp+30h] [rbp+8h]

  v1 = a1[21];
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v6 = *(_BYTE *)(v1 + 2);
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( v6 == 40 )
  {
    v11 = *(_DWORD *)(v1 + 20);
    v7 = a1[21];
  }
  else
  {
    v11 = *(unsigned __int8 *)(v1 + 2);
  }
  v12 = *(unsigned __int8 *)(v1 + 3);
  if ( v11 )
  {
    switch ( v11 )
    {
      case 23:
        if ( v6 == 40 )
        {
          v36 = *(_DWORD *)(v7 + 56);
          v37 = 0;
          if ( v36 )
          {
            while ( 1 )
            {
              v38 = *(unsigned int *)(v7 + 4LL * v37 + 120);
              if ( (unsigned int)v38 >= 0x80 )
              {
                v39 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v38 <= (unsigned int)v39 && *(_DWORD *)(v7 + v38) == 96 && v38 + 24 <= v39 )
                  break;
              }
              if ( ++v37 >= v36 )
                goto LABEL_66;
            }
            v8 = *(_BYTE *)(v7 + (unsigned int)v38 + 8);
          }
LABEL_66:
          v19 = (v12 | 0x170000u) << 8;
          v20 = (unsigned __int64)v8 << 16;
          goto LABEL_18;
        }
        break;
      case 36:
        if ( v6 == 40 )
        {
          v31 = *(_DWORD *)(v7 + 56);
          v32 = 0;
          if ( v31 )
          {
            while ( 1 )
            {
              v33 = *(unsigned int *)(v7 + 4LL * v32 + 120);
              if ( (unsigned int)v33 >= 0x80 )
              {
                v34 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v33 <= (unsigned int)v34 && *(_DWORD *)(v33 + v7) == 97 && v33 + 24 <= v34 )
                  break;
              }
              if ( ++v32 >= v31 )
                goto LABEL_55;
            }
            LODWORD(v10) = *(_DWORD *)((unsigned int)v33 + v7 + 12);
          }
LABEL_55:
          v35 = ((_DWORD)v10 << 16) | ((v12 | (v11 << 16)) << 8);
        }
        else
        {
          v35 = (*(_DWORD *)(v1 + 8) << 16) | ((v12 | (v11 << 16)) << 8);
        }
        v21 = v35;
        goto LABEL_19;
      case 37:
        if ( v6 == 40 )
        {
          v27 = *(_DWORD *)(v7 + 56);
          v28 = 0;
          if ( v27 )
          {
            while ( 1 )
            {
              v29 = *(unsigned int *)(v7 + 4LL * v28 + 120);
              if ( (unsigned int)v29 >= 0x80 )
              {
                v30 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v29 <= (unsigned int)v30 && *(_DWORD *)(v29 + v7) == 98 && v29 + 24 <= v30 )
                  break;
              }
              if ( ++v28 >= v27 )
                goto LABEL_39;
            }
            v4 = *(_BYTE *)((unsigned int)v29 + v7 + 8);
          }
LABEL_39:
          v19 = (v12 | (unsigned int)(v11 << 16)) << 8;
          v20 = (unsigned __int64)v4 << 16;
          goto LABEL_18;
        }
        break;
      default:
        v21 = (v12 | (unsigned int)(v11 << 16)) << 8;
        goto LABEL_19;
    }
    v19 = (v12 | (unsigned int)(v11 << 16)) << 8;
    v20 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
    goto LABEL_18;
  }
  if ( v6 != 40 )
  {
    v19 = ((unsigned __int64)*(unsigned __int8 *)(v1 + 72) << 16) | (unsigned int)(v12 << 8);
    v20 = *(unsigned __int8 *)(v1 + 4);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(v7 + 2) != 40 || *(_DWORD *)(v7 + 20) )
    goto LABEL_17;
  v13 = *(_DWORD *)(v7 + 56);
  v14 = 0LL;
  v41 = 0;
  if ( !v13 )
    goto LABEL_15;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v7 + 4 * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_77;
    v16 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_77;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v7);
    if ( v18 == 64 )
    {
      if ( v17 + 40 <= v16 )
      {
        if ( *(_BYTE *)(v17 + v7 + 10) )
          v10 = (unsigned __int8 *)(v17 + v7 + 24);
        goto LABEL_14;
      }
      goto LABEL_77;
    }
    v40 = v18 - 65;
    if ( !v40 )
      break;
    if ( v40 == 1 && v17 + 40 <= v16 )
    {
      v10 = (unsigned __int8 *)(v17 + v7 + 32);
      if ( !*(_DWORD *)(v17 + v7 + 12) )
        v10 = 0LL;
      goto LABEL_14;
    }
LABEL_77:
    v14 = (unsigned int)(v41 + 1);
    v41 = v14;
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_15;
  }
  if ( v17 + 56 > v16 )
    goto LABEL_77;
  v10 = (unsigned __int8 *)(v17 + v7 + 24);
  if ( !*(_BYTE *)(v17 + v7 + 10) )
    v10 = 0LL;
LABEL_14:
  v3 = *(_BYTE *)(v17 + v7 + 8);
LABEL_15:
  if ( v10 )
    v9 = *v10;
LABEL_17:
  v19 = ((unsigned __int64)v9 << 16) | (unsigned int)(v12 << 8);
  v20 = v3;
LABEL_18:
  v21 = v20 | v19;
LABEL_19:
  v22 = a1[20];
  if ( !v22 )
  {
    if ( v6 == 40 )
      v22 = *(_QWORD *)(v7 + 80);
    else
      v22 = *(_QWORD *)(v1 + 48);
  }
  result = a1[28];
  if ( result )
  {
    v24 = *(_DWORD *)(result + 96);
    result = BYTE2(v24);
    v2 = BYTE2(v24) | ((((unsigned __int64)(unsigned __int8)v24 << 8) | BYTE1(v24)) << 8);
  }
  v25 = a1[27];
  if ( v25 && *(_DWORD *)(v25 + 4868) )
  {
    if ( *(_QWORD *)(v25 + 4872) )
    {
      v26 = *(_QWORD *)(v25 + 4872)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v25 + 4864)) % *(_DWORD *)(v25 + 4868));
      *(_DWORD *)v26 = 1;
      result = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v26 + 40) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v26 + 8) = v22;
      *(_QWORD *)(v26 + 16) = v2;
      *(_QWORD *)(v26 + 24) = v1;
      *(_QWORD *)(v26 + 32) = v21;
    }
  }
  return result;
}
