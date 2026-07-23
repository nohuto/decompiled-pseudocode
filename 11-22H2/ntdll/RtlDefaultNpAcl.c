/*
 * XREFs of RtlDefaultNpAcl @ 0x1800019A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18000AEA0 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     RtlGetAppContainerParent @ 0x1800F0F70 (RtlGetAppContainerParent.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID v2; // rdi
  void *ProcessHeap; // rcx
  PVOID Heap; // r15
  int AppContainerParent; // ebx
  int v6; // edx
  ULONG v7; // ebx
  ACL *v8; // rax
  PSID v9; // r14
  ACL *v10; // rcx
  ACL *v11; // rcx
  ACL *v12; // rcx
  ACL *v13; // rcx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v16; // [rsp+38h] [rbp-38h] BYREF
  int TokenInformation; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-2Ch] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp-28h] BYREF
  PSID AppContainerSidParent; // [rsp+50h] [rbp-20h] BYREF
  _BYTE Sid[8]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *Acl = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_DWORD *)v16.Value = 0;
  *(_WORD *)&v16.Value[4] = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  AppContainerSidParent = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x4CuLL);
  if ( Heap )
  {
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 4u, Heap, 0x4Cu, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_18;
    TokenInformation = 0;
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Du, &TokenInformation, 4u, &ReturnLength) >= 0
      && TokenInformation )
    {
      v2 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
      if ( !v2 )
      {
        AppContainerParent = -1073741801;
        goto LABEL_18;
      }
      AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Fu, v2, 0x4Cu, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_29;
      AppContainerParent = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( AppContainerParent < 0 )
        goto LABEL_29;
      if ( AppContainerSidType == ChildAppContainerSidType )
      {
        AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &AppContainerSidParent);
        if ( AppContainerParent < 0 )
          goto LABEL_29;
      }
    }
    v6 = 52;
    if ( v2 )
      v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)v2 + 1LL) + 68;
    if ( AppContainerSidParent )
      v6 += 4 * *((unsigned __int8 *)AppContainerSidParent + 1) + 16;
    v7 = v6 + 4 * (*(unsigned __int8 *)(*(_QWORD *)Heap + 1LL) + 14);
    v8 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v9 = AppContainerSidParent;
    *Acl = v8;
    if ( v8 )
    {
      RtlCreateAcl(v8, v7, 2u);
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v10 = *Acl;
      v22 = 18;
      RtlpAddKnownAce(v10, Sid, 0);
      RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
      v11 = *Acl;
      v22 = 32;
      v23 = 544;
      RtlpAddKnownAce(v11, Sid, 0);
      if ( v2 )
        RtlpAddKnownAce(*Acl, *(PSID *)v2, 0);
      if ( v9 )
        RtlpAddKnownAce(*Acl, v9, 0);
      RtlpAddKnownAce(*Acl, *(PSID *)Heap, 0);
      RtlInitializeSid(Sid, &v16, 1u);
      v12 = *Acl;
      v22 = 0;
      RtlpAddKnownAce(v12, Sid, 0);
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v13 = *Acl;
      v22 = 7;
      RtlpAddKnownAce(v13, Sid, 0);
      AppContainerParent = 0;
    }
    else
    {
      AppContainerParent = -1073741801;
    }
    if ( v2 )
    {
LABEL_29:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      v9 = AppContainerSidParent;
    }
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
LABEL_18:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( AppContainerParent >= 0 )
      return AppContainerParent;
    goto LABEL_21;
  }
  AppContainerParent = -1073741801;
LABEL_21:
  if ( *Acl )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *Acl);
    *Acl = 0LL;
  }
  return AppContainerParent;
}
