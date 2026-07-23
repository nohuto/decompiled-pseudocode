/*
 * XREFs of sub_14083B480 @ 0x14083B480
 * Callers:
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041B7A0 @ 0x14041B7A0 (sub_14041B7A0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenProcess @ 0x14041BC20 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     sub_14041CB60 @ 0x14041CB60 (sub_14041CB60.c)
 *     ZwConnectPort @ 0x14041CBA0 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14083B728 @ 0x14083B728 (sub_14083B728.c)
 *     sub_1409C5A40 @ 0x1409C5A40 (sub_1409C5A40.c)
 */

__int64 __fastcall sub_14083B480(__int64 a1)
{
  PVOID v1; // r14
  NTSTATUS v2; // eax
  void *ProcessServerSilo; // rbx
  char *v4; // rdi
  bool IsHostSilo; // r15
  __int64 v6; // rdx
  int Section; // esi
  __int64 v8; // rbx
  void *v9; // rcx
  unsigned int v11; // ebx
  ULONG MaxMessageLength[2]; // [rsp+48h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-81h] BYREF
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  _PORT_VIEW ClientView; // [rsp+60h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-31h] BYREF
  int v18; // [rsp+D0h] [rbp-1h]
  __int128 v19; // [rsp+D4h] [rbp+3h]
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+E8h] [rbp+17h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&SecurityQos.Length = 0LL;
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
  MaxMessageLength[0] = 0;
  ProcessHandle = 0LL;
  memset(&ClientView, 0, 44);
  v1 = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  v19 = 0LL;
  DestinationString = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, (PCLIENT_ID)(a1 + 8)) >= 0 )
  {
    Object = 0LL;
    v2 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    v1 = Object;
    if ( v2 >= 0 )
    {
      ProcessServerSilo = (void *)PsGetProcessServerSilo((__int64)Object);
      v4 = (char *)sub_140204738((__int64)ProcessServerSilo) + 784;
      if ( !*(_QWORD *)v4 )
      {
        *(_QWORD *)v4 = ProcessHandle;
        sub_14083B728(v4);
        v18 = 24;
        IsHostSilo = PsIsHostSilo((__int64)ProcessServerSilo);
        if ( !IsHostSilo )
          ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        Section = sub_14041B7A0();
        if ( Section < 0 )
        {
          if ( !IsHostSilo )
            ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        }
        else
        {
          Section = sub_14041CB60(*((_QWORD *)v4 + 3), v6);
          if ( Section >= 0 )
          {
            SecurityQos.ImpersonationLevel = SecurityImpersonation;
            *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
            *((_DWORD *)v4 + 12) = 4096;
            *((_DWORD *)v4 + 13) = 0;
            Section = ZwCreateSection((PHANDLE)v4 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v4 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              ClientView.Length = 48;
              ClientView.SectionHandle = (HANDLE)*((_QWORD *)v4 + 5);
              ClientView.SectionOffset = 0;
              ClientView.ViewSize = *((unsigned int *)v4 + 12);
              *(_OWORD *)&ClientView.ViewBase = 0LL;
              v8 = PsAttachSiloToCurrentThread((__int64)ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v4 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &ClientView,
                          0LL,
                          MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v8);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength[0] == 512 )
                {
                  *((_QWORD *)v4 + 8) = ClientView.ViewBase;
                  *((_DWORD *)v4 + 18) = LODWORD(ClientView.ViewRemoteBase) - LODWORD(ClientView.ViewBase);
                  *((_QWORD *)v4 + 7) = ClientView.ViewRemoteBase;
LABEL_12:
                  v9 = (void *)*((_QWORD *)v4 + 5);
                  if ( v9 )
                  {
                    ZwClose(v9);
                    *((_QWORD *)v4 + 5) = 0LL;
                  }
                  if ( v1 )
                    ObfDereferenceObject(v1);
                  return (unsigned int)Section;
                }
                Section = -1073741823;
              }
            }
          }
        }
        sub_1409C5A40(v4);
        goto LABEL_12;
      }
    }
    ZwClose(ProcessHandle);
  }
  Object = 0LL;
  v11 = sub_14041B7A0();
  if ( v1 )
    ObfDereferenceObject(v1);
  return v11;
}
