/*
 * XREFs of HalpIrtExtendApertureRange @ 0x1409349F0
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x1409348A0 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 HalpIrtExtendApertureRange()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  void *Pool2; // rsi
  bool v3; // di
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v0 = HalpIrtAperturesPerRange;
  v1 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(32 * HalpIrtAperturesPerRange), 1768710472LL);
  v3 = Pool2 != 0LL;
  ExAcquireFastMutex(&HalpIrtLock);
  v4 = HalpIrtAllocatedApertures;
  v5 = HalpIrtAllocatedApertures + v0;
  if ( HalpIrtAllocatedApertures + v0 <= HalpIrtAperturesPerRange || (HalpIrtAllocationFlags & 8) != 0 )
  {
    if ( v5 <= HalpIrtTotalApertures )
    {
      if ( Pool2 )
      {
        for ( i = 0; i < v0; qword_140C60FD8 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140C60FD8;
          if ( *(__int64 **)qword_140C60FD8 != &HalpIrtFreeDeviceAperturesHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &HalpIrtFreeDeviceAperturesHead;
          ++i;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
        }
        HalpIrtAllocatedApertures = v5;
        v3 = 0;
      }
      else
      {
        v1 = -1073741670;
      }
    }
  }
  else
  {
    v1 = -1073741637;
  }
  ExReleaseFastMutex(&HalpIrtLock);
  if ( v3 )
    ExFreePoolWithTag(Pool2, 0);
  return v1;
}
