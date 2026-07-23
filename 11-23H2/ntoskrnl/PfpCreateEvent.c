/*
 * XREFs of PfpCreateEvent @ 0x140846FB4
 * Callers:
 *     PfTStart @ 0x1408461D0 (PfTStart.c)
 *     PfpScenCtxStart @ 0x140846560 (PfpScenCtxStart.c)
 *     PfSnInitializePrefetcher @ 0x140B618C0 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140B61A40 (PfpParametersInitialize.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041B9F0 (ZwCreateEvent.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfpCreateEvent(UNICODE_STRING *a1, EVENT_TYPE a2, PVOID *a3)
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
    v7 = RtlLengthSid(SeAliasAdminsSid);
    v8 = RtlLengthSid(SeLocalSystemSid) + 32 + v7;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 1818452292LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
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
