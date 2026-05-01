/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180003DBC
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000409C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001930 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001F10 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180008EB0 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r15
  __int64 v6; // rsi
  const struct wil::FailureInfo *v7; // r13
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  rsize_t *v19; // rdi
  LPVOID v20; // r13
  void *v21; // rbx
  HANDLE ProcessHeap; // rax
  char *v23; // rbx
  rsize_t v24; // rdx
  _BYTE *v25; // r8
  char *v26; // rbp
  __int64 v27; // rdi
  rsize_t v28; // rdi
  _BYTE *v29; // r8
  rsize_t v30; // rsi
  void *v31; // rax
  char *v32; // [rsp+60h] [rbp+8h]

  *((_DWORD *)this + 1) = a3;
  v3 = (_QWORD *)((char *)this + 16);
  v4 = (_QWORD *)((char *)this + 32);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  v6 = -1LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 32);
  v7 = a2;
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 18);
  v8 = (char *)this + 56;
  *((_QWORD *)this + 7) = 0LL;
  v9 = *((_QWORD *)a2 + 7);
  v32 = v8;
  if ( v9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v9 + v11) );
    v10 = v11 + 1;
  }
  else
  {
    v10 = 1LL;
  }
  v12 = *((_QWORD *)a2 + 16);
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v12 + v14) );
    v13 = v14 + 1;
  }
  else
  {
    v13 = 1LL;
  }
  v15 = *((_QWORD *)v7 + 3);
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v15 + 2 * v17) );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v18 = v10 + v16 + v13;
  v19 = (rsize_t *)((char *)this + 72);
  if ( !*((_QWORD *)this + 8) || *v19 < v18 )
  {
    v20 = wil::details::ProcessHeapAlloc(8u, v10 + v16 + v13);
    if ( v20 )
    {
      v21 = (void *)*((_QWORD *)this + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v21);
      *((_QWORD *)this + 8) = v20;
      *v19 = v18;
    }
    v7 = a2;
  }
  v23 = (char *)*((_QWORD *)this + 8);
  if ( v23 )
  {
    v24 = *v19;
    v25 = (_BYTE *)*((_QWORD *)v7 + 7);
    v26 = &v23[*v19];
    if ( v23 == v26 )
      goto LABEL_31;
    if ( !v25 )
      goto LABEL_31;
    if ( !*v25 )
      goto LABEL_31;
    v27 = -1LL;
    do
      ++v27;
    while ( v25[v27] );
    v28 = v27 + 1;
    if ( v24 >= v28 )
    {
      memcpy_s(v23, v24, v25, v28);
      if ( v3 )
        *v3 = v23;
      v23 += v28;
    }
    else
    {
LABEL_31:
      if ( v3 )
        *v3 = 0LL;
    }
    v29 = (_BYTE *)*((_QWORD *)v7 + 16);
    if ( v23 == v26 || !v29 || !*v29 )
      goto LABEL_41;
    do
      ++v6;
    while ( v29[v6] );
    v30 = v6 + 1;
    if ( v26 - v23 >= v30 )
    {
      memcpy_s(v23, v26 - v23, v29, v30);
      if ( v4 )
        *v4 = v23;
      v23 += v30;
    }
    else
    {
LABEL_41:
      if ( v4 )
        *v4 = 0LL;
    }
    v31 = (void *)wil::details::WriteResultString<unsigned short const *>(v23, v26, *((_QWORD *)v7 + 3), v32);
    memset_0(v31, 0, v26 - (_BYTE *)v31);
  }
}
