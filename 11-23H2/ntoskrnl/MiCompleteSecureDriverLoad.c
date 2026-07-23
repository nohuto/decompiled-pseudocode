/*
 * XREFs of MiCompleteSecureDriverLoad @ 0x140885AC8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiFinalizeDriverCfgState @ 0x1407E32F8 (MiFinalizeDriverCfgState.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 *     VslCompleteSecureDriverLoad @ 0x140885B74 (VslCompleteSecureDriverLoad.c)
 *     MiPrepareDriverPatchState @ 0x140A2B8D4 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiCompleteSecureDriverLoad(unsigned __int64 a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ebx
  unsigned __int64 AnyMultiplexedVm; // rax
  _RTL_BITMAP_EX v9[7]; // [rsp+30h] [rbp-78h] BYREF

  memset(v9, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 196);
  v9[0].SizeOfBitMap = a1;
  v4 = v3 & 0x40;
  LODWORD(v9[1].Buffer) = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v5 = v4 != 0 ? 2 : 0;
  if ( !v4
    || ((unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) != 1
      ? (AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(1))
      : (AnyMultiplexedVm = MiGetSessionVm()),
        (v6 = MiPrepareDriverPatchState(v9, AnyMultiplexedVm), v6 >= 0)
     && (v6 = MiLockDriverPageRange((__int64 *)v9, 0, LODWORD(v9[1].Buffer) - 1, 7, 0LL), v6 >= 0)) )
  {
    v6 = VslCompleteSecureDriverLoad(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v5);
    if ( v6 >= 0 )
      v6 = 0;
  }
  MiUnlockDriverPages(v9);
  return (unsigned int)v6;
}
