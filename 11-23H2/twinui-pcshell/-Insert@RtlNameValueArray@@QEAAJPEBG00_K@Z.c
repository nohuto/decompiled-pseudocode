/*
 * XREFs of ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1800EE540
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18008D6E8 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x1800EE498 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z.c)
 * Callees:
 *     wcscpy_s @ 0x1801C74D0 (wcscpy_s.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall RtlNameValueArray::Insert(
        RtlNameValueArray *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  rsize_t v10; // rbx
  rsize_t v11; // rsi
  wchar_t *Heap; // rax
  wchar_t *v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  wchar_t **v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  void *v21; // r9
  unsigned __int64 v22; // rcx
  __int64 result; // rax
  unsigned __int64 v24; // rdx
  wchar_t **v25; // rcx
  __int64 v26; // rsi
  unsigned __int64 v27; // rsi
  unsigned __int128 v28; // rax
  size_t v29; // r15
  void *v30; // r8
  PVOID v31; // rcx
  PVOID v32; // rax
  PVOID v33; // rbp
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  unsigned __int64 v36; // rsi
  unsigned __int128 v37; // rax
  size_t v38; // r14
  void *v39; // r8
  PVOID v40; // rcx
  PVOID v41; // rax
  PVOID v42; // rbp

  v5 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v10 = v7 + 1;
  do
    ++v5;
  while ( a4[v5] );
  v11 = v5 + 1;
  Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)this, 0, 2 * (v11 + v10));
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 2 * (v11 + v10));
  wcscpy_s(v13, v10, a3);
  wcscpy_s(&v13[v10], v11, a4);
  v14 = *((_QWORD *)this + 2);
  v15 = *((_QWORD *)this + 3);
  if ( a5 >= v14 )
  {
    if ( v14 >= v15 )
    {
      v24 = v14 + 1;
      if ( v14 + 1 <= v15 )
        return 3221225485LL;
      v26 = *((_QWORD *)this + 4) - 1LL;
      if ( v26 + v24 < v24 )
        return 3221225621LL;
      v27 = (v26 + v24) & ~v26;
      if ( is_mul_ok(v15, *((_QWORD *)this + 1))
        && (v28 = v27 * (unsigned __int128)*((unsigned __int64 *)this + 1),
            v29 = v27 * *((_QWORD *)this + 1),
            is_mul_ok(v27, *((_QWORD *)this + 1))) )
      {
        v30 = (void *)*((_QWORD *)this + 5);
        v31 = *(PVOID *)this;
        if ( v30 )
        {
          v33 = RtlReAllocateHeap(v31, DWORD2(v28), v30, v27 * *((_QWORD *)this + 1));
        }
        else
        {
          v32 = RtlAllocateHeap(v31, DWORD2(v28), v27 * *((_QWORD *)this + 1));
          v33 = v32;
          if ( v32 )
            memset_0(v32, 0, v29);
        }
        if ( v33 )
        {
          *((_QWORD *)this + 5) = v33;
          result = 0LL;
          *((_QWORD *)this + 3) = v27;
        }
        else
        {
          result = 3221225495LL;
        }
      }
      else
      {
        result = 3221225621LL;
      }
      if ( (_DWORD)result )
        return result;
    }
    if ( is_mul_ok(*((_QWORD *)this + 1), v14) )
    {
      v25 = (wchar_t **)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * v14);
      if ( (unsigned __int64)v25 >= *((_QWORD *)this + 5) )
      {
        *v25 = v13;
        goto LABEL_14;
      }
    }
    return 3221225621LL;
  }
  if ( v14 < v15 )
    goto LABEL_8;
  v34 = v14 + 1;
  if ( v34 <= v15 )
    return 3221225485LL;
  v35 = *((_QWORD *)this + 4) - 1LL;
  if ( v35 + v34 < v34 )
    return 3221225621LL;
  v36 = (v35 + v34) & ~v35;
  if ( is_mul_ok(v15, *((_QWORD *)this + 1))
    && (v37 = v36 * (unsigned __int128)*((unsigned __int64 *)this + 1),
        v38 = v36 * *((_QWORD *)this + 1),
        is_mul_ok(v36, *((_QWORD *)this + 1))) )
  {
    v39 = (void *)*((_QWORD *)this + 5);
    v40 = *(PVOID *)this;
    if ( v39 )
    {
      v42 = RtlReAllocateHeap(v40, DWORD2(v37), v39, v36 * *((_QWORD *)this + 1));
    }
    else
    {
      v41 = RtlAllocateHeap(v40, DWORD2(v37), v36 * *((_QWORD *)this + 1));
      v42 = v41;
      if ( v41 )
        memset_0(v41, 0, v38);
    }
    if ( v42 )
    {
      *((_QWORD *)this + 5) = v42;
      result = 0LL;
      *((_QWORD *)this + 3) = v36;
    }
    else
    {
      result = 3221225495LL;
    }
  }
  else
  {
    result = 3221225621LL;
  }
  if ( !(_DWORD)result )
  {
LABEL_8:
    v16 = *((_QWORD *)this + 1) * a5;
    if ( is_mul_ok(*((_QWORD *)this + 1), a5) )
    {
      v17 = *((_QWORD *)this + 5);
      v18 = (wchar_t **)(v17 + v16);
      if ( v17 + v16 >= v17 )
      {
        v19 = *((_QWORD *)this + 1) * (a5 + 1);
        if ( is_mul_ok(*((_QWORD *)this + 1), a5 + 1) )
        {
          v20 = *((_QWORD *)this + 5);
          v21 = (void *)(v20 + v19);
          if ( v20 + v19 >= v20 )
          {
            v22 = *((_QWORD *)this + 2) - a5;
            if ( is_mul_ok(v22, *((_QWORD *)this + 1)) )
            {
              memmove_0(v21, v18, v22 * *((_QWORD *)this + 1));
              *v18 = v13;
LABEL_14:
              ++*((_QWORD *)this + 2);
              return 0LL;
            }
          }
        }
      }
    }
    return 3221225621LL;
  }
  return result;
}
