/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001EC0
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180002234 (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800017CC (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x180003F04 (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180003F94 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     memset_0 @ 0x180007BE6 (memset_0.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  volatile signed __int32 *v35; // rcx
  rsize_t v36; // rdi
  char *v37; // r15
  void *v38; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  void *v51; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  v4 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  v5 = *((_QWORD *)a2 + 3);
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
    v6 = 2 * v7 + 2;
  }
  else
  {
    v6 = 2LL;
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
    v4 = 2 * v33 + 2;
  }
  v34 = v27 + v4 + v30;
  v35 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  v36 = v6 + v9 + v12 + v15 + v18 + v21 + v24 + v34;
  if ( v35 && *v35 == 1 )
  {
    if ( *((_QWORD *)this + 20) >= v36 )
      goto LABEL_59;
    v37 = (char *)this + 152;
    goto LABEL_55;
  }
  v37 = (char *)this + 152;
  if ( v35 )
  {
LABEL_55:
    if ( _InterlockedExchangeAdd(v35, 0xFFFFFFFF) == 1 )
    {
      v38 = *(void **)v37;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v38);
    }
    *(_QWORD *)v37 = 0LL;
    *((_QWORD *)v37 + 1) = 0LL;
  }
  wil::details::shared_buffer::create((volatile signed __int32 **)this + 19, 0LL, v36);
LABEL_59:
  v40 = (*((_QWORD *)this + 19) + 4LL) & -(__int64)(*((_QWORD *)this + 19) != 0LL);
  v41 = (v40 + *((_QWORD *)this + 20)) & -(__int64)(v40 != 0);
  if ( v40 )
  {
    v42 = wil::details::WriteResultString<wchar_t const *>(v40, v41, *((_QWORD *)a2 + 3), (char *)this + 24);
    v43 = wil::details::WriteResultString<char const *>(v42, v41, *((_QWORD *)a2 + 5), (char *)this + 40);
    v44 = wil::details::WriteResultString<char const *>(v43, v41, *((_QWORD *)a2 + 6), (char *)this + 48);
    v45 = wil::details::WriteResultString<char const *>(v44, v41, *((_QWORD *)a2 + 7), (char *)this + 56);
    v46 = wil::details::WriteResultString<char const *>(v45, v41, *((_QWORD *)a2 + 9), (char *)this + 72);
    v47 = wil::details::WriteResultString<char const *>(v46, v41, *((_QWORD *)a2 + 16), (char *)this + 128);
    v48 = wil::details::WriteResultString<char const *>(v47, v41, *((_QWORD *)a2 + 14), (char *)this + 112);
    v49 = wil::details::WriteResultString<wchar_t const *>(v48, v41, *((_QWORD *)a2 + 15), (char *)this + 120);
    v50 = wil::details::WriteResultString<char const *>(v49, v41, *((_QWORD *)a2 + 11), (char *)this + 88);
    v51 = (void *)wil::details::WriteResultString<wchar_t const *>(v50, v41, *((_QWORD *)a2 + 12), (char *)this + 96);
    memset_0(v51, 0, v41 - (_QWORD)v51);
  }
}
