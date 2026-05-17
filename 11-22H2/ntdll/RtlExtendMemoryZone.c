/*
 * XREFs of RtlExtendMemoryZone @ 0x1800F5BD0
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x1800F5B50 (RtlExtendMemoryBlockLookaside.c)
 *     RtlpRegisterStackTrace @ 0x180117ED0 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1800A1080 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, __int64 a2)
{
  int VirtualMemory; // edi
  signed __int32 v6[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h]

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  v6[10] = 4;
  v7 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6[8] = 12288;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) && (VirtualMemory = NtLockVirtualMemory(), VirtualMemory < 0) )
    {
      ZwFreeVirtualMemory();
    }
    else
    {
      MEMORY[8] = v7;
      MEMORY[0x10] = 32LL;
      MEMORY[0x18] = v7;
      MEMORY[0] = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v6, 0);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return (unsigned int)VirtualMemory;
}
