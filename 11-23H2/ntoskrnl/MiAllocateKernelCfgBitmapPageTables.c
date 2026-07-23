/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x140A440FC
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B280 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiAcquireKernelCfgLock @ 0x140A44098 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x140A44364 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  int PteAddress; // eax
  int v8; // edx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140C65830 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v6);
  v9 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 9) )
    v9 = -1073741670;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
