/*
 * XREFs of sub_1C0060EDC @ 0x1C0060EDC
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     WorkerRoutine @ 0x1C0063A70 (WorkerRoutine.c)
 * Callees:
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 */

void __fastcall sub_1C0060EDC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  unsigned __int8 v7; // r10
  int v8; // r8d
  char v9; // al
  unsigned __int8 v10; // r9
  int v11; // edx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r10d
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // r10d
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 *v33; // rax
  unsigned __int8 v34; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v34 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(a3 + 2);
  v10 = 0;
  if ( v9 == 40 )
    v11 = *(_DWORD *)(a3 + 20);
  else
    v11 = *(unsigned __int8 *)(a3 + 2);
  v12 = a3;
  if ( v9 != 40 )
    v12 = 0LL;
  switch ( v11 )
  {
    case 0:
      if ( v9 == 40 )
      {
        v33 = (unsigned __int8 *)sub_1C0018028(v12, 0LL, 0LL, &v34, 0LL, 0LL);
        if ( v33 )
          v3 = *v33;
        v13 = ((unsigned __int64)v3 << 8) | *(unsigned __int8 *)(v12 + 3);
        v14 = v34;
      }
      else
      {
        v13 = *(unsigned __int8 *)(a3 + 3) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 72) << 8);
        v14 = *(unsigned __int8 *)(a3 + 4);
      }
      goto LABEL_52;
    case 23:
      if ( v9 == 40 )
      {
        v27 = *(_DWORD *)(v12 + 56);
        v28 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            v10 = 0;
            v29 = *(unsigned int *)(v12 + 4LL * v28 + 120);
            if ( (unsigned int)v29 >= 0x80 )
            {
              v30 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v29 <= (unsigned int)v30 && *(_DWORD *)(v29 + v12) == 96 && v29 + 24 <= v30 )
                break;
            }
            if ( ++v28 >= v27 )
              goto LABEL_44;
          }
          v10 = *(_BYTE *)((unsigned int)v29 + v12 + 8);
        }
LABEL_44:
        v31 = *(unsigned __int8 *)(v12 + 3);
        v32 = (unsigned __int64)v10 << 8;
      }
      else
      {
        v32 = *(unsigned __int8 *)(a3 + 3);
        v31 = (unsigned __int64)*(unsigned __int8 *)(a3 + 4) << 8;
      }
      v21 = ((v32 | v31) << 8) | 0x17000000;
      break;
    case 36:
      if ( v9 == 40 )
      {
        v22 = *(_DWORD *)(v12 + 56);
        v23 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v8 = 0;
            v24 = *(unsigned int *)(v12 + 4LL * v23 + 120);
            if ( (unsigned int)v24 >= 0x80 )
            {
              v25 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v24 <= (unsigned int)v25 && *(_DWORD *)(v24 + v12) == 97 && v24 + 24 <= v25 )
                break;
            }
            if ( ++v23 >= v22 )
              goto LABEL_32;
          }
          v8 = *(_DWORD *)((unsigned int)v24 + v12 + 12);
        }
LABEL_32:
        v26 = (v8 << 8) | *(unsigned __int8 *)(v12 + 3);
      }
      else
      {
        v26 = *(unsigned __int8 *)(a3 + 3) | (*(_DWORD *)(a3 + 8) << 8);
      }
      v21 = (unsigned int)(v26 << 8) | 0x24000000LL;
      break;
    case 37:
      if ( v9 == 40 )
      {
        v15 = *(_DWORD *)(v12 + 56);
        v16 = 0;
        if ( v15 )
        {
          while ( 1 )
          {
            v7 = 0;
            v17 = *(unsigned int *)(v12 + 4LL * v16 + 120);
            if ( (unsigned int)v17 >= 0x80 )
            {
              v18 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v17 <= (unsigned int)v18 && *(_DWORD *)(v17 + v12) == 98 && v17 + 24 <= v18 )
                break;
            }
            if ( ++v16 >= v15 )
              goto LABEL_20;
          }
          v7 = *(_BYTE *)((unsigned int)v17 + v12 + 8);
        }
LABEL_20:
        v19 = *(unsigned __int8 *)(v12 + 3);
        v20 = (unsigned __int64)v7 << 8;
      }
      else
      {
        v20 = *(unsigned __int8 *)(a3 + 3);
        v19 = (unsigned __int64)*(unsigned __int8 *)(a3 + 4) << 8;
      }
      v21 = ((v20 | v19) << 8) | 0x25000000;
      break;
    default:
      v13 = *(unsigned __int8 *)(a3 + 3);
      v14 = (unsigned int)(v11 << 24);
LABEL_52:
      v21 = v14 | (v13 << 8);
      break;
  }
  sub_1C0019E4C(a1, 2, a2, *(int *)(a2 + 48), a3, v21, 0LL);
}
