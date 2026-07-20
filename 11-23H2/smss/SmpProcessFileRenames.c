/*
 * XREFs of SmpProcessFileRenames @ 0x14000B13C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x140009B40 (SmpDeallocSavedRegistryEntry.c)
 *     SmpEventWrite @ 0x14000C78C (SmpEventWrite.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140011C6C (SmpPathCanBeTrustedIsNotARedirection.c)
 *     RtlStringCbPrintfExW @ 0x140018CCC (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x140018FE8 (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140019604 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140019708 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x140019898 (SmpGetTime.c)
 *     SmpLogPFROError @ 0x140019C98 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x140019ED8 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140019FF0 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x14001A45C (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x14001A6D4 (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r12
  bool v2; // r15
  NTSTATUS v3; // eax
  unsigned __int8 v4; // cl
  PVOID *v5; // rax
  int v6; // ebx
  struct _UNICODE_STRING *v7; // rdi
  struct _UNICODE_STRING *v8; // r14
  struct _UNICODE_STRING *v9; // rsi
  struct _UNICODE_STRING *v10; // r13
  __int64 Length; // rdx
  PWSTR Buffer; // rax
  WCHAR v13; // cx
  PWSTR v14; // rax
  int v15; // ebx
  __int64 v16; // r9
  USHORT v17; // cx
  PWSTR v18; // rax
  unsigned int v19; // esi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // eax
  char v24; // al
  struct _UNICODE_STRING **v25; // rax
  struct _UNICODE_STRING *v26; // rdx
  unsigned __int8 OldValue[4]; // [rsp+78h] [rbp-90h] BYREF
  int ValueData; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v30; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  size_t pcbRemaining; // [rsp+A0h] [rbp-68h] BYREF
  int v34; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-58h]
  struct _UNICODE_STRING *v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  __int128 v38; // [rsp+C8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(pcbRemaining) = a1;
  v1 = 0;
  v2 = 1;
  OldValue[0] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v3 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v4 = OldValue[0];
    if ( v3 < 0 )
      v4 = 1;
    OldValue[0] = v4;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v5 = (PVOID *)SmpFileRenameList;
  v6 = 0;
  v7 = (struct _UNICODE_STRING *)SmpFileRenameList;
  v30 = 0;
  ValueData = 0;
  while ( v5 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v8 = v7 + 1;
    OldValue[1] = 0;
    v9 = v7 + 2;
    v10 = v7;
    SmpEventWriteString2(&SmpFileRenameList, &v7[1], &v7[2]);
    Length = v7[1].Length;
    if ( (unsigned __int16)Length >= 4u )
    {
      Buffer = v7[1].Buffer;
      if ( *Buffer == 42 )
      {
        v13 = Buffer[1];
        LOWORD(Length) = Length - 4;
        v8->Length = Length;
        v7[1].MaximumLength -= 4;
        v7[1].Buffer = Buffer + 2;
        OldValue[1] = 1;
        v2 = v13 != 48;
      }
    }
    if ( !v9->Length )
    {
      v14 = v7[1].Buffer;
      if ( *v14 == 64 )
      {
        LOWORD(Length) = Length - 2;
        v7[1].Buffer = v14 + 1;
        v8->Length = Length;
      }
      LOBYTE(Length) = v2;
      v15 = SmpForceDeleteTargetFile(&v7[1], Length);
      goto LABEL_36;
    }
    v35 = 0LL;
    v34 = 48;
    v37 = 64;
    v36 = v7 + 1;
    v38 = 0LL;
    v15 = SmpOpenTargetFile((int)&Handle, 1114112, (int)&v34, 0, 3u);
    if ( v15 < 0 )
      goto LABEL_36;
    if ( v2 && !(unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(Handle) )
    {
      v15 = -1073740533;
LABEL_36:
      v2 = 1;
      goto LABEL_37;
    }
    RtlInitUnicodeString(&DestinationString, v7[2].Buffer);
    v17 = DestinationString.Length;
    v18 = DestinationString.Buffer;
    if ( DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
    {
      DestinationString.MaximumLength -= 4;
      v17 = DestinationString.Length - 4;
      v18 = DestinationString.Buffer + 2;
      DestinationString.Length -= 4;
      DestinationString.Buffer += 2;
    }
    if ( *v18 == 33 || *v18 == 64 )
    {
      v19 = 1;
      DestinationString.Buffer = v18 + 1;
      DestinationString.MaximumLength -= 2;
      DestinationString.Length = v17 - 2;
    }
    else
    {
      v19 = 0;
    }
    LOBYTE(v16) = v2;
    v20 = SmpRenameTargetFile(&DestinationString, Handle, v19, v16);
    v15 = v20;
    if ( v20 >= 0
      || !v19
      || v20 != -1073741790
      || (LOBYTE(v21) = v2,
          v15 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v21),
          (int)(v15 + 0x80000000) < 0)
      || v15 == -1073741638 )
    {
      v9 = v7 + 2;
      goto LABEL_36;
    }
    LOBYTE(v22) = v2;
    v15 = SmpShuffleMove(&DestinationString, Handle, v22);
    v9 = v7 + 2;
    v23 = ValueData;
    v2 = 1;
    if ( v15 >= 0 )
      v23 = 1;
    ValueData = v23;
LABEL_37:
    if ( Handle )
      NtClose(Handle);
    if ( v15 < 0 )
    {
      v24 = SmpLogPFROError(&v7[1], v9, (unsigned int)v15);
      v6 = v30;
      v1 |= v24;
    }
    else
    {
      v6 = ++v30;
    }
    if ( OldValue[1] == 1 )
    {
      v8->Length += 4;
      v7[1].MaximumLength += 4;
      v7[1].Buffer -= 2;
    }
    v25 = *(struct _UNICODE_STRING ***)&v7->Length;
    v7 = (struct _UNICODE_STRING *)v25;
    if ( v25[1] != v10 || (v26 = (struct _UNICODE_STRING *)v10->Buffer, *(struct _UNICODE_STRING **)&v26->Length != v10) )
      __fastfail(3u);
    *(_QWORD *)&v26->Length = v25;
    v25[1] = v26;
    SmpDeallocSavedRegistryEntry(v10);
    v5 = (PVOID *)SmpFileRenameList;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( (_DWORD)pcbRemaining )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  if ( SmpLogFileHandle )
  {
    if ( v1 )
    {
      SmpGetTime(&TimeFields);
      if ( RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             TimeFields.Month,
             TimeFields.Day,
             TimeFields.Year,
             TimeFields.Hour,
             TimeFields.Minute,
             TimeFields.Second,
             v6) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
