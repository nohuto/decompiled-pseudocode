/*
 * XREFs of sub_140A475C0 @ 0x140A475C0
 * Callers:
 *     sub_140A474C0 @ 0x140A474C0 (sub_140A474C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140A475C0(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v8; // rdi
  char v9; // dl
  char *v10; // r10
  __int64 *v11; // r9
  char *v13; // rcx
  char *v14; // rsi
  char *v15; // rbx
  unsigned int v16; // r11d
  unsigned __int8 v17; // r12
  int v18; // ebp
  char *v19; // rax
  int *v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  char v23; // dl
  int v24; // eax
  __int64 v25; // rdx
  bool v26; // cf
  int v27; // esi
  char *v29; // rcx
  int v30; // eax
  unsigned int v31; // edi
  __int64 *v32; // [rsp+20h] [rbp-58h]
  char v33; // [rsp+88h] [rbp+10h]
  unsigned __int64 v34; // [rsp+90h] [rbp+18h]
  char *v36; // [rsp+B0h] [rbp+38h]

  v8 = a3;
  v9 = 0;
  v10 = a4;
  v11 = &qword_140A6D8B0;
  v33 = 0;
  v32 = &qword_140A6D8B0;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    v8 = (unsigned __int64)(a2 + 4096);
  v13 = (char *)a5;
  v14 = v10 + 3;
  v15 = a2;
  if ( (unsigned __int64)(v10 + 4095) < a5 )
    v13 = v10 + 4095;
  *(_QWORD *)a7 = a2;
  v16 = 0;
  v34 = (unsigned __int64)v13;
  v17 = 0;
  *(_QWORD *)(a7 + 8) = v8;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v18) = 0;
  v19 = v10 + 2;
  if ( (unsigned __int64)a2 >= v8 )
  {
LABEL_18:
    if ( v19 >= v13 )
      LODWORD(v14) = (_DWORD)v14 - 1;
    else
      *v19 = v17;
    v27 = (_DWORD)v14 - (_DWORD)v10;
    *a6 = v27;
    *(_WORD *)v10 = (v27 - 3) & 0xFFF | 0xB000;
    if ( !v9 )
      return 279;
    return v16;
  }
  v36 = v10 + 2;
  v20 = &dword_140A6D8BC;
  while ( 1 )
  {
    if ( &a2[*v20] < v15 )
    {
      do
      {
        v30 = *((_DWORD *)v11 + 7);
        v11 = (__int64 *)((char *)v11 + 20);
        *(_DWORD *)(a7 + 16) = v30;
        v20 = (int *)v11 + 3;
      }
      while ( &a2[*((unsigned int *)v11 + 3)] < v15 );
      v32 = v11;
    }
    if ( (unsigned __int64)(v15 + 3) > v8 )
      goto LABEL_11;
    v21 = sub_14042A5E0(v15, a7);
    if ( v21 )
      break;
    v13 = (char *)v34;
    v9 = v33;
    v11 = v32;
LABEL_11:
    if ( v14 >= v13 )
      goto LABEL_16;
    v22 = 1LL;
    v23 = *v15 | v9;
    *v14 = *v15;
    v33 = v23;
    v24 = v17 & ~(1 << v18);
    v25 = 1LL;
LABEL_13:
    v14 += v25;
    v15 += v22;
    v17 = v24;
    v18 = ((_BYTE)v18 + 1) & 7;
    if ( !v18 )
    {
      v26 = (unsigned __int64)v15 < v8;
      if ( (unsigned __int64)v15 >= v8 )
        goto LABEL_15;
      v29 = v36;
      v17 = 0;
      v36 = v14++;
      *v29 = v24;
    }
    v26 = (unsigned __int64)v15 < v8;
LABEL_15:
    v13 = (char *)v34;
    v9 = v33;
    if ( !v26 )
      goto LABEL_16;
  }
  if ( (unsigned __int64)(v14 + 1) < v34 )
  {
    v11 = v32;
    v22 = v21;
    *(_WORD *)v14 = (v21 - 3) | (((_WORD)v15 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v32 + 16));
    v24 = v17 | (1 << v18);
    v25 = 2LL;
    goto LABEL_13;
  }
  v13 = (char *)v34;
LABEL_16:
  if ( (unsigned __int64)v15 >= v8 )
  {
    v9 = v33;
    v16 = 0;
    v19 = v36;
    v10 = a4;
    goto LABEL_18;
  }
  v31 = v8 - (_DWORD)a2;
  if ( (unsigned __int64)&a4[v31 + 2] > a5 )
    return 3221225507LL;
  memmove(a4 + 2, a2, v31);
  *a6 = v31 + 2;
  *(_WORD *)a4 = (v31 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
