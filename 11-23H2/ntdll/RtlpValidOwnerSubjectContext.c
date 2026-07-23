/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x1800854DC
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x180010830 (RtlEqualSid.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A34C0 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x1800A36A0 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  char v4; // bl
  void *ProcessHeap; // r13
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  PSID *Heap; // r14
  unsigned int v13; // edi
  PSID *v14; // r15
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  BOOLEAN v17; // cl
  BOOLEAN Result[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-85h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-81h] BYREF
  HANDLE ClientToken; // [rsp+48h] [rbp-71h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-69h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  ClientToken = a1;
  if ( !a2 )
  {
LABEL_31:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    TokenHandle[0] = a1;
    goto LABEL_4;
  }
  v15 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, TokenHandle);
  *a4 = v15;
  if ( v15 >= 0 )
  {
LABEL_4:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(TokenHandle[0], 1u, TokenInformation, 0x54u, &TokenInformationLength);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_25;
    if ( RtlEqualSid(a2, TokenInformation[0]) )
    {
      if ( a3 )
        NtClose(TokenHandle[0]);
      return 1;
    }
    v11 = NtQueryInformationToken(TokenHandle[0], 2u, 0LL, 0, &TokenInformationLength);
    *a4 = v11;
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741789 )
      goto LABEL_25;
    Heap = (PSID *)RtlAllocateHeap(ProcessHeap, 0, TokenInformationLength);
    if ( !Heap )
    {
      *a4 = -1073741801;
LABEL_25:
      if ( a3 )
        NtClose(TokenHandle[0]);
      return 0;
    }
    *a4 = NtQueryInformationToken(TokenHandle[0], 2u, Heap, TokenInformationLength, &TokenInformationLength);
    if ( a3 )
      NtClose(TokenHandle[0]);
    if ( *a4 < 0 )
    {
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0, Heap);
      return v4;
    }
    v13 = 0;
    if ( *(_DWORD *)Heap )
    {
      v14 = Heap + 1;
      while ( !RtlEqualSid(a2, *v14) )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(_DWORD *)Heap )
          goto LABEL_28;
      }
      if ( ((__int64)Heap[2 * v13 + 2] & 0x18) == 8 )
      {
        v4 = 1;
        goto LABEL_19;
      }
    }
LABEL_28:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    TokenHandle[1] = (HANDLE)18;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)18LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v16 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Result);
    v17 = Result[0];
    if ( v16 < 0 )
      v17 = 0;
    if ( v17 )
      return 1;
    goto LABEL_31;
  }
  return 0;
}
