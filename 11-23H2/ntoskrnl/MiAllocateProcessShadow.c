/*
 * XREFs of MiAllocateProcessShadow @ 0x1407062BC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D358 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x14021B51C (MiMarkPfnTradable.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     KeMakeUserDirectoryTableBase @ 0x140291CC8 (KeMakeUserDirectoryTableBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1406615BC (MiReleaseNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C69940, 1u);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x220000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
