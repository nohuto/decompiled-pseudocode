/*
 * XREFs of KiOpPatchCode @ 0x14057F8F0
 * Callers:
 *     KiOp_MOVAPS @ 0x14057FF20 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x14057FFA0 (KiOp_MOVDQA.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x14041BAF0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
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
  ExAcquireFastMutex(&KiUserCodePatchMutex);
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
    MiProbeAndLockPages((__int64)&MemoryDescriptorList, 1, 1);
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
  ExReleaseFastMutex(&KiUserCodePatchMutex);
  return (unsigned int)v5;
}
