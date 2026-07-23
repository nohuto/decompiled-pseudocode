/*
 * XREFs of sub_14078DAB0 @ 0x14078DAB0
 * Callers:
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_WNF_STATE_NAME *sub_14078DAB0()
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
  _BYTE CapabilitySid[48]; // [rsp+80h] [rbp-21h] BYREF
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
        v4 = Group;
        if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 1u) >= 0 )
        {
          v5 = RtlLengthSid(Sid);
          v6 = RtlLengthSid(qword_140C5AFB0) + v5;
          v7 = RtlLengthSid(qword_140C5AFA8) + v6;
          v8 = RtlLengthSid(v4) + v7;
          v9 = v8 + RtlLengthSid(CapabilitySid) + 48;
          v10 = (ACL *)ExAllocatePool2(256LL, v9, 1500540496LL);
          v0 = v10;
          if ( v10 )
          {
            if ( RtlCreateAcl(v10, v9, 2u) >= 0
              && (int)sub_1407B4900((int)v0, 2, 2, 0x10000000, Group, 0) >= 0
              && (int)sub_1407B4900((int)v0, 2, 2, 1, qword_140C5AFA8, 0) >= 0
              && (int)sub_1407B4900((int)v0, 2, 2, 1, qword_140C5AFB0, 0) >= 0
              && (int)sub_1407B4900((int)v0, 2, 2, 1, Sid, 0) >= 0
              && (int)sub_1407B4900((int)v0, 2, 2, 1, CapabilitySid, 0) >= 0
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
