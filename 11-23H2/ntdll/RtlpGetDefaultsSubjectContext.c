/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x180068BBC
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068DF8 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A34C0 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        __int64 a1,
        char a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 *v9; // r12
  __int64 *v11; // r14
  __int64 *v14; // rax
  struct _PEB *v15; // rax
  __int64 ProcessHeap; // rdi
  __int64 Heap; // rax
  int DefaultTrustSubjectContext; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v23; // rsi
  __int64 *v24; // rsi
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-14h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-10h] BYREF
  char v31; // [rsp+90h] [rbp+48h]
  unsigned int v33; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+60h] BYREF

  v9 = a5;
  v11 = a9;
  Handle[0] = 0LL;
  *a6 = 0LL;
  v14 = a7;
  v31 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *v14 = 0LL;
  v15 = NtCurrentPeb();
  *v9 = 0LL;
  *v11 = 0LL;
  ProcessHeap = (__int64)v15->ProcessHeap;
  if ( a1 )
  {
    v34 = 76;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 76LL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 4LL, Heap, v34, &v34);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    v28 = 84;
    v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 84LL);
    *a7 = v19;
    if ( !v19 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 25LL, v19, v28, &v28);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, *a4, 0LL, &a5);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a5);
    *a4 = v20;
    if ( !v20 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, v20, (unsigned int)a5, &a5);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, *v9, 0LL, &a9);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v21 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a9);
    *v9 = v21;
    if ( !v21 )
    {
LABEL_15:
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_16;
    }
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, v21, (unsigned int)a9, &a9);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(a1, a8);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, Handle);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v31 = 0;
    goto LABEL_16;
  }
  v31 = 1;
  v29 = 76;
  v26 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 76LL);
  *a6 = v26;
  if ( !v26 )
    goto LABEL_15;
  DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 4LL, v26, v29, &v29);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, *v11, 0LL, &v33);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      v27 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v33);
      *v11 = v27;
      if ( v27 )
      {
        DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, v27, v33, &v33);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(Handle[0]);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  v23 = a7;
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *v23 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *v9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v9);
    *v9 = 0LL;
  }
  v24 = a8;
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *v24 = 0LL;
  }
  v25 = a6;
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *v25 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v11);
    *v11 = 0LL;
  }
  if ( v31 == 1 )
    NtClose(Handle[0]);
  return (unsigned int)DefaultTrustSubjectContext;
}
