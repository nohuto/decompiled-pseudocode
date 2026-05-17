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
  int v5; // ebx
  size_t v6; // rdx
  __int64 v7; // rdi
  size_t *v8; // r8
  const wchar_t *v9; // r9
  size_t v11; // [rsp+20h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  char v21; // [rsp+B8h] [rbp+38h] BYREF

  Handle = (HANDLE)-1LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 4096LL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v14[1] = 0;
  v18 = 0;
  v15 = 0LL;
  p_DestinationString = &DestinationString;
  v14[0] = 48;
  v19 = 0LL;
  v17 = 64;
  v5 = NtOpenKey(&Handle, 131097LL, v14);
  if ( v5 >= 0 )
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 16LL);
    if ( v7 )
    {
      StringCopyWorkerW(Heap, v6, v8, v9, v11);
      RtlInitUnicodeString(&v13, Heap);
      v5 = NtQueryValueKey(Handle, &v13, 2LL, v7, 16, &v21);
      if ( v5 >= 0 )
        *a3 = *(_DWORD *)(v7 + 12);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    }
    else
    {
      v5 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return (unsigned int)v5;
}
