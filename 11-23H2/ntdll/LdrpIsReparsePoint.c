/*
 * XREFs of LdrpIsReparsePoint @ 0x1800086DC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180008820 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpGetLoadAsEntry @ 0x1800089C4 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180008A90 (LdrFindEntryForAddress.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A1650 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpIsReparsePoint(void *a1)
{
  unsigned int v1; // ebx
  wchar_t *Buffer; // rcx
  wchar_t *v3; // rdi
  unsigned __int64 ContainingDirectory; // rdx
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+28h] [rbp-59h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+30h] [rbp-51h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+40h] [rbp-41h] BYREF
  __int128 v9; // [rsp+60h] [rbp-21h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+1Fh] BYREF

  Entry = 0LL;
  v1 = -1073741823;
  memset(&RelativeName, 0, sizeof(RelativeName));
  v9 = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, &RelativeName) < 0 )
      return v1;
    Buffer = RelativeName.RelativeName.Buffer;
  }
  else
  {
    if ( LdrFindEntryForAddress(a1, &Entry) < 0 )
      return v1;
    Buffer = Entry->FullDllName.Buffer;
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(Buffer, &NtFileName, 0LL, &RelativeName) )
  {
    v3 = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v3 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v1 = 0;
    }
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v1;
}
