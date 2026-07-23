/*
 * XREFs of sub_1406F4A80 @ 0x1406F4A80
 * Callers:
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     MmCreateMdl @ 0x1402411C0 (MmCreateMdl.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_14027466C @ 0x14027466C (sub_14027466C.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 */

__int64 __fastcall sub_1406F4A80(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // r10
  unsigned __int64 v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r10
  SIZE_T v23; // r8
  __int64 v24; // rsi
  __int64 *v25; // rdi
  unsigned int v26; // r12d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  ULONG v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-A8h]
  _QWORD *v38; // [rsp+28h] [rbp-A0h]
  _QWORD *v39; // [rsp+30h] [rbp-98h]
  unsigned int v40; // [rsp+38h] [rbp-90h]
  unsigned int v41; // [rsp+3Ch] [rbp-8Ch]
  __int64 *v42; // [rsp+40h] [rbp-88h]
  _QWORD *v43; // [rsp+48h] [rbp-80h]
  PMDL Mdl; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  unsigned __int64 v47; // [rsp+68h] [rbp-60h]
  unsigned __int64 v48; // [rsp+70h] [rbp-58h]
  unsigned int v52; // [rsp+E8h] [rbp+20h]

  v40 = *(_DWORD *)(a1 + 80);
  v4 = *(_DWORD *)(a1 + 84);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  v52 = 0;
  v8 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v9 = *(_QWORD **)(a1 + 96);
  v10 = a1 + 8 * (*(unsigned int *)(a1 + 92) + 17LL);
  v41 = v4;
  v45 = v6;
  v47 = v10;
  v38 = v9;
  if ( (unsigned __int64)v9 >= v10 )
    return 0;
  v11 = v6 + 128;
  v12 = v9 + 1;
  if ( *(_QWORD *)(a1 + 16) )
    v11 = *(_QWORD *)(a1 + 16);
  v39 = v9 + 1;
  v37 = v11;
  v13 = 0;
  while ( 1 )
  {
    v14 = *v9;
    v15 = (*v9 >> 2) & 0x3FFFFFFFLL;
    if ( (*v9 & 2) != 0 )
      break;
LABEL_6:
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
      {
        v31 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 )
        {
          if ( (__int64)(v31 - v8) >> 3 > dword_140C531D4 )
            goto LABEL_17;
        }
        else
        {
          v7 = v9;
          v43 = v9;
        }
        v5 = v9;
        v8 = v31;
      }
      if ( v5 )
        goto LABEL_18;
    }
    else
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 )
      {
        if ( (__int64)(v16 - v8) >> 3 > dword_140C531D4 )
          goto LABEL_17;
      }
      else
      {
        v7 = v9;
        v43 = v9;
      }
      v5 = v9;
      v8 = v16;
      if ( v12 == (_QWORD *)v10 )
        goto LABEL_18;
    }
LABEL_10:
    ++v9;
    ++v12;
    v38 = v9;
    v39 = v12;
    if ( (unsigned __int64)v9 >= v10 )
      return v13;
  }
  if ( !v5 )
  {
    if ( !v15 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( !v15 )
    goto LABEL_18;
LABEL_17:
  v38 = v9 - 1;
  v39 = v12 - 1;
LABEL_18:
  v48 = *v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v19 = ((__int64)(v48 - v18) >> 3) + 1;
  v20 = sub_14033C424(0);
  v46 = v20;
  v21 = v20;
  if ( !v20 )
    return (unsigned int)-1073741670;
  *(_QWORD *)(v20 + 248) = 0LL;
  sub_14027466C(v20, v41, v40);
  v23 = v19 << 12;
  if ( v19 <= 0x10 )
  {
    Mdl = (PMDL)(v21 + 272);
    *(_WORD *)(v21 + 280) = 8 * (((__int64)(v48 - v18) >> 3) + 7);
    *(_QWORD *)(v21 + 272) = v22;
    *(_WORD *)(v21 + 282) = v22;
    *(_QWORD *)(v21 + 304) = v22;
    *(_DWORD *)(v21 + 316) = v22;
    *(_DWORD *)(v21 + 312) = v23;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v23);
  if ( Mdl )
  {
LABEL_21:
    v24 = v37;
    v25 = v42;
    v26 = v52;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v24 + 8);
      if ( v18 >= v27 && v18 < v27 + 8LL * *(unsigned int *)(v24 + 44) )
        break;
      if ( (*(_BYTE *)(v24 + 34) & 2) != 0 && (*(_DWORD *)(v45 + 56) & 0x8000000) != 0 )
      {
        if ( *(_QWORD *)(v24 + 24) )
        {
          v34 = sub_140256DF8(v45, a2, v24);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 72);
            if ( v18 >= v35 && v18 < v35 + 8LL * *(unsigned int *)(v24 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v45 + 56) & 0x20) != 0 )
      {
        v30 = sub_14027B234((_QWORD *)v24);
        if ( v30 )
        {
          v36 = *(_QWORD *)(v30 + 72);
          if ( v18 >= v36 && v18 < v36 + 8LL * *(unsigned int *)(v24 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v25 )
        {
          if ( v26 >= *((_DWORD *)v25 + 4) )
          {
            v25 = (__int64 *)*v25;
            v26 = 1;
            v24 = v25[3];
          }
          else
          {
            v33 = v26++;
            v24 = v25[v33 + 3];
          }
        }
        else
        {
          v25 = *(__int64 **)(a1 + 24);
          v26 = 1;
          v24 = v25[3];
        }
      }
      else
      {
        v24 = *(_QWORD *)(v24 + 16);
      }
    }
    v52 = v26;
    v42 = v25;
    v37 = v24;
    v28 = sub_1403342D0(v24, v18, a2);
    v9 = v38;
    v12 = v39;
    v10 = v47;
    v8 = v48;
    *(_QWORD *)(v46 + 96) = v28;
    if ( (*(_BYTE *)v5 & 1) != 0 && (*(_DWORD *)(v45 + 56) & 0x20) != 0 )
    {
      v32 = sub_14033DFC0((_QWORD *)v24) - v28;
      if ( v32 <= Mdl->ByteCount )
        Mdl->ByteCount = (v32 + 511) & 0xFFFFFE00;
    }
    v7 = v43;
    *(_QWORD *)(v46 + 240) = v43;
    *(_QWORD *)(v46 + 200) = v5;
    *(_QWORD *)(v46 + 208) = v24;
    *(_QWORD *)(v46 + 224) = a3;
    if ( a3 )
      *(_DWORD *)(v46 + 192) |= 0x8000u;
    *(_QWORD *)(v46 + 256) = Mdl;
    v29 = *(__int64 **)(a1 + 128);
    if ( *v29 != a1 + 120 )
      __fastfail(3u);
    *(_QWORD *)v46 = a1 + 120;
    *(_QWORD *)(v46 + 8) = v29;
    *v29 = v46;
    *(_QWORD *)(a1 + 128) = v46;
    ++*(_DWORD *)(a1 + 108);
    v13 = 0;
    v5 = 0LL;
    goto LABEL_10;
  }
  sub_14027456C((PSLIST_ENTRY)v21);
  return (unsigned int)-1073741670;
}
