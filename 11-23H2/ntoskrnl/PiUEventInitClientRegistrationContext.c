/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x140781EC4
 * Callers:
 *     PiUEventHandleRegistration @ 0x14077F88C (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D300 (RtlDeriveCapabilitySidsFromName.c)
 *     KeInitializeGuardedMutex @ 0x14031DB00 (KeInitializeGuardedMutex.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041CB30 (ZwCreateWnfStateName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_WNF_STATE_NAME *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _WNF_STATE_NAME *Pool2; // rax
  _WNF_STATE_NAME *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v12; // rcx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-59h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h]
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-21h] BYREF
  char CapabilityGroupSid[48]; // [rsp+B0h] [rbp+Fh] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  v15 = 0LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v0 = 0LL;
  Pool2 = (_WNF_STATE_NAME *)ExAllocatePool2(256LL, 144LL, 1500540496LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePool2(64LL, 56LL, 1500540496LL);
    v2[2] = (_WNF_STATE_NAME)v3;
    if ( v3 )
    {
      KeInitializeGuardedMutex(v3);
      v2[16].Data[1] = 4;
      v2[15] = (_WNF_STATE_NAME)&v2[14];
      v2[14] = (_WNF_STATE_NAME)&v2[14];
      LOBYTE(v2[17].Data[1]) = 1;
      v2[13] = (_WNF_STATE_NAME)&v2[12];
      v2[12] = (_WNF_STATE_NAME)&v2[12];
      if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) >= 0
        && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0 )
      {
        v4 = SeLocalSystemSid;
        if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) >= 0 )
        {
          v5 = RtlLengthSid(SeLowMandatorySid);
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5;
          v7 = RtlLengthSid(SeWorldSid) + v6;
          v8 = RtlLengthSid(v4) + v7;
          v9 = v8 + RtlLengthSid(CapabilitySid) + 48;
          v10 = (ACL *)ExAllocatePool2(256LL, v9, 1500540496LL);
          v0 = v10;
          if ( v10 )
          {
            if ( RtlCreateAcl(v10, v9, 2u) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeLowMandatorySid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, CapabilitySid, 0) >= 0
              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) >= 0
              && ZwCreateWnfStateName(
                   v2 + 11,
                   WnfTemporaryStateName,
                   WnfDataScopeMachine,
                   0,
                   0LL,
                   4u,
                   SecurityDescriptor) >= 0 )
            {
              goto LABEL_15;
            }
          }
        }
      }
    }
    v12 = (void *)v2[2];
    if ( v12 )
      ExFreePoolWithTag(v12, 0x59706E50u);
    ExFreePoolWithTag(v2, 0x59706E50u);
    v2 = 0LL;
    if ( v0 )
LABEL_15:
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
