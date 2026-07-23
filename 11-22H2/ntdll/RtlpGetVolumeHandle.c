/*
 * XREFs of RtlpGetVolumeHandle @ 0x180062628
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180062740 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18012BBC8 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180062414 (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW @ 0x18007EE40 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x18009F890 (ZwCreateFile.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, HANDLE *a2)
{
  __int64 v2; // r9
  NTSTATUS result; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-29h] BYREF
  __int128 v6; // [rsp+68h] [rbp-21h] BYREF
  __int16 v7; // [rsp+78h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t pszDest[12]; // [rsp+C0h] [rbp+37h] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v6 = 0LL;
  if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v7) >= 0 )
  {
    LOWORD(v6) = 2 * v7;
    WORD1(v6) = 2 * v7 + 2;
    *((_QWORD *)&v6 + 1) = pszDest;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
