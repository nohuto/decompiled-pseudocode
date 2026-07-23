/*
 * XREFs of sub_14069CEC8 @ 0x14069CEC8
 * Callers:
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
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

__int64 __fastcall sub_14069CEC8(_DWORD *a1, __int64 a2)
{
  UNICODE_STRING *v4; // rbx
  ULONG v5; // r14d
  __int64 v6; // r9
  char v7; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  __int64 v9; // r13
  NTSTATUS v10; // edi
  __int64 Pool2; // rax
  HANDLE *v12; // rsi
  unsigned int RestartScan; // r15d
  __int64 v14; // rdi
  NTSTATUS v15; // r14d
  unsigned int v16; // r14d
  ULONG v17; // eax
  HANDLE *v18; // r14
  HANDLE *v20; // r14
  ULONG v21; // [rsp+40h] [rbp-C0h]
  unsigned int v22; // [rsp+44h] [rbp-BCh]
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Context; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v29[3]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  v22 = 100;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  Context = 0;
  v4 = 0LL;
  ReturnLength = 0;
  v5 = 0;
  DirectoryHandle = 0LL;
  v21 = 0;
  DestinationString = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( !a1 )
    return 3221225485LL;
  v7 = ObReferenceObjectSafeWithTag(*((_QWORD *)KeGetCurrentThread() + 23));
  if ( v7 )
    ObfDereferenceObjectWithTag(*((PVOID *)KeGetCurrentThread() + 23), 0x4D526553u);
  else
    sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v29, v6);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v9 = PsAttachSiloToCurrentThread(a2);
  v10 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v10 < 0 )
  {
    PsDetachSiloFromCurrentThread(v9);
    if ( !v7 )
      sub_1402D0930((__int64)v29, 0LL);
    return (unsigned int)v10;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 800LL, 1632134483LL);
LABEL_6:
    v12 = (HANDLE *)Pool2;
    if ( Pool2 )
    {
      LOBYTE(RestartScan) = 1;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = ZwQueryDirectoryObject(DirectoryHandle, v4, v5, 1u, RestartScan, &Context, &ReturnLength);
        if ( v15 != -1073741789 )
          goto LABEL_9;
        v17 = ReturnLength;
        v21 = ReturnLength;
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          v17 = v21;
        }
        v4 = (UNICODE_STRING *)ExAllocatePool2(256LL, v17, 1648649555LL);
        if ( v4 )
        {
LABEL_9:
          if ( v15 == -1073741789 )
            goto LABEL_16;
        }
        else
        {
          v15 = -1073741670;
        }
        RestartScan = 0;
        if ( v15 < 0 )
        {
          if ( v15 != -2147483622 )
            RestartScan = v15;
          if ( (_DWORD)v14 )
          {
            v18 = v12;
            do
            {
              ZwClose(*v18++);
              --v14;
            }
            while ( v14 );
          }
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          if ( DirectoryHandle )
            ZwClose(DirectoryHandle);
          PsDetachSiloFromCurrentThread(v9);
          if ( !v7 )
            sub_1402D0930((__int64)v29, 0LL);
          return RestartScan;
        }
        if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
        {
          v16 = v22;
          if ( (unsigned int)v14 >= v22 )
          {
            if ( (_DWORD)v14 )
            {
              v20 = v12;
              do
              {
                ZwClose(*v20++);
                --v14;
              }
              while ( v14 );
              v16 = v22;
            }
            v22 = v16 + 20;
            ExFreePoolWithTag(v12, 0);
            Pool2 = ExAllocatePool2(256LL, 8LL * (v16 + 20), 1632134483LL);
            v5 = v21;
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
              v12[v14] = LinkHandle;
              v14 = (unsigned int)(v14 + 1);
            }
          }
        }
LABEL_16:
        v5 = v21;
      }
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v9);
    if ( !v7 )
      sub_1402D0930((__int64)v29, 0LL);
    return 3221225495LL;
  }
}
