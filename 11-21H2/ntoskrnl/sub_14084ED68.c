/*
 * XREFs of sub_14084ED68 @ 0x14084ED68
 * Callers:
 *     sub_14084ED2C @ 0x14084ED2C (sub_14084ED2C.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_14084ED68(UNICODE_STRING *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // rbx
  int Acl; // edi
  ACL *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  unsigned __int8 CapabilitySid[48]; // [rsp+B0h] [rbp-50h] BYREF
  char CapabilityGroupSid[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2621478LL;
  v18 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  UnicodeString.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(qword_140C5AFA8);
      v6 = RtlLengthSid(Group) + v5;
      v7 = RtlLengthSid(qword_140C5AFB8) + v6;
      v8 = RtlLengthSid(qword_140C5AFB0) + v7;
      v9 = v8 + RtlLengthSid(CapabilitySid) + 68;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x6C636144u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      Acl = RtlCreateAcl(PoolWithTag, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v11, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AFB8, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v11, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AFB0, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = sub_1407B4900(v11, 2u, 0, 1179649, CapabilitySid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = sub_1407B4900(v11, 2u, 0, 2031619, (unsigned __int8 *)Group, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = sub_1407B4900(v11, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AFA8, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = sub_140732D40(
                              (ULONG_PTR)EventHandle,
                              2,
                              (__int64)ExEventObjectType,
                              0,
                              0x6B676244u,
                              a2,
                              0LL,
                              0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
