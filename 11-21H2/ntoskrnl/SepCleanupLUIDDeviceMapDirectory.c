/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14041DA20 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14041DDE0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  _DWORD *v5; // r9
  char v6; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v8; // r13
  NTSTATUS v9; // edi
  __int64 Pool2; // rax
  HANDLE *v11; // rsi
  __int64 v12; // rdi
  int DirectoryObject; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  HANDLE *v16; // r14
  HANDLE *v18; // r14
  unsigned int v19; // [rsp+44h] [rbp-BCh]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v25[3]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  v19 = 100;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v22 = 0;
  v4 = 0LL;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( !a1 )
    return 3221225485LL;
  v6 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v6 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v25, v5);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v8 = PsAttachSiloToCurrentThread(a2);
  v9 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    PsDetachSiloFromCurrentThread(v8);
    if ( !v6 )
      KiUnstackDetachProcess((__int64)v25, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 800LL, 1632134483LL);
LABEL_6:
    v11 = (HANDLE *)Pool2;
    if ( Pool2 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v4);
        if ( DirectoryObject != -1073741789 )
          goto LABEL_9;
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        v4 = (UNICODE_STRING *)ExAllocatePool2(256LL, 0LL, 1648649555LL);
        if ( v4 )
        {
LABEL_9:
          if ( DirectoryObject != -1073741789 )
            goto LABEL_10;
        }
        else
        {
          DirectoryObject = -1073741670;
LABEL_10:
          v14 = 0;
          if ( DirectoryObject < 0 )
          {
            if ( DirectoryObject != -2147483622 )
              v14 = DirectoryObject;
            if ( (_DWORD)v12 )
            {
              v16 = v11;
              do
              {
                ZwClose(*v16++);
                --v12;
              }
              while ( v12 );
            }
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v8);
            if ( !v6 )
              KiUnstackDetachProcess((__int64)v25, 0LL);
            return v14;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            v15 = v19;
            if ( (unsigned int)v12 >= v19 )
            {
              if ( (_DWORD)v12 )
              {
                v18 = v11;
                do
                {
                  ZwClose(*v18++);
                  --v12;
                }
                while ( v12 );
                v15 = v19;
              }
              v19 = v15 + 20;
              ExFreePoolWithTag(v11, 0);
              Pool2 = ExAllocatePool2(256LL, 8LL * (v15 + 20), 1632134483LL);
              goto LABEL_6;
            }
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = v4;
            if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
            {
              if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
              {
                ZwClose(LinkHandle);
              }
              else
              {
                v11[v12] = LinkHandle;
                v12 = (unsigned int)(v12 + 1);
              }
            }
          }
        }
      }
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v8);
    if ( !v6 )
      KiUnstackDetachProcess((__int64)v25, 0LL);
    return 3221225495LL;
  }
}
