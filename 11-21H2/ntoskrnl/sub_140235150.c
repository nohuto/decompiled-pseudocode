/*
 * XREFs of sub_140235150 @ 0x140235150
 * Callers:
 *     sub_1406ACFF0 @ 0x1406ACFF0 (sub_1406ACFF0.c)
 * Callees:
 *     sub_1402353E4 @ 0x1402353E4 (sub_1402353E4.c)
 *     sub_14023548C @ 0x14023548C (sub_14023548C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F1E0 @ 0x14045F1E0 (sub_14045F1E0.c)
 */

__int64 __fastcall sub_140235150(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        void *a8,
        unsigned int a9)
{
  unsigned __int64 v11; // r10
  size_t v13; // r8
  size_t v14; // rsi
  char *v15; // rsi
  unsigned int v16; // r8d
  unsigned __int8 v17; // cl
  _DWORD *v18; // r12
  unsigned __int64 v19; // r9
  _DWORD *v20; // r13
  unsigned __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned __int64 v23; // r11
  __int64 v24; // rax
  int v25; // r15d
  int v26; // r14d
  unsigned int v27; // ebx
  char *v28; // rdi
  char *v29; // rdi
  _WORD *v30; // r10
  __int16 v31; // r11
  char *v32; // rdx
  unsigned __int64 v33; // r8
  char *v34; // r9
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  char *v40; // r8
  unsigned int v41; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-4Ch]
  _DWORD *v43; // [rsp+38h] [rbp-48h]
  _DWORD *v44; // [rsp+40h] [rbp-40h]
  _DWORD *v45; // [rsp+48h] [rbp-38h]
  _DWORD *v46; // [rsp+50h] [rbp-30h]
  unsigned __int64 v47; // [rsp+58h] [rbp-28h]
  unsigned __int64 v48; // [rsp+60h] [rbp-20h]
  unsigned __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+C8h] [rbp+48h] BYREF

  v11 = (unsigned __int64)a1 >> 12;
  v13 = 4 * (a2 + 3 * v11);
  if ( (unsigned int)a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  memset(a6, 0, v13);
  memset(a8, 0, v14);
  v15 = 0LL;
  v16 = 0;
  v46 = 0LL;
  v17 = 0;
  v42 = 0;
  if ( a3 )
  {
    v18 = (_DWORD *)(a3 + 12);
    v19 = a3 + 12 + *(unsigned int *)(a3 + 8);
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  v47 = v19;
  if ( a4 )
  {
    v20 = (_DWORD *)(a4 + 12);
    v21 = a4 + 12 + *(unsigned int *)(a4 + 8);
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v48 = v21;
  if ( a5 )
  {
    v22 = (_DWORD *)(a5 + 12);
    v23 = a5 + 12 + *(unsigned int *)(a5 + 8);
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v49 = v23;
  v43 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v18 < v19 && *v18 == v16 )
      {
        v24 = (unsigned int)v18[1];
        v44 = v18;
        v18 = (_DWORD *)((char *)v18 + v24);
        v25 = v24 - 8;
      }
      else
      {
        v44 = 0LL;
        v25 = 0;
      }
      LODWORD(a7) = v25;
      if ( (unsigned __int64)v20 < v21 && *v20 == v16 )
      {
        v37 = (unsigned int)v20[1];
        v45 = v20;
        v20 = (_DWORD *)((char *)v20 + v37);
        v26 = v37 - 8;
      }
      else
      {
        v45 = 0LL;
        v26 = 0;
      }
      LODWORD(v51) = v26;
      if ( (unsigned __int64)v22 < v23 && *v22 == v16 )
      {
        v38 = (unsigned int)v22[1];
        v46 = v22;
        v22 = (_DWORD *)((char *)v22 + v38);
        v43 = v22;
        v27 = v38 - 8;
      }
      else
      {
        v27 = 0;
      }
      v41 = v27;
      if ( v17 || v25 || v26 || v27 )
      {
        v28 = a6;
        *((_WORD *)a6 + 3) = v17;
        if ( v17 )
        {
          v36 = sub_14023548C(v17);
          memmove(v28 + 8, v15, v36);
        }
        v15 = v28 + 12;
        v29 = v28 + 12;
        if ( v25 )
        {
          sub_1402353E4(v15, (__int64)&a7);
          LOWORD(v25) = a7;
          v29 += (unsigned int)a7;
        }
        if ( v26 )
        {
          sub_1402353E4(v29, (__int64)&v51);
          LOWORD(v26) = v51;
          v29 += (unsigned int)v51;
        }
        if ( v27 )
        {
          sub_1402353E4(v29, (__int64)&v41);
          LOWORD(v27) = v41;
          v29 += v41;
        }
        v30 = a6;
        a6 = v29;
        *v30 = v25;
        v30[1] = v26;
        v30[2] = v27;
        v31 = 4095;
        v32 = (char *)v30 + (unsigned __int16)v25 + (unsigned __int16)v26 + 12;
        v33 = (unsigned __int64)v30 + (unsigned __int16)v25 + 12;
        v34 = &v32[(unsigned __int16)v27];
        while ( (unsigned __int64)v15 < v33 )
        {
          if ( (*(_DWORD *)v15 & 0xFFFu) + 12 > 0x1000 )
          {
            v17 = 3;
            goto LABEL_34;
          }
          v15 += 4;
        }
        while ( v33 < (unsigned __int64)v32 )
        {
          v39 = sub_14045F1E0(v33);
          if ( (unsigned int)(unsigned __int16)(v31 & *(_WORD *)v40) + v39 > 0x1000 )
          {
            v17 = 4;
            v15 = v40;
            goto LABEL_34;
          }
          v33 = (unsigned __int64)(v40 + 2);
        }
        while ( 1 )
        {
          if ( v32 >= v34 )
          {
            v17 = 0;
            v15 = 0LL;
            goto LABEL_34;
          }
          if ( (unsigned int)(unsigned __int16)(v31 & *(_WORD *)v32) + 6 > 0x1000 )
            break;
          v32 += 2;
        }
        v17 = 5;
        v15 = v32;
LABEL_34:
        v16 = v42;
        v19 = v47;
        v23 = v49;
        *((_QWORD *)a8 + ((unsigned __int64)v42 >> 12)) = v30;
        v22 = v43;
        v21 = v48;
      }
      v16 += 4096;
      v42 = v16;
    }
    while ( v16 < a1 );
  }
  return 0LL;
}
