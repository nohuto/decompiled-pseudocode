/*
 * XREFs of MmAllocateUserStack @ 0x140774584
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1950 (PspReserveAndCommitUserShadowStack.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6C30 (MiAllocateVirtualMemoryCommon.c)
 */

__int64 __fastcall MmAllocateUserStack(__int64 *a1, int a2, __int64 *a3, int a4, int a5)
{
  int v9; // ecx
  _DWORD v11[20]; // [rsp+60h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  v11[8] = a4;
  v9 = a5 != 0 ? -1073741824 : 0x80000000;
  if ( (v9 & 0x40000000) == 0 || (MiFlags & 0x1000000) != 0 )
    return MiAllocateVirtualMemoryCommon(-1, a1, a2, a3, 0x2000, a5 != 0 ? 2 : 4, (__int64)v11, 0, v9, 0, 0LL);
  else
    return 3221225659LL;
}
