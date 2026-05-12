/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0011020
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidAdapterRequestComplete @ 0x1C0010E50 (RaidAdapterRequestComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  __int64 v1; // r10
  unsigned __int64 v2; // r8
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // si
  char v6; // dl
  __int64 v7; // rdi
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r15
  int v11; // eax
  int v12; // r11d
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  int v18; // ecx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r11
  __int64 result; // rax
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // ebp
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // ebp
  unsigned int v31; // esi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned int v34; // r11d
  unsigned int v35; // esi
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  int v38; // ecx

  v1 = a1[21];
  v2 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = *(_BYTE *)(v1 + 2);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
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
          v35 = *(_DWORD *)(v7 + 56);
          if ( v35 )
          {
            while ( 1 )
            {
              v36 = *(unsigned int *)(v7 + 4LL * (unsigned int)v8 + 120);
              if ( (unsigned int)v36 >= 0x80 )
              {
                v37 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v36 <= (unsigned int)v37 && *(_DWORD *)(v7 + v36) == 96 && v36 + 24 <= v37 )
                  break;
              }
              LODWORD(v8) = (_DWORD)v8 + 1;
              if ( (unsigned int)v8 >= v35 )
                goto LABEL_66;
            }
            v9 = *(_BYTE *)(v7 + (unsigned int)v36 + 8);
          }
LABEL_66:
          v19 = (v12 | 0x170000u) << 8;
          v20 = (unsigned __int64)v9 << 16;
          goto LABEL_17;
        }
        v19 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
        v12 |= 0x170000u;
        break;
      case 36:
        if ( v6 == 40 )
        {
          v30 = *(_DWORD *)(v7 + 56);
          v31 = 0;
          if ( v30 )
          {
            while ( 1 )
            {
              v32 = *(unsigned int *)(v7 + 4LL * v31 + 120);
              if ( (unsigned int)v32 >= 0x80 )
              {
                v33 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v32 <= (unsigned int)v33 && *(_DWORD *)(v32 + v7) == 97 && v32 + 24 <= v33 )
                  break;
              }
              if ( ++v31 >= v30 )
                goto LABEL_55;
            }
            LODWORD(v8) = *(_DWORD *)((unsigned int)v32 + v7 + 12);
          }
LABEL_55:
          v34 = ((_DWORD)v8 << 16) | ((v12 | 0x240000) << 8);
        }
        else
        {
          v34 = ((v12 | 0x240000) << 8) | (*(_DWORD *)(v1 + 8) << 16);
        }
        v21 = v34;
        goto LABEL_18;
      case 37:
        if ( v6 == 40 )
        {
          v27 = *(_DWORD *)(v7 + 56);
          if ( v27 )
          {
            while ( 1 )
            {
              v28 = *(unsigned int *)(v7 + 4LL * (unsigned int)v8 + 120);
              if ( (unsigned int)v28 >= 0x80 )
              {
                v29 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v28 <= (unsigned int)v29 && *(_DWORD *)(v28 + v7) == 98 && v28 + 24 <= v29 )
                  break;
              }
              LODWORD(v8) = (_DWORD)v8 + 1;
              if ( (unsigned int)v8 >= v27 )
                goto LABEL_42;
            }
            v10 = *(_BYTE *)((unsigned int)v28 + v7 + 8);
          }
LABEL_42:
          v19 = (v12 | 0x250000u) << 8;
          v20 = (unsigned __int64)v10 << 16;
          goto LABEL_17;
        }
        v19 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
        v12 |= 0x250000u;
        break;
      default:
        v21 = (v12 | (unsigned int)(v11 << 16)) << 8;
        goto LABEL_18;
    }
LABEL_28:
    v20 = (unsigned int)(v12 << 8);
    goto LABEL_17;
  }
  if ( v6 != 40 )
  {
    v19 = *(unsigned __int8 *)(v1 + 4) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 72) << 16);
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v7 + 2) != 40 )
    goto LABEL_16;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_16;
  v13 = *(_DWORD *)(v7 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_16;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v7 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_78;
    v16 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_78;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v7);
    if ( v18 == 64 )
    {
      if ( v17 + 40 <= v16 )
      {
        if ( *(_BYTE *)(v17 + v7 + 10) )
          v8 = (unsigned __int8 *)(v17 + v7 + 24);
        goto LABEL_14;
      }
      goto LABEL_78;
    }
    v38 = v18 - 65;
    if ( !v38 )
      break;
    if ( v38 == 1 && v17 + 40 <= v16 )
    {
      v8 = (unsigned __int8 *)(v17 + v7 + 32);
      if ( !*(_DWORD *)(v17 + v7 + 12) )
        v8 = 0LL;
      goto LABEL_14;
    }
LABEL_78:
    if ( ++v14 >= v13 )
      goto LABEL_16;
  }
  if ( v17 + 56 > v16 )
    goto LABEL_78;
  v8 = (unsigned __int8 *)(v17 + v7 + 24);
  if ( !*(_BYTE *)(v17 + v7 + 10) )
    v8 = 0LL;
LABEL_14:
  v5 = *(_BYTE *)(v17 + v7 + 8);
  if ( v8 )
    v4 = *v8;
LABEL_16:
  v19 = ((unsigned __int64)v4 << 16) | (unsigned int)(v12 << 8);
  v20 = v5;
LABEL_17:
  v21 = v20 | v19;
LABEL_18:
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
  if ( v25 && *(_DWORD *)(v25 + 4804) )
  {
    if ( *(_QWORD *)(v25 + 4808) )
    {
      v26 = *(_QWORD *)(v25 + 4808)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v25 + 4800)) % *(_DWORD *)(v25 + 4804));
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
