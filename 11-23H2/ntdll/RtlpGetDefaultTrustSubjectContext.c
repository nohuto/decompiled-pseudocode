/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x180068DF8
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180068BBC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x180068F60 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x1800691F0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(HANDLE TokenHandle, _QWORD *a2)
{
  PSID *v2; // rsi
  void *ProcessHeap; // r14
  NTSTATUS v6; // ebx
  ULONG v7; // ecx
  _QWORD *Heap; // rax
  void *v9; // rdi
  BOOLEAN DominatesTrust[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-85h] BYREF
  ULONG TokenInformationLength; // [rsp+38h] [rbp-81h] BYREF
  PSID TokenInformation[10]; // [rsp+40h] [rbp-79h] BYREF
  PSID Sid2[10]; // [rsp+90h] [rbp-29h] BYREF

  DominatesTrust[0] = 0;
  ReturnLength = 76;
  TokenInformationLength = 76;
  v2 = TokenInformation;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v6 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x29u, TokenInformation, 0x4Cu, &ReturnLength);
  if ( v6 >= 0 )
  {
    if ( !TokenHandle )
      goto LABEL_14;
    v6 = NtQueryInformationToken(TokenHandle, 0x29u, Sid2, TokenInformationLength, &TokenInformationLength);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v6 = RtlSidDominatesForTrust(TokenInformation[0], Sid2[0], DominatesTrust);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( DominatesTrust[0] )
    {
      v7 = TokenInformationLength;
      v2 = Sid2;
      ReturnLength = TokenInformationLength;
    }
    else
    {
LABEL_14:
      v7 = ReturnLength;
    }
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v7);
    v9 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    if ( *v2 )
    {
      *Heap = Heap + 1;
      v6 = RtlCopySid(ReturnLength - 8, Heap + 1, *v2);
      if ( v6 < 0 )
      {
        RtlFreeHeap(ProcessHeap, 0, v9);
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
