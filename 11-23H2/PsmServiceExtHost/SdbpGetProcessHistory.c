/*
 * XREFs of SdbpGetProcessHistory @ 0x1800911E8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1800967B8 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     memmove_0 @ 0x1800534AE (memmove_0.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1800A040C (AslEnvVarQuery.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A1174 (RtlDownlevelGetNtSystemRoot.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(WCHAR *a1, const void *a2, void *a3)
{
  __int64 v3; // rbx
  const void *v4; // r13
  __int64 v5; // rbp
  __int64 v7; // r15
  WCHAR *v8; // rdi
  __int64 NtSystemRoot; // rax
  __int64 v10; // rbx
  WCHAR *v11; // r14
  WCHAR *v12; // rsi
  WCHAR v13; // bx
  int v14; // r8d
  WCHAR *v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  _WORD *Heap; // rdi
  _WORD *v21; // r14
  _WORD *result; // rax
  _WORD *v23; // rcx
  _WORD *v24; // rdi
  _WORD *v25; // rdi
  unsigned __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  const void *v27; // [rsp+78h] [rbp+10h]
  void *Src; // [rsp+80h] [rbp+18h]

  Src = a3;
  v27 = a2;
  v3 = -1LL;
  v4 = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)a2 + v5) );
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)a3 + v7) );
  v8 = a1;
  if ( _wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( a1 && *a1 )
    {
      do
      {
        v11 = v8;
        v12 = (WCHAR *)L"__PROCESS_HISTORY";
        do
        {
          if ( !*v8 )
            break;
          v13 = RtlUpcaseUnicodeChar(*v12);
          if ( RtlUpcaseUnicodeChar(*v8) != v13 )
            break;
          ++v8;
          ++v12;
        }
        while ( v12 < L"" );
        v4 = v27;
        if ( v12 == L"" && *v8 == 61 )
        {
          v14 = 1;
LABEL_18:
          v15 = v8;
          if ( *v8 )
          {
            v16 = 0LL;
            do
            {
              if ( (__int64)(v16 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++v8;
              v16 += 2LL;
            }
            while ( *v8 );
          }
          if ( v14 )
          {
            v10 = v8 - (v15 + 1) + 1;
            goto LABEL_24;
          }
        }
        else
        {
          v14 = 0;
          while ( *v8 )
          {
            if ( *v8 == 61 && v8 != v11 )
              goto LABEL_18;
            ++v8;
          }
        }
        ++v8;
      }
      while ( *v8 );
    }
    v17 = -1073741568;
    v18 = (unsigned int)(v7 + v5 + 1);
  }
  else
  {
    NtSystemRoot = RtlDownlevelGetNtSystemRoot();
    do
      ++v3;
    while ( *(_WORD *)(NtSystemRoot + 2 * v3) );
    v10 = v3 + 1;
LABEL_24:
    v17 = -1073741789;
    v18 = v10 + (unsigned int)(v7 + v5 + 2);
  }
  v19 = 2 * v18;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v18);
  v21 = Heap;
  if ( Heap )
  {
    *Heap = 0;
    if ( v17 == -1073741789 )
    {
      v26 = v19;
      if ( (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL, Heap, v19 >> 1, &v26) >= 0 )
      {
        v23 = &Heap[v26];
        v24 = v23 - 1;
        if ( *(v23 - 1) != 59 )
        {
          v24 = &v21[v26];
          *v23 = 59;
        }
        Heap = v24 + 1;
      }
    }
    memmove_0(Heap, v4, 2LL * (unsigned int)v5);
    v25 = &Heap[(unsigned int)v5];
    memmove_0(v25, Src, 2LL * (unsigned int)v7);
    result = v21;
    v25[(unsigned int)v7] = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      2373,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
  return result;
}
