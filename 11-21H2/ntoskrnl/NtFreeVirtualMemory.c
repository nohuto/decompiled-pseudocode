/*
 * XREFs of NtFreeVirtualMemory @ 0x1407B98F0
 * Callers:
 *     sub_1409B75F8 @ 0x1409B75F8 (sub_1409B75F8.c)
 * Callees:
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v11; // [rsp+38h] [rbp-20h]
  PVOID v12; // [rsp+40h] [rbp-18h]

  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v7 )
  {
    v8 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v9 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  v12 = *BaseAddress;
  v11 = *RegionSize;
  result = sub_1407B99C0((ULONG_PTR)ProcessHandle, v7, 0);
  if ( result >= 0 )
  {
    *RegionSize = v11;
    *BaseAddress = v12;
  }
  return result;
}
