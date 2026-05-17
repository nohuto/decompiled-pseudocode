/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x180068E18
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180068BDC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x180068F80 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rsi
  void *ProcessHeap; // r14
  int v6; // ebx
  unsigned int v7; // ecx
  _QWORD *Heap; // rax
  __int64 v9; // rdi
  _BYTE v11[4]; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+90h] [rbp-29h] BYREF

  v11[0] = 0;
  v12 = 76;
  v13 = 76;
  v2 = v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v6 = NtQueryInformationToken(-4LL, 41LL, v14, 76LL, &v12);
  if ( v6 >= 0 )
  {
    if ( !a1 )
      goto LABEL_14;
    v6 = NtQueryInformationToken(a1, 41LL, v15, v13, &v13);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v6 = RtlSidDominatesForTrust(v14[0], v15[0], v11);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v11[0] )
    {
      v7 = v13;
      v2 = v15;
      v12 = v13;
    }
    else
    {
LABEL_14:
      v7 = v12;
    }
    Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v7);
    v9 = (__int64)Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    if ( *v2 )
    {
      *Heap = Heap + 1;
      v6 = RtlCopySid((unsigned int)(v12 - 8), Heap + 1, *v2);
      if ( v6 < 0 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v9);
        return (unsigned int)v6;
      }
    }
    else
    {
      *Heap = 0LL;
    }
    *a2 = v9;
  }
  return (unsigned int)v6;
}
