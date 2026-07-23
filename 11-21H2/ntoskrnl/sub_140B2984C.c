/*
 * XREFs of sub_140B2984C @ 0x140B2984C
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14041C6C0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041C900 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     sub_14081AE90 @ 0x14081AE90 (sub_14081AE90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2984C()
{
  unsigned int v0; // edi
  char *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r8
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // ebx
  NTSTATUS Callback; // eax
  PCALLBACK_OBJECT v9; // rdi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PortInformation = 0LL;
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  memset(ObjectAttributes, 0, 52);
  DestinationString = 0LL;
  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlRunOnceInitialize(&stru_140C1C1E8);
  v0 = 0;
  v1 = (char *)&unk_140C1C202;
  v2 = 0LL;
  do
  {
    *(_DWORD *)(v1 - 10) = 0;
    *(v1 - 6) = 0;
    *(_QWORD *)(v1 + 174) = v1 + 166;
    *(_QWORD *)(v1 + 166) = v1 + 166;
    *(_WORD *)v1 = 0;
    sub_1403588EC((__int64)(v1 - 2), (__int64)sub_1403B6D70, v2, 8);
    *(_QWORD *)(v1 + 134) = 0LL;
    *(_QWORD *)(v1 + 150) = sub_14081B2F0;
    *(_QWORD *)(v1 + 158) = v3;
    if ( v0 == 1 )
      ++*(_DWORD *)(v1 - 10);
    ++v0;
    v2 = v3 + 1;
    v1 += 192;
  }
  while ( v0 < 2 );
  v4 = 4 * *((unsigned __int8 *)Group + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v4, 0x70687373u);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v4);
    Acl = RtlCreateAcl(v6, v4, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6, 2u, 0x10000000u, Group);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            ObjectAttributes[2] = 0LL;
            ObjectAttributes[6] = 0LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.MaxMessageLength = 64LL;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            LODWORD(ObjectAttributes[1]) = 48;
            LODWORD(ObjectAttributes[4]) = 512;
            Acl = ZwAlpcCreatePort(&qword_140C1C1E0, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes[2] = 0LL;
              ObjectAttributes[3] = 0LL;
              LODWORD(ObjectAttributes[1]) = 48;
              LODWORD(ObjectAttributes[4]) = 512;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Callback = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              v9 = ObjectAttributes[0];
              Acl = Callback;
              if ( Callback >= 0 )
              {
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)sub_14081AE90, 0LL) )
                {
                  PortInformation = (unsigned __int64)v9;
                  Acl = ZwAlpcSetInformation(qword_140C1C1E0, AlpcRegisterCallbackInformation, &PortInformation, 0x10u);
                  if ( Acl >= 0 )
                  {
                    sub_14081AE90(0LL, 0LL, 0LL);
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
              if ( v9 )
                ObfDereferenceObjectWithTag(v9, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v6, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
