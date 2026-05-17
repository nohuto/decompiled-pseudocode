/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800F9400
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtWriteFile @ 0x18009EEF0 (NtWriteFile.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwCreateFile @ 0x18009F890 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800F9750 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPath @ 0x1800F9924 (RtlpGetBootStatusPath.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(const WCHAR *a1)
{
  const WCHAR *v1; // rdx
  int File; // ebx
  void *Heap; // rax
  __int64 v4; // rdi
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  int v7; // [rsp+80h] [rbp+7h]
  __int64 v8; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp+17h]
  int v10; // [rsp+98h] [rbp+1Fh]
  __int128 v11; // [rsp+A0h] [rbp+27h]
  char v12; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+6Fh]
  __int64 v14; // [rsp+F0h] [rbp+77h]
  PCWSTR SourceString; // [rsp+F8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  SourceString = 0LL;
  v12 = 0;
  if ( a1 )
  {
    v1 = a1;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v12);
    v1 = SourceString;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  v8 = 0LL;
  p_DestinationString = &DestinationString;
  v7 = 48;
  v10 = 64;
  v11 = 0LL;
  v14 = 67584LL;
  File = ZwCreateFile();
  if ( File >= 0 )
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 67584LL);
    v4 = (__int64)Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 254, 0x10800uLL);
      v14 = 0LL;
      File = NtWriteFile();
      if ( File >= 0 )
        File = RtlRestoreBootStatusDefaults(Handle);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    else
    {
      File = -1073741801;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v12 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString);
  return (unsigned int)File;
}
