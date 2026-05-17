/*
 * XREFs of EtwpQueryRegString @ 0x18000913C
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180008FB4 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpAddDebugInfoEvents @ 0x180122EE0 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, unsigned int a4)
{
  int v6; // edi
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  __int64 Heap; // rbx
  HANDLE Handle; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+68h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+7Ch] [rbp+2Bh]
  __int128 v19; // [rsp+80h] [rbp+2Fh]
  unsigned int v20; // [rsp+D0h] [rbp+7Fh] BYREF

  v20 = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14[1] = 0;
  v18 = 0;
  v15 = 0LL;
  p_DestinationString = &DestinationString;
  v14[0] = 48;
  v19 = 0LL;
  v17 = 64;
  v6 = NtOpenKey(&Handle, 131097LL, v14);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * v20;
  if ( v7 <= 0xFFFFFFFF )
  {
    v8 = v7 + 12;
    if ( (int)v7 + 12 >= (unsigned int)v7 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v8);
      if ( Heap )
      {
        RtlInitUnicodeString(&v13, a2);
        v6 = NtQueryValueKey(Handle, &v13, 2LL, Heap, v8, &v20);
        if ( v6 >= 0 )
          memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      NtClose(Handle);
      return (unsigned int)v6;
    }
  }
  NtClose(Handle);
  return 3221225621LL;
}
