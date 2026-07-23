/*
 * XREFs of NtFlushVirtualMemory @ 0x1407B43B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 */

NTSTATUS __cdecl NtFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  char PreviousMode; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // rdx
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rax
  __int64 v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // [rsp+40h] [rbp-38h]
  ULONG_PTR v18; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v21; // [rsp+60h] [rbp-18h] BYREF

  Object = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v10 = (__int64)BaseAddress;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)RegionSize < 0x7FFFFFFF0000LL )
      v11 = (__int64)RegionSize;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (unsigned __int64)IoStatus < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatus;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    v12 = (char *)*BaseAddress;
    v19 = (unsigned __int64)*BaseAddress;
    v13 = *RegionSize;
    v18 = *RegionSize;
  }
  else
  {
    v12 = (char *)*BaseAddress;
    v19 = (unsigned __int64)v12;
    v13 = *RegionSize;
    v18 = *RegionSize;
  }
  v14 = v13 - 1;
  if ( !v13 )
    v14 = 0LL;
  if ( &v12[v14] < v12 )
    return -1073741811;
  v15 = v13 ? v13 - 1 : 0LL;
  if ( (unsigned __int64)&v12[v15] > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v17 = MmFlushVirtualMemory(Object, &v19, &v18, &v21);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *RegionSize = v18;
    *BaseAddress = (PVOID)(v19 & 0xFFFFFFFFFFFFF000uLL);
    *(_OWORD *)&IoStatus->Status = v21;
    return v17;
  }
  return result;
}
