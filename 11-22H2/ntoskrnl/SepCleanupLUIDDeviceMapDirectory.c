/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14076D310 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D84C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0850 (PsGetServerSiloServiceSessionId.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     wcscmp @ 0x1403DB2F0 (wcscmp.c)
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041B1A0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14041C980 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14041CD60 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x14041D020 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  _KPROCESS *Process; // rdi
  char v6; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v8; // r13
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  HANDLE *Pool2; // rsi
  __int64 v12; // rdi
  int DirectoryObject; // r14d
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // r15d
  HANDLE *v17; // r14
  HANDLE *v19; // r14
  unsigned int v20; // [rsp+48h] [rbp-B8h]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v26; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  v20 = 100;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v23 = 0;
  v4 = 0LL;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(&v26, 0, sizeof(v26));
  if ( !a1 )
    return 3221225485LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = ObReferenceObjectSafeWithTag((__int64)Process);
  if ( v6 )
    ObfDereferenceObjectWithTag(Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v26);
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
      KiUnstackDetachProcess(&v26);
    return (unsigned int)v9;
  }
  else
  {
    v10 = 800LL;
LABEL_6:
    Pool2 = (HANDLE *)ExAllocatePool2(256LL, v10, 1632134483LL);
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
          v14 = DirectoryObject;
          if ( DirectoryObject != -1073741789 )
            goto LABEL_10;
        }
        else
        {
          v14 = -1073741670;
          DirectoryObject = -1073741670;
LABEL_10:
          if ( DirectoryObject < 0 )
          {
            v16 = 0;
            if ( DirectoryObject != -2147483622 )
              v16 = v14;
            if ( (_DWORD)v12 )
            {
              v17 = Pool2;
              do
              {
                ZwClose(*v17++);
                --v12;
              }
              while ( v12 );
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v8);
            if ( !v6 )
              KiUnstackDetachProcess(&v26);
            return v16;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            v15 = v20;
            if ( (unsigned int)v12 >= v20 )
            {
              if ( (_DWORD)v12 )
              {
                v19 = Pool2;
                do
                {
                  ZwClose(*v19++);
                  --v12;
                }
                while ( v12 );
              }
              v20 += 20;
              ExFreePoolWithTag(Pool2, 0);
              v10 = 8LL * (v15 + 20);
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
                Pool2[v12] = LinkHandle;
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
      KiUnstackDetachProcess(&v26);
    return 3221225495LL;
  }
}
