/*
 * XREFs of sub_140820DCC @ 0x140820DCC
 * Callers:
 *     sub_1405611AC @ 0x1405611AC (sub_1405611AC.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082045C @ 0x14082045C (sub_14082045C.c)
 *     sub_1408204B4 @ 0x1408204B4 (sub_1408204B4.c)
 *     sub_140821364 @ 0x140821364 (sub_140821364.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140820DCC(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // edi
  unsigned int *v4; // r14
  int v5; // r8d
  unsigned int *v6; // rsi
  int v7; // ebp
  unsigned int *v8; // rdx
  int v9; // r10d
  unsigned int *v10; // rcx
  unsigned int *v11; // r15
  char v12; // bl
  char v13; // r9
  int v14; // edi
  int v15; // eax
  unsigned int v16; // r8d
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int64 v22; // rbp
  unsigned int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r15d
  _QWORD *Pool2; // rax
  _QWORD *v30; // rsi
  unsigned int *v31; // r12
  __int64 *v32; // rbx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // r15d
  int v36; // r13d
  __int64 v37; // rbp
  int *v38; // rdx
  unsigned int *v39; // rbx
  __int64 v40; // r14
  _QWORD *v41; // r9
  int *v42; // rax
  int v43; // ecx
  _QWORD *v44; // rax
  int i; // edx
  char *v46; // rcx
  char *v47; // r8
  char v48; // al
  bool v49; // zf
  char v50; // al
  unsigned int v51; // eax
  __int64 v52; // r8
  int v53; // edi
  unsigned int v54; // edi
  int v56; // eax
  int v57; // [rsp+20h] [rbp-88h]
  int v58; // [rsp+20h] [rbp-88h]
  int v59; // [rsp+24h] [rbp-84h]
  int v60; // [rsp+28h] [rbp-80h]
  __int64 *v61; // [rsp+30h] [rbp-78h]
  __int64 v62; // [rsp+38h] [rbp-70h]
  int v63; // [rsp+40h] [rbp-68h]
  char *v64; // [rsp+48h] [rbp-60h]
  _QWORD *v65; // [rsp+50h] [rbp-58h]
  __int64 *v66; // [rsp+58h] [rbp-50h]
  int v69; // [rsp+C0h] [rbp+18h]
  unsigned int v70; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v69 = 0;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = 0;
  v8 = v2 + 8;
  v9 = v3 - 1;
  if ( (int)(v3 - 1) >= 0 )
  {
    do
    {
      v10 = v8 + 2;
      v8 += 8 * v8[1] + 2;
      if ( v10 == v8 )
        return 0LL;
      if ( v10 > v8 || v10 > v6 || v8 > v6 )
        return 3221225485LL;
      if ( *((_BYTE *)v10 + 1) == 0x80 )
        v10 += 8;
      v11 = v10;
LABEL_10:
      v12 = 1;
      while ( v10 < v8 )
      {
        v13 = *((_BYTE *)v10 + 1);
        v14 = v5;
        if ( (unsigned __int8)v13 == 128 )
          return 3221225485LL;
        if ( *((unsigned __int8 *)v10 + 1) == 129 )
        {
          do
          {
            if ( *((_BYTE *)v10 + 1) != 0x81 )
              break;
            if ( v10 == v11 )
              return 3221225485LL;
            ++v5;
            v10 += 8;
          }
          while ( v10 < v8 );
          goto LABEL_10;
        }
        v15 = ++v5;
        if ( v13 <= 0 )
        {
          *(_BYTE *)v10 = 1;
          v5 = v14;
          v10 += 8;
          if ( v13 != -16 )
            v5 = v15;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)v10 & 8) != 0 )
        {
          if ( v12 )
            return 3221225485LL;
          ++v7;
        }
        else
        {
          v12 = 0;
        }
        v10 += 8;
      }
      --v9;
    }
    while ( v9 >= 0 );
    v3 = v2[7];
  }
  v16 = v5 - v7;
  v17 = 296LL * v16;
  v60 = -1073741823;
  if ( v17 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v16 <= 1 )
  {
    v19 = 0;
    v20 = 32;
    v21 = 32;
  }
  else
  {
    v18 = 8LL * (v16 - 1);
    if ( v18 > 0xFFFFFFFF )
      return 2147483653LL;
    v19 = 8 * (v16 - 1);
    v20 = v18 + 32;
    v21 = v19 + 32;
    if ( v19 + 32 < v19 )
      return 2147483653LL;
  }
  if ( v21 < v19 )
    return 2147483653LL;
  v22 = v3 * (unsigned __int64)v20;
  if ( v22 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v3 > 1 )
  {
    v26 = 8LL * (v3 - 1);
    if ( v26 > 0xFFFFFFFF )
      return 2147483653LL;
    v23 = 8 * (v3 - 1);
    v24 = v26 + 48;
    v25 = v26 + 48;
    if ( v23 + 48 < v23 )
      return 2147483653LL;
  }
  else
  {
    v23 = 0;
    v24 = 48;
    v25 = 48;
  }
  if ( v25 < v23 )
    return 2147483653LL;
  v27 = v24 + v22;
  if ( v24 + (unsigned int)v22 < v24 || v27 + (unsigned int)v17 < v27 )
    return 2147483653LL;
  v28 = v27 + v17;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, v27 + (unsigned int)v17, 538996816LL);
  v30 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, v28);
  v62 = (__int64)v30 + v24;
  memset((void *)v62, 0, (unsigned int)v22);
  v64 = (char *)((unsigned int)v22 + v62);
  memset(v64, 0, (unsigned int)v17);
  v31 = v2;
  v32 = v30 + 5;
  v61 = v30 + 5;
  v33 = v2[1];
  if ( v33 == -1 )
    v33 = 1;
  v34 = v2[2];
  v30[2] = 0LL;
  v70 = v34;
  v30[1] = a1;
  *((_DWORD *)v30 + 1) = v34;
  v57 = v33;
  *((_DWORD *)v30 + 8) = v3;
  *(_DWORD *)v30 = v33;
  memset(v30 + 5, 0, 8LL * v3);
  v59 = v3 - 1;
  v35 = 0;
  if ( (int)(v3 - 1) < 0 )
  {
LABEL_86:
    v54 = v60;
    sub_14082045C(v30);
    return v54;
  }
  v36 = v57;
  do
  {
    v37 = v62;
    v66 = v32;
    v38 = (int *)v62;
    v39 = v4 + 2;
    v63 = v35;
    v40 = v4[1];
    v41 = (_QWORD *)(v62 + 24);
    *v61 = v62;
    *(_DWORD *)(v62 + 16) = v35;
    v4 = &v39[8 * v40];
    ++v35;
    *(_QWORD *)(v62 + 8) = v30;
    *(_DWORD *)(v62 + 20) = 0;
    v62 += 24LL;
    ++v61;
    if ( *((_BYTE *)v39 + 1) == 0x80 )
    {
      v42 = (int *)(v39 + 2);
      v39 += 8;
      v43 = *v42;
    }
    else
    {
      v43 = 12288;
    }
    *v38 = v43;
    v44 = v41;
    for ( i = 0; ; i = v58 )
    {
      while ( 1 )
      {
        if ( v39 >= v4 )
        {
          v32 = v61;
          goto LABEL_53;
        }
        if ( *((_BYTE *)v39 + 1) != 0xF0 )
          break;
        v36 = v39[2];
        if ( v36 == -1 )
          v36 = 1;
        v70 = v39[3];
LABEL_79:
        v39 += 8;
      }
      ++*(_DWORD *)(v37 + 20);
      v46 = v64;
      v47 = v64;
      *v44 = v64;
      v64 += 296;
      v65 = v44 + 1;
      *((_DWORD *)v47 + 6) = i;
      *((_DWORD *)v47 + 1) = v70;
      *((_QWORD *)v47 + 2) = v37;
      *((_QWORD *)v47 + 4) = v47;
      *((_DWORD *)v47 + 69) = 0;
      *((_QWORD *)v47 + 35) = 0LL;
      *(_DWORD *)v47 = v36;
      v48 = *((_BYTE *)v39 + 1);
      v58 = i + 1;
      v49 = v48 == 0;
      if ( v48 < 0 || (v50 = 1, v49) )
        v50 = 0;
      v46[8] = v50;
      ++v41;
      *((_QWORD *)v46 + 6) = v46 + 40;
      *((_QWORD *)v46 + 5) = v46 + 40;
      *((_DWORD *)v46 + 14) = 0;
      *((_QWORD *)v46 + 8) = v39;
      *((_QWORD *)v46 + 9) = *(_QWORD *)a1;
      *((_DWORD *)v46 + 20) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v46 + 11) = 0LL;
      *((_DWORD *)v46 + 24) = v36;
      *((_DWORD *)v46 + 25) = v31[3];
      v51 = v31[2];
      *((_DWORD *)v46 + 32) = -1;
      *((_DWORD *)v46 + 26) = v51;
      *((_QWORD *)v46 + 14) = v46 + 136;
      v62 = (__int64)v41;
      *((_DWORD *)v46 + 21) = 0;
      if ( !v46[8] )
      {
        ++i;
        v47[136] = *((_BYTE *)v39 + 1);
        v46[137] = *((_BYTE *)v39 + 2);
        *((_WORD *)v46 + 69) = *((_WORD *)v39 + 2);
        *((_DWORD *)v46 + 35) = v39[2];
        *((_DWORD *)v46 + 36) = v39[3];
        *((_DWORD *)v46 + 37) = v39[4];
        v56 = v69;
        if ( *((_BYTE *)v39 + 1) == 0x84 )
          v56 = 1;
        v69 = v56;
        v44 = v65;
        goto LABEL_79;
      }
      v47[136] = 8;
      v52 = (unsigned int)++*((_DWORD *)v46 + 14);
      v69 = 1;
      while ( 1 )
      {
        v39 += 8;
        if ( v39 >= v4 )
          break;
        if ( *((_BYTE *)v39 + 1) == 0x81 )
        {
          *((_QWORD *)v46 + 35) = v39;
          while ( v39 < v4 && *((_BYTE *)v39 + 1) == 0x81 )
          {
            ++*((_DWORD *)v46 + 69);
            v39 += 8;
          }
          break;
        }
        if ( (*(_BYTE *)v39 & 8) == 0 )
          break;
        v52 = (unsigned int)(v52 + 1);
        *((_DWORD *)v46 + 14) = v52;
      }
      v53 = sub_140821364(v46, v46 + 40, v52);
      if ( v53 < 0 )
        break;
      v41 = (_QWORD *)v62;
      v44 = v65;
    }
    v32 = v66;
    --*((_DWORD *)v30 + 8);
    v35 = v63;
    v61 = v66;
    sub_1408204B4(v37);
    v60 = v53;
LABEL_53:
    --v59;
  }
  while ( v59 >= 0 );
  if ( !v35 )
    goto LABEL_86;
  v54 = 0;
  if ( v69 )
    *a2 = v30;
  else
    sub_14082045C(v30);
  return v54;
}
