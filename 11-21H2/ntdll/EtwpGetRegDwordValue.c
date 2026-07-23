/*
 * XREFs of EtwpGetRegDwordValue @ 0x180008E4C
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180008FB4 (EtwpQueryPartitionRegistryInformationUm.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180009278 (StringCopyWorkerW.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap; // rsi
  NTSTATUS v5; // ebx
  size_t v6; // rdx
  _DWORD *v7; // rdi
  size_t *v8; // r8
  const wchar_t *v9; // r9
  size_t Length; // [rsp+20h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = (HANDLE)-1LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v5 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v7 )
    {
      StringCopyWorkerW(Heap, v6, v8, v9, Length);
      RtlInitUnicodeString(&ValueName, Heap);
      v5 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v7, 0x10u, &ResultLength);
      if ( v5 >= 0 )
        *a3 = v7[3];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    else
    {
      v5 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v5;
}
