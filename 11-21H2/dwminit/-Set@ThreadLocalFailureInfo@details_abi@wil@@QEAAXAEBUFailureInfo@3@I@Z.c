/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18000C8D8
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000CC74 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memset_0 @ 0x180002628 (memset_0.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000B620 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s @ 0x18000DED4 (memcpy_s.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // r15
  char **v4; // r12
  char **v5; // r14
  __int64 v7; // rbp
  const struct wil::FailureInfo *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  LPVOID v19; // r13
  void *v20; // rbx
  HANDLE ProcessHeap; // rax
  char *v22; // rbx
  rsize_t v23; // rdx
  _BYTE *v24; // r8
  char *v25; // rsi
  __int64 v26; // rdi
  rsize_t v27; // rdi
  _BYTE *v28; // r8
  __int64 v29; // rdi
  rsize_t v30; // rdi
  _WORD *v31; // r8
  unsigned __int64 v32; // rdi

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 16);
  v4 = (char **)((char *)this + 32);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v5 = (char **)((char *)this + 56);
  *((_QWORD *)this + 2) = 0LL;
  v7 = -1LL;
  v8 = a2;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 32);
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 7) = 0LL;
  v9 = *((_QWORD *)a2 + 7);
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
  v15 = *((_QWORD *)v8 + 3);
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
  if ( !*((_QWORD *)this + 8) || *((_QWORD *)this + 9) < v18 )
  {
    v19 = wil::details::ProcessHeapAlloc(8u, v10 + v16 + v13);
    if ( v19 )
    {
      v20 = (void *)*((_QWORD *)this + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
      *((_QWORD *)this + 8) = v19;
      *((_QWORD *)this + 9) = v18;
    }
    v8 = a2;
  }
  v22 = (char *)*((_QWORD *)this + 8);
  if ( v22 )
  {
    v23 = *((_QWORD *)this + 9);
    v24 = (_BYTE *)*((_QWORD *)v8 + 7);
    v25 = &v22[v23];
    if ( v22 == &v22[v23] )
      goto LABEL_31;
    if ( !v24 )
      goto LABEL_31;
    if ( !*v24 )
      goto LABEL_31;
    v26 = -1LL;
    do
      ++v26;
    while ( v24[v26] );
    v27 = v26 + 1;
    if ( v23 >= v27 )
    {
      memcpy_s(v22, v23, v24, v27);
      if ( v3 )
        *v3 = v22;
      v22 += v27;
    }
    else
    {
LABEL_31:
      if ( v3 )
        *v3 = 0LL;
    }
    v28 = (_BYTE *)*((_QWORD *)v8 + 16);
    if ( v22 == v25 )
      goto LABEL_42;
    if ( !v28 )
      goto LABEL_42;
    if ( !*v28 )
      goto LABEL_42;
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
    if ( v25 - v22 >= v30 )
    {
      memcpy_s(v22, v25 - v22, v28, v30);
      if ( v4 )
        *v4 = v22;
      v22 += v30;
    }
    else
    {
LABEL_42:
      if ( v4 )
        *v4 = 0LL;
    }
    v31 = (_WORD *)*((_QWORD *)v8 + 3);
    if ( v22 == v25 || !v31 || !*v31 )
      goto LABEL_52;
    do
      ++v7;
    while ( v31[v7] );
    v32 = 2 * v7 + 2;
    if ( v25 - v22 >= v32 )
    {
      memcpy_s(v22, v25 - v22, v31, 2 * v7 + 2);
      if ( v5 )
        *v5 = v22;
      v22 += v32;
    }
    else
    {
LABEL_52:
      if ( v5 )
        *v5 = 0LL;
    }
    memset_0(v22, 0, v25 - v22);
  }
}
