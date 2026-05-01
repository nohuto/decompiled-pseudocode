/*
 * XREFs of SdbpGetProcessHistory @ 0x1800963E8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1800A35BC (AslEnvVarQuery.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A69FC (RtlDownlevelGetNtSystemRoot.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(WCHAR *a1, const void *a2, void *a3)
{
  __int64 v3; // rbx
  const void *v4; // r13
  __int64 v5; // r14
  __int64 v7; // r15
  WCHAR *v8; // rdi
  __int64 NtSystemRoot; // rax
  WCHAR *v10; // rbp
  WCHAR *v11; // rsi
  WCHAR v12; // bx
  int v13; // r8d
  WCHAR *v14; // rdx
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  _WORD *Heap; // rdi
  _WORD *v20; // rsi
  _WORD *v22; // rcx
  _WORD *v23; // rdi
  _WORD *v24; // rdi
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  const void *v26; // [rsp+78h] [rbp+10h]
  void *Src; // [rsp+80h] [rbp+18h]

  Src = a3;
  v26 = a2;
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
        v10 = v8;
        v11 = (WCHAR *)L"__PROCESS_HISTORY";
        do
        {
          if ( !*v8 )
            break;
          v12 = RtlUpcaseUnicodeChar(*v11);
          if ( RtlUpcaseUnicodeChar(*v8) != v12 )
            break;
          ++v8;
          ++v11;
        }
        while ( v11 < L"" );
        v4 = v26;
        if ( v11 == L"" && *v8 == 61 )
        {
          v13 = 1;
LABEL_18:
          v14 = v8;
          if ( *v8 )
          {
            v15 = 0LL;
            do
            {
              if ( (__int64)(v15 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++v8;
              v15 += 2LL;
            }
            while ( *v8 );
          }
          if ( v13 )
          {
            v3 = v8 - (v14 + 1);
            goto LABEL_34;
          }
        }
        else
        {
          v13 = 0;
          while ( *v8 )
          {
            if ( *v8 == 61 && v8 != v10 )
              goto LABEL_18;
            ++v8;
          }
        }
        ++v8;
      }
      while ( *v8 );
    }
    v16 = -1073741568;
    v17 = (unsigned int)(v7 + v5 + 1);
  }
  else
  {
    NtSystemRoot = RtlDownlevelGetNtSystemRoot();
    do
      ++v3;
    while ( *(_WORD *)(NtSystemRoot + 2 * v3) );
LABEL_34:
    v16 = -1073741789;
    v17 = v3 + 1 + (unsigned int)(v7 + v5 + 2);
  }
  v18 = 2 * v17;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v17);
  v20 = Heap;
  if ( Heap )
  {
    *Heap = 0;
    if ( v16 == -1073741789 )
    {
      v25 = v18;
      if ( (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL, Heap, v18 >> 1, &v25) >= 0 )
      {
        v22 = &Heap[v25];
        v23 = v22 - 1;
        if ( *(v22 - 1) != 59 )
        {
          v23 = &v20[v25];
          *v22 = 59;
        }
        Heap = v23 + 1;
      }
    }
    memmove_0(Heap, v4, 2LL * (unsigned int)v5);
    v24 = &Heap[(unsigned int)v5];
    memmove_0(v24, Src, 2LL * (unsigned int)v7);
    v24[(unsigned int)v7] = 0;
    return v20;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      2237,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
}
