/*
 * XREFs of sub_14085075C @ 0x14085075C
 * Callers:
 *     sub_14085071C @ 0x14085071C (sub_14085071C.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 *     sub_140B23CDC @ 0x140B23CDC (sub_140B23CDC.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085075C(UNICODE_STRING *a1, EVENT_TYPE a2, PVOID *a3)
{
  int Acl; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ACL *Pool2; // rax
  ACL *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+58h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  EventHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v7 = RtlLengthSid(SidToCheck);
    v8 = RtlLengthSid(Group) + 32 + v7;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 1818452292LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v10, 2u, 0, 2031619, (unsigned __int8 *)SidToCheck, 0);
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v10, 2u, 0, 2031619, (unsigned __int8 *)Group, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 656;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Object = 0LL;
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a3 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)Acl;
}
