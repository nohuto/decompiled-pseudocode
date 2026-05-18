/*
 * XREFs of sub_18000F6D0 @ 0x18000F6D0
 * Callers:
 *     sub_18000D4AC @ 0x18000D4AC (sub_18000D4AC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000D3DC @ 0x18000D3DC (sub_18000D3DC.c)
 *     sub_1800103F0 @ 0x1800103F0 (sub_1800103F0.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void *__fastcall sub_18000F6D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  void **v34; // rdi
  volatile signed __int32 *v35; // rcx
  unsigned __int64 v36; // r14
  void *v37; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v39; // rdx
  void *result; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rax
  _BYTE *v44; // r8
  __int64 v45; // rbx
  __int64 *v46; // r15
  __int64 v47; // r14
  unsigned __int64 v48; // r14
  _BYTE *v49; // r8
  __int64 *v50; // r15
  __int64 v51; // r14
  unsigned __int64 v52; // r14
  _BYTE *v53; // r8
  __int64 *v54; // r15
  __int64 v55; // r14
  unsigned __int64 v56; // r14
  _BYTE *v57; // r8
  __int64 *v58; // r15
  __int64 v59; // r14
  unsigned __int64 v60; // r14
  _BYTE *v61; // r8
  __int64 *v62; // r15
  __int64 v63; // r14
  unsigned __int64 v64; // r14
  _BYTE *v65; // r8
  __int64 *v66; // r15
  __int64 v67; // r14
  unsigned __int64 v68; // r14
  __int64 v69; // rax
  _BYTE *v70; // r8
  __int64 *v71; // r14
  __int64 v72; // rbx
  unsigned __int64 v73; // rsi
  void *v74; // rax
  __int64 v75; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = 2LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v75 = 2 * v7 + 2;
  }
  else
  {
    v75 = 2LL;
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *(_QWORD *)(a2 + 48);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *(_QWORD *)(a2 + 72);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *(_QWORD *)(a2 + 128);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *(_QWORD *)(a2 + 112);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *(_QWORD *)(a2 + 120);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *(_QWORD *)(a2 + 88);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *(_QWORD *)(a2 + 96);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = (void **)(a1 + 152);
  v35 = *(volatile signed __int32 **)(a1 + 152);
  v36 = v75 + v9 + v12 + v15 + v18 + v21 + v24 + v27 + v30 + v5;
  if ( !v35 )
    goto LABEL_56;
  if ( *v35 != 1 || *(_QWORD *)(a1 + 160) < v36 )
  {
    if ( !_InterlockedDecrement(v35) )
    {
      v37 = *v34;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v37);
    }
    *v34 = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
LABEL_56:
    sub_1800103F0(a1 + 152, 0LL, v36);
    v35 = (volatile signed __int32 *)*v34;
  }
  v39 = *(_QWORD *)(a1 + 160);
  result = (void *)(v35 + 1);
  v41 = (unsigned __int64)(v35 + 1) & -(__int64)(v35 != 0LL);
  if ( v41 )
  {
    v42 = v41 + v39;
    v43 = sub_18000D3DC(v41, v41 + v39, *(_WORD **)(a2 + 24), (_QWORD *)(a1 + 24));
    v44 = *(_BYTE **)(a2 + 40);
    v45 = v43;
    v46 = (__int64 *)(a1 + 40);
    if ( v43 == v42 )
      goto LABEL_67;
    if ( !v44 )
      goto LABEL_67;
    if ( !*v44 )
      goto LABEL_67;
    v47 = -1LL;
    do
      ++v47;
    while ( v44[v47] );
    v48 = v47 + 1;
    if ( v42 - v43 >= v48 )
    {
      sub_18001060C(v43, v42 - v43, v44, v48);
      if ( a1 != -40 )
        *v46 = v45;
      v45 += v48;
    }
    else
    {
LABEL_67:
      if ( a1 != -40 )
        *v46 = 0LL;
    }
    v49 = *(_BYTE **)(a2 + 48);
    v50 = (__int64 *)(a1 + 48);
    if ( v45 == v42 )
      goto LABEL_78;
    if ( !v49 )
      goto LABEL_78;
    if ( !*v49 )
      goto LABEL_78;
    v51 = -1LL;
    do
      ++v51;
    while ( v49[v51] );
    v52 = v51 + 1;
    if ( v42 - v45 >= v52 )
    {
      sub_18001060C(v45, v42 - v45, v49, v52);
      if ( a1 != -48 )
        *v50 = v45;
      v45 += v52;
    }
    else
    {
LABEL_78:
      if ( a1 != -48 )
        *v50 = 0LL;
    }
    v53 = *(_BYTE **)(a2 + 56);
    v54 = (__int64 *)(a1 + 56);
    if ( v45 == v42 )
      goto LABEL_89;
    if ( !v53 )
      goto LABEL_89;
    if ( !*v53 )
      goto LABEL_89;
    v55 = -1LL;
    do
      ++v55;
    while ( v53[v55] );
    v56 = v55 + 1;
    if ( v42 - v45 >= v56 )
    {
      sub_18001060C(v45, v42 - v45, v53, v56);
      if ( a1 != -56 )
        *v54 = v45;
      v45 += v56;
    }
    else
    {
LABEL_89:
      if ( a1 != -56 )
        *v54 = 0LL;
    }
    v57 = *(_BYTE **)(a2 + 72);
    v58 = (__int64 *)(a1 + 72);
    if ( v45 == v42 )
      goto LABEL_100;
    if ( !v57 )
      goto LABEL_100;
    if ( !*v57 )
      goto LABEL_100;
    v59 = -1LL;
    do
      ++v59;
    while ( v57[v59] );
    v60 = v59 + 1;
    if ( v42 - v45 >= v60 )
    {
      sub_18001060C(v45, v42 - v45, v57, v60);
      if ( a1 != -72 )
        *v58 = v45;
      v45 += v60;
    }
    else
    {
LABEL_100:
      if ( a1 != -72 )
        *v58 = 0LL;
    }
    v61 = *(_BYTE **)(a2 + 128);
    v62 = (__int64 *)(a1 + 128);
    if ( v45 == v42 )
      goto LABEL_111;
    if ( !v61 )
      goto LABEL_111;
    if ( !*v61 )
      goto LABEL_111;
    v63 = -1LL;
    do
      ++v63;
    while ( v61[v63] );
    v64 = v63 + 1;
    if ( v42 - v45 >= v64 )
    {
      sub_18001060C(v45, v42 - v45, v61, v64);
      if ( a1 != -128 )
        *v62 = v45;
      v45 += v64;
    }
    else
    {
LABEL_111:
      if ( a1 != -128 )
        *v62 = 0LL;
    }
    v65 = *(_BYTE **)(a2 + 112);
    v66 = (__int64 *)(a1 + 112);
    if ( v45 == v42 )
      goto LABEL_122;
    if ( !v65 )
      goto LABEL_122;
    if ( !*v65 )
      goto LABEL_122;
    v67 = -1LL;
    do
      ++v67;
    while ( v65[v67] );
    v68 = v67 + 1;
    if ( v42 - v45 >= v68 )
    {
      sub_18001060C(v45, v42 - v45, v65, v68);
      if ( a1 != -112 )
        *v66 = v45;
      v45 += v68;
    }
    else
    {
LABEL_122:
      if ( a1 != -112 )
        *v66 = 0LL;
    }
    v69 = sub_18000D3DC(v45, v42, *(_WORD **)(a2 + 120), (_QWORD *)(a1 + 120));
    v70 = *(_BYTE **)(a2 + 88);
    v71 = (__int64 *)(a1 + 88);
    v72 = v69;
    if ( v69 == v42 || !v70 || !*v70 )
      goto LABEL_132;
    do
      ++v3;
    while ( v70[v3] );
    v73 = v3 + 1;
    if ( v42 - v69 >= v73 )
    {
      sub_18001060C(v69, v42 - v69, v70, v73);
      if ( a1 != -88 )
        *v71 = v72;
      v72 += v73;
    }
    else
    {
LABEL_132:
      if ( a1 != -88 )
        *v71 = 0LL;
    }
    v74 = (void *)sub_18000D3DC(v72, v42, *(_WORD **)(a2 + 96), (_QWORD *)(a1 + 96));
    return memset(v74, 0, v42 - (_QWORD)v74);
  }
  return result;
}
