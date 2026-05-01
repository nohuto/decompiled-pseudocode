/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180002718
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180002C54 (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001930 (memcpy_s.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180001F88 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180008EB0 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
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
  __int64 v24; // rdx
  __int64 v25; // rdx
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
  rsize_t v36; // r14
  void *v37; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  char *v41; // rax
  _BYTE *v42; // r8
  char *v43; // rbx
  char **v44; // r15
  __int64 v45; // r14
  rsize_t v46; // r14
  _BYTE *v47; // r8
  char **v48; // r15
  __int64 v49; // r14
  rsize_t v50; // r14
  _BYTE *v51; // r8
  char **v52; // r15
  __int64 v53; // r14
  rsize_t v54; // r14
  _BYTE *v55; // r8
  char **v56; // r15
  __int64 v57; // r14
  rsize_t v58; // r14
  _BYTE *v59; // r8
  char **v60; // r15
  __int64 v61; // r14
  rsize_t v62; // r14
  _BYTE *v63; // r8
  char **v64; // r15
  __int64 v65; // r14
  rsize_t v66; // r14
  char *v67; // rax
  _BYTE *v68; // r8
  _QWORD *v69; // r14
  char *v70; // rbx
  rsize_t v71; // rsi
  void *v72; // rax
  __int64 v73; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  *(_OWORD *)this = *(_OWORD *)a2;
  v5 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  v6 = *((_QWORD *)a2 + 3);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v73 = 2 * v7 + 2;
  }
  else
  {
    v73 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 5);
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
  v11 = *((_QWORD *)a2 + 6);
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
  v14 = *((_QWORD *)a2 + 7);
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
  v17 = *((_QWORD *)a2 + 9);
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
  v20 = *((_QWORD *)a2 + 16);
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
  v23 = *((_QWORD *)a2 + 14);
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
  v26 = *((_QWORD *)a2 + 15);
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
  v29 = *((_QWORD *)a2 + 11);
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
  v32 = *((_QWORD *)a2 + 12);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = (void **)((char *)this + 152);
  v35 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  v36 = v73 + v9 + v12 + v15 + v18 + v21 + v24 + v27 + v30 + v5;
  if ( !v35 )
    goto LABEL_56;
  if ( *v35 != 1 || *((_QWORD *)this + 20) < v36 )
  {
    if ( _InterlockedExchangeAdd(v35, 0xFFFFFFFF) == 1 )
    {
      v37 = *v34;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v37);
    }
    *v34 = 0LL;
    *((_QWORD *)this + 20) = 0LL;
LABEL_56:
    wil::details::shared_buffer::create((volatile signed __int32 **)this + 19, 0LL, v36);
  }
  v39 = ((unsigned __int64)*v34 + 4) & -(__int64)(*v34 != 0LL);
  v40 = (v39 + *((_QWORD *)this + 20)) & -(__int64)(v39 != 0);
  if ( v39 )
  {
    v41 = (char *)wil::details::WriteResultString<unsigned short const *>(
                    v39,
                    v40,
                    *((_QWORD *)a2 + 3),
                    (char *)this + 24);
    v42 = (_BYTE *)*((_QWORD *)a2 + 5);
    v43 = v41;
    v44 = (char **)((char *)this + 40);
    if ( v41 == (char *)v40 )
      goto LABEL_67;
    if ( !v42 )
      goto LABEL_67;
    if ( !*v42 )
      goto LABEL_67;
    v45 = -1LL;
    do
      ++v45;
    while ( v42[v45] );
    v46 = v45 + 1;
    if ( v40 - (__int64)v41 >= v46 )
    {
      memcpy_s(v41, v40 - (_QWORD)v41, v42, v46);
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v44 = v43;
      v43 += v46;
    }
    else
    {
LABEL_67:
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v44 = 0LL;
    }
    v47 = (_BYTE *)*((_QWORD *)a2 + 6);
    v48 = (char **)((char *)this + 48);
    if ( v43 == (char *)v40 )
      goto LABEL_78;
    if ( !v47 )
      goto LABEL_78;
    if ( !*v47 )
      goto LABEL_78;
    v49 = -1LL;
    do
      ++v49;
    while ( v47[v49] );
    v50 = v49 + 1;
    if ( v40 - (__int64)v43 >= v50 )
    {
      memcpy_s(v43, v40 - (_QWORD)v43, v47, v50);
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v48 = v43;
      v43 += v50;
    }
    else
    {
LABEL_78:
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v48 = 0LL;
    }
    v51 = (_BYTE *)*((_QWORD *)a2 + 7);
    v52 = (char **)((char *)this + 56);
    if ( v43 == (char *)v40 )
      goto LABEL_89;
    if ( !v51 )
      goto LABEL_89;
    if ( !*v51 )
      goto LABEL_89;
    v53 = -1LL;
    do
      ++v53;
    while ( v51[v53] );
    v54 = v53 + 1;
    if ( v40 - (__int64)v43 >= v54 )
    {
      memcpy_s(v43, v40 - (_QWORD)v43, v51, v54);
      if ( this != (wil::StoredFailureInfo *)-56LL )
        *v52 = v43;
      v43 += v54;
    }
    else
    {
LABEL_89:
      if ( this != (wil::StoredFailureInfo *)-56LL )
        *v52 = 0LL;
    }
    v55 = (_BYTE *)*((_QWORD *)a2 + 9);
    v56 = (char **)((char *)this + 72);
    if ( v43 == (char *)v40 )
      goto LABEL_100;
    if ( !v55 )
      goto LABEL_100;
    if ( !*v55 )
      goto LABEL_100;
    v57 = -1LL;
    do
      ++v57;
    while ( v55[v57] );
    v58 = v57 + 1;
    if ( v40 - (__int64)v43 >= v58 )
    {
      memcpy_s(v43, v40 - (_QWORD)v43, v55, v58);
      if ( this != (wil::StoredFailureInfo *)-72LL )
        *v56 = v43;
      v43 += v58;
    }
    else
    {
LABEL_100:
      if ( this != (wil::StoredFailureInfo *)-72LL )
        *v56 = 0LL;
    }
    v59 = (_BYTE *)*((_QWORD *)a2 + 16);
    v60 = (char **)((char *)this + 128);
    if ( v43 == (char *)v40 )
      goto LABEL_111;
    if ( !v59 )
      goto LABEL_111;
    if ( !*v59 )
      goto LABEL_111;
    v61 = -1LL;
    do
      ++v61;
    while ( v59[v61] );
    v62 = v61 + 1;
    if ( v40 - (__int64)v43 >= v62 )
    {
      memcpy_s(v43, v40 - (_QWORD)v43, v59, v62);
      if ( this != (wil::StoredFailureInfo *)-128LL )
        *v60 = v43;
      v43 += v62;
    }
    else
    {
LABEL_111:
      if ( this != (wil::StoredFailureInfo *)-128LL )
        *v60 = 0LL;
    }
    v63 = (_BYTE *)*((_QWORD *)a2 + 14);
    v64 = (char **)((char *)this + 112);
    if ( v43 == (char *)v40 )
      goto LABEL_122;
    if ( !v63 )
      goto LABEL_122;
    if ( !*v63 )
      goto LABEL_122;
    v65 = -1LL;
    do
      ++v65;
    while ( v63[v65] );
    v66 = v65 + 1;
    if ( v40 - (__int64)v43 >= v66 )
    {
      memcpy_s(v43, v40 - (_QWORD)v43, v63, v66);
      if ( this != (wil::StoredFailureInfo *)-112LL )
        *v64 = v43;
      v43 += v66;
    }
    else
    {
LABEL_122:
      if ( this != (wil::StoredFailureInfo *)-112LL )
        *v64 = 0LL;
    }
    v67 = (char *)wil::details::WriteResultString<unsigned short const *>(
                    v43,
                    v40,
                    *((_QWORD *)a2 + 15),
                    (char *)this + 120);
    v68 = (_BYTE *)*((_QWORD *)a2 + 11);
    v69 = (_QWORD *)((char *)this + 88);
    v70 = v67;
    if ( v67 == (char *)v40 || !v68 || !*v68 )
      goto LABEL_132;
    do
      ++v3;
    while ( v68[v3] );
    v71 = v3 + 1;
    if ( v40 - (__int64)v67 >= v71 )
    {
      memcpy_s(v67, v40 - (_QWORD)v67, v68, v71);
      if ( this != (wil::StoredFailureInfo *)-88LL )
        *v69 = v70;
      v70 += v71;
    }
    else
    {
LABEL_132:
      if ( this != (wil::StoredFailureInfo *)-88LL )
        *v69 = 0LL;
    }
    v72 = (void *)wil::details::WriteResultString<unsigned short const *>(
                    v70,
                    v40,
                    *((_QWORD *)a2 + 12),
                    (char *)this + 96);
    memset_0(v72, 0, v40 - (_QWORD)v72);
  }
}
