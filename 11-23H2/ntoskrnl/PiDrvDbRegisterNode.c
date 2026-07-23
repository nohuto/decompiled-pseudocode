/*
 * XREFs of PiDrvDbRegisterNode @ 0x140811A0C
 * Callers:
 *     PiDrvDbInit @ 0x140811694 (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1408651BC (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbMountNode @ 0x140970250 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022AA1C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041C9B0 (ZwCreateSymbolicLinkObject.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9360 (RtlFindUnicodeSubstring.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     RtlDuplicateUnicodeString @ 0x1407B72A0 (RtlDuplicateUnicodeString.c)
 *     PiDrvDbDriverStoreNodesUpdated @ 0x140811BEC (PiDrvDbDriverStoreNodesUpdated.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     DrvDbRegisterDatabase @ 0x140812C28 (DrvDbRegisterDatabase.c)
 *     PiDrvDbDestroyNode @ 0x14097002C (PiDrvDbDestroyNode.c)
 *     _PnpCtxRegisterMachineNode @ 0x140A60E68 (_PnpCtxRegisterMachineNode.c)
 *     DrvDbUnregisterDatabase @ 0x140A6DBA4 (DrvDbUnregisterDatabase.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, char a2, int a3)
{
  const WCHAR *v4; // rsi
  wchar_t *Pool2; // r14
  char v6; // r13
  int Node; // eax
  char *v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rcx
  PWCHAR UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  int v22; // eax
  UNICODE_STRING LinkTarget; // [rsp+68h] [rbp-61h] BYREF
  int v24; // [rsp+78h] [rbp-51h] BYREF
  int v25; // [rsp+7Ch] [rbp-4Dh] BYREF
  PVOID P; // [rsp+80h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-39h] BYREF
  HANDLE LinkHandle; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  UNICODE_STRING SearchString; // [rsp+E0h] [rbp+17h] BYREF

  P = 0LL;
  DirectoryHandle = 0LL;
  v4 = Source;
  LinkHandle = 0LL;
  Handle = 0LL;
  v25 = 0;
  v24 = 0;
  Pool2 = 0LL;
  v6 = 0;
  LinkTarget = 0LL;
  DestinationString = 0LL;
  SearchString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = PiDrvDbCreateNode(v4, (__int64)&P);
  v9 = (char *)P;
  v10 = Node;
  if ( Node >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
    {
      v13 = a2 & 8;
    }
    else
    {
      v11 = *((unsigned __int16 *)P + 16) + 32LL;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11, 1650749520LL);
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_11;
      }
      v10 = RtlStringCchPrintfW(Pool2, v11 >> 1, L"%wZ\\%ws", v9 + 32, L"DriverDatabase");
      if ( v10 < 0 )
        goto LABEL_11;
      v13 = a2 & 8;
      v14 = (v13 != 0 ? 2 : 0) | 1;
      if ( (a2 & 0x40) == 0 )
        v14 = (a2 & 8) != 0 ? 2 : 0;
      v10 = DrvDbRegisterDatabase(v14, (_DWORD)Source, a3, v12, (__int64)Pool2, v14);
      if ( v10 < 0 )
        goto LABEL_11;
      v6 = 1;
    }
    if ( !v13 )
    {
LABEL_10:
      PiDrvDbDriverStoreNodesUpdated();
      v9 = 0LL;
LABEL_11:
      v4 = Source;
      goto LABEL_12;
    }
    v10 = PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *((_QWORD *)v9 + 3),
            7u,
            *((_QWORD *)v9 + 9),
            0LL,
            (__int64)DEVPKEY_DriverDatabase_FilePath,
            18,
            *((_QWORD *)v9 + 7),
            (unsigned int)*((unsigned __int16 *)v9 + 24) + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_11;
    LinkTarget.Buffer = (wchar_t *)*((_QWORD *)v9 + 7);
    RtlInitUnicodeString(&SearchString, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((PUNICODE_STRING)v9 + 3, &SearchString, 1u);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v9 + 14)) >> 1);
    }
    else
    {
      LinkTarget.Length = *((_WORD *)v9 + 24);
      for ( i = LinkTarget.Length; i > 2u; LinkTarget.Length = i )
      {
        if ( LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] != 92 )
      {
LABEL_34:
        LinkTarget.MaximumLength = i;
        if ( (a2 & 0x10) != 0 )
        {
          RtlInitUnicodeString(&SearchString, L"\\DriverStore\\Nodes");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &SearchString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v10 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( v10 < 0 )
            goto LABEL_11;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v9 + 16);
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v10 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v10 < 0 )
            goto LABEL_11;
        }
        if ( (unsigned int)PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *((_QWORD *)v9 + 3),
                             7LL,
                             *((_QWORD *)v9 + 9),
                             0LL,
                             (__int64)DEVPKEY_DriverDatabase_SystemPath,
                             (__int64)&v25,
                             0LL,
                             0,
                             (__int64)&v24,
                             0) == -1073741275 )
        {
          v10 = RtlDuplicateUnicodeString(1u, &LinkTarget, &DestinationString);
          if ( v10 < 0 )
            goto LABEL_11;
          v10 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v9 + 3),
                  7u,
                  *((_QWORD *)v9 + 9),
                  0LL,
                  (__int64)DEVPKEY_DriverDatabase_SystemPath,
                  18,
                  (__int64)DestinationString.Buffer,
                  (unsigned int)DestinationString.Length + 2,
                  0);
          if ( v10 < 0 )
            goto LABEL_11;
        }
        v19 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v19 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v10 = SysCtxRegOpenKey(v19, 2147483650LL, *((_QWORD *)v9 + 3), 0, 0x2000000u, (__int64)&Handle);
        if ( v10 < 0 )
          goto LABEL_11;
        v22 = PnpCtxRegisterMachineNode(v20, *((_QWORD *)v9 + 3), 3, v21, (__int64)Handle);
        v10 = v22;
        if ( v22 == 0x40000000 )
        {
          v10 = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      i -= 2;
    }
    LinkTarget.Length = i;
    goto LABEL_34;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  RtlFreeUnicodeString(&DestinationString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v9 )
  {
    if ( v6 )
      DrvDbUnregisterDatabase(v15, v4);
    PiDrvDbDestroyNode(v9);
  }
  return (unsigned int)v10;
}
