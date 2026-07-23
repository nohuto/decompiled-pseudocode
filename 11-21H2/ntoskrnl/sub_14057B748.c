/*
 * XREFs of sub_14057B748 @ 0x14057B748
 * Callers:
 *     sub_14057BD80 @ 0x14057BD80 (sub_14057BD80.c)
 *     sub_14057BE00 @ 0x14057BE00 (sub_14057BE00.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x14041C160 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_14057B748(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // edi
  _BYTE *v6; // rax
  ULONG NewProtect; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  __int64 MemoryDescriptorList; // [rsp+48h] [rbp-60h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+50h] [rbp-58h]
  __int16 MemoryDescriptorList_10; // [rsp+52h] [rbp-56h]
  _DWORD MemoryDescriptorList_12[5]; // [rsp+54h] [rbp-54h] BYREF
  unsigned __int64 MemoryDescriptorList_32; // [rsp+68h] [rbp-40h]
  int MemoryDescriptorList_40; // [rsp+70h] [rbp-38h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+74h] [rbp-34h]

  memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
  *(_QWORD *)&MemoryDescriptorList_44[4] = 0LL;
  NewProtect = 0;
  BaseAddress = (PVOID)a2;
  RegionSize = 1LL;
  ExAcquireFastMutex(&stru_140C2A7E0);
  v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x40u, &NewProtect);
  if ( v5 >= 0 )
  {
    memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
    *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
    MemoryDescriptorList = 0LL;
    MemoryDescriptorList_8 = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4096) >> 12) + 6);
    MemoryDescriptorList_10 = 0;
    MemoryDescriptorList_32 = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)MemoryDescriptorList_44 = a2 & 0xFFF;
    MemoryDescriptorList_40 = 1;
    v5 = 0;
    sub_14029C5B0(&MemoryDescriptorList, 1, 1);
    if ( (MemoryDescriptorList_10 & 5) != 0 )
      v6 = *(_BYTE **)&MemoryDescriptorList_12[3];
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      *v6 = a3;
    else
      v5 = -1073741670;
    MmUnlockPages((PMDL)&MemoryDescriptorList);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  }
  KeReleaseGuardedMutex(&stru_140C2A7E0);
  return (unsigned int)v5;
}
