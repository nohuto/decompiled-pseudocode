/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x18002F824
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x18002F780 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     RmpWnfGetPublisherSid @ 0x18002FABC (RmpWnfGetPublisherSid.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  PVOID Heap; // rax
  void *v6; // rdi
  DWORD LastError; // eax
  unsigned __int8 *v9; // rdx
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v11; // [rsp+34h] [rbp-CCh] BYREF
  DWORD cbSid; // [rsp+38h] [rbp-C8h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[80]; // [rsp+C0h] [rbp-40h] BYREF
  _ACL Acl; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+250h] [rbp+150h] BYREF
  DWORD *v19; // [rsp+270h] [rbp+170h]
  int v20; // [rsp+278h] [rbp+178h]
  int v21; // [rsp+27Ch] [rbp+17Ch]

  Sid = 0LL;
  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v16, &cbSid) )
  {
    if ( (unsigned int)dword_1800DC1E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      goto LABEL_23;
    LastError = GetLastError();
    v9 = (unsigned __int8 *)&unk_1800C1FD3;
    goto LABEL_22;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v16);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  if ( !ConvertStringSidToSidW(
          L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
          &Sid) )
  {
    if ( (unsigned int)dword_1800DC1E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      goto LABEL_23;
    LastError = GetLastError();
    v9 = (unsigned __int8 *)&dword_1800C2007;
LABEL_22:
    v21 = 0;
    v11 = LastError;
    v20 = 4;
    v19 = &v11;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC1E0, v9, 0LL, 0LL, 3u, &v18);
LABEL_23:
    PublisherSid = -1073741823;
    goto LABEL_15;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
  if ( PublisherSid >= 0 )
  {
    PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( PublisherSid >= 0 )
      {
        BufferLength = 0;
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferLength);
        v6 = Heap;
        if ( Heap )
        {
          PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
          if ( PublisherSid < 0 )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
          }
          else
          {
            *a2 = v6;
            PublisherSid = 0;
          }
        }
        else
        {
          PublisherSid = -1073741801;
        }
      }
    }
  }
LABEL_15:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)PublisherSid;
}
