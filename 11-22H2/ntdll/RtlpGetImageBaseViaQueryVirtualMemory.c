/*
 * XREFs of RtlpGetImageBaseViaQueryVirtualMemory @ 0x180072F7C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpGetImageBaseViaQueryVirtualMemory(PVOID BaseAddress, _DWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  char v7; // [rsp+40h] [rbp-18h]

  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryImageInformation, &v5, 0x18uLL, 0LL) < 0 )
    return 0LL;
  result = v5;
  if ( !v5 || (v7 & 2) != 0 || (v7 & 1) != 0 || (unsigned __int64)BaseAddress < v5 )
    return 0LL;
  *a2 = v6;
  return result;
}
