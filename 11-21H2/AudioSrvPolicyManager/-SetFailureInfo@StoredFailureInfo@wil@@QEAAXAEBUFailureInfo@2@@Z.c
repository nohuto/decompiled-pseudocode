/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180006C4C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180004C3C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180004BB4 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800078FC (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     memcpy_s @ 0x180007AFC (memcpy_s.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
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
  char *v40; // rcx
  char *v41; // rdi
  char *v42; // rax
  _BYTE *v43; // r8
  char *v44; // rbx
  char **v45; // r15
  __int64 v46; // r14
  rsize_t v47; // r14
  _BYTE *v48; // r8
  char **v49; // r15
  __int64 v50; // r14
  rsize_t v51; // r14
  _BYTE *v52; // r8
  char **v53; // r15
  __int64 v54; // r14
  rsize_t v55; // r14
  _BYTE *v56; // r8
  char **v57; // r15
  __int64 v58; // r14
  rsize_t v59; // r14
  _BYTE *v60; // r8
  char **v61; // r15
  __int64 v62; // r14
  rsize_t v63; // r14
  _BYTE *v64; // r8
  char **v65; // r15
  __int64 v66; // r14
  rsize_t v67; // r14
  char *v68; // rax
  _BYTE *v69; // r8
  char **v70; // r14
  char *v71; // rbx
  rsize_t v72; // rsi
  char *v73; // rax
  __int64 v74; // [rsp+50h] [rbp+8h]

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
    v74 = 2 * v7 + 2;
  }
  else
  {
    v74 = 2LL;
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
  v36 = v74 + v9 + v12 + v15 + v18 + v21 + v24 + v27 + v30 + v5;
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
    wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 152), 0LL, v36);
    v35 = (volatile signed __int32 *)*v34;
  }
  v39 = *((_QWORD *)this + 20);
  v40 = (char *)((unsigned __int64)(v35 + 1) & -(__int64)(v35 != 0LL));
  if ( v40 )
  {
    v41 = &v40[v39];
    v42 = wil::details::WriteResultString<unsigned short const *>(
            v40,
            &v40[v39],
            *((_WORD **)a2 + 3),
            (_QWORD *)this + 3);
    v43 = (_BYTE *)*((_QWORD *)a2 + 5);
    v44 = v42;
    v45 = (char **)((char *)this + 40);
    if ( v42 == v41 )
      goto LABEL_67;
    if ( !v43 )
      goto LABEL_67;
    if ( !*v43 )
      goto LABEL_67;
    v46 = -1LL;
    do
      ++v46;
    while ( v43[v46] );
    v47 = v46 + 1;
    if ( v41 - v42 >= v47 )
    {
      memcpy_s(v42, v41 - v42, v43, v47);
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v45 = v44;
      v44 += v47;
    }
    else
    {
LABEL_67:
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v45 = 0LL;
    }
    v48 = (_BYTE *)*((_QWORD *)a2 + 6);
    v49 = (char **)((char *)this + 48);
    if ( v44 == v41 )
      goto LABEL_78;
    if ( !v48 )
      goto LABEL_78;
    if ( !*v48 )
      goto LABEL_78;
    v50 = -1LL;
    do
      ++v50;
    while ( v48[v50] );
    v51 = v50 + 1;
    if ( v41 - v44 >= v51 )
    {
      memcpy_s(v44, v41 - v44, v48, v51);
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v49 = v44;
      v44 += v51;
    }
    else
    {
LABEL_78:
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v49 = 0LL;
    }
    v52 = (_BYTE *)*((_QWORD *)a2 + 7);
    v53 = (char **)((char *)this + 56);
    if ( v44 == v41 )
      goto LABEL_89;
    if ( !v52 )
      goto LABEL_89;
    if ( !*v52 )
      goto LABEL_89;
    v54 = -1LL;
    do
      ++v54;
    while ( v52[v54] );
    v55 = v54 + 1;
    if ( v41 - v44 >= v55 )
    {
      memcpy_s(v44, v41 - v44, v52, v55);
      if ( this != (wil::StoredFailureInfo *)-56LL )
        *v53 = v44;
      v44 += v55;
    }
    else
    {
LABEL_89:
      if ( this != (wil::StoredFailureInfo *)-56LL )
        *v53 = 0LL;
    }
    v56 = (_BYTE *)*((_QWORD *)a2 + 9);
    v57 = (char **)((char *)this + 72);
    if ( v44 == v41 )
      goto LABEL_100;
    if ( !v56 )
      goto LABEL_100;
    if ( !*v56 )
      goto LABEL_100;
    v58 = -1LL;
    do
      ++v58;
    while ( v56[v58] );
    v59 = v58 + 1;
    if ( v41 - v44 >= v59 )
    {
      memcpy_s(v44, v41 - v44, v56, v59);
      if ( this != (wil::StoredFailureInfo *)-72LL )
        *v57 = v44;
      v44 += v59;
    }
    else
    {
LABEL_100:
      if ( this != (wil::StoredFailureInfo *)-72LL )
        *v57 = 0LL;
    }
    v60 = (_BYTE *)*((_QWORD *)a2 + 16);
    v61 = (char **)((char *)this + 128);
    if ( v44 == v41 )
      goto LABEL_111;
    if ( !v60 )
      goto LABEL_111;
    if ( !*v60 )
      goto LABEL_111;
    v62 = -1LL;
    do
      ++v62;
    while ( v60[v62] );
    v63 = v62 + 1;
    if ( v41 - v44 >= v63 )
    {
      memcpy_s(v44, v41 - v44, v60, v63);
      if ( this != (wil::StoredFailureInfo *)-128LL )
        *v61 = v44;
      v44 += v63;
    }
    else
    {
LABEL_111:
      if ( this != (wil::StoredFailureInfo *)-128LL )
        *v61 = 0LL;
    }
    v64 = (_BYTE *)*((_QWORD *)a2 + 14);
    v65 = (char **)((char *)this + 112);
    if ( v44 == v41 )
      goto LABEL_122;
    if ( !v64 )
      goto LABEL_122;
    if ( !*v64 )
      goto LABEL_122;
    v66 = -1LL;
    do
      ++v66;
    while ( v64[v66] );
    v67 = v66 + 1;
    if ( v41 - v44 >= v67 )
    {
      memcpy_s(v44, v41 - v44, v64, v67);
      if ( this != (wil::StoredFailureInfo *)-112LL )
        *v65 = v44;
      v44 += v67;
    }
    else
    {
LABEL_122:
      if ( this != (wil::StoredFailureInfo *)-112LL )
        *v65 = 0LL;
    }
    v68 = wil::details::WriteResultString<unsigned short const *>(v44, v41, *((_WORD **)a2 + 15), (_QWORD *)this + 15);
    v69 = (_BYTE *)*((_QWORD *)a2 + 11);
    v70 = (char **)((char *)this + 88);
    v71 = v68;
    if ( v68 == v41 || !v69 || !*v69 )
      goto LABEL_132;
    do
      ++v3;
    while ( v69[v3] );
    v72 = v3 + 1;
    if ( v41 - v68 >= v72 )
    {
      memcpy_s(v68, v41 - v68, v69, v72);
      if ( this != (wil::StoredFailureInfo *)-88LL )
        *v70 = v71;
      v71 += v72;
    }
    else
    {
LABEL_132:
      if ( this != (wil::StoredFailureInfo *)-88LL )
        *v70 = 0LL;
    }
    v73 = wil::details::WriteResultString<unsigned short const *>(v71, v41, *((_WORD **)a2 + 12), (_QWORD *)this + 12);
    memset_0(v73, 0, v41 - v73);
  }
}
