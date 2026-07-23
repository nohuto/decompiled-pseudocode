/*
 * XREFs of HalpIrtExtendRemappingRange @ 0x14085E1AC
 * Callers:
 *     HalpIrtAllocateIndex @ 0x14081E568 (HalpIrtAllocateIndex.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085E0C8 (HalpInitializeInterruptRemappingBspLate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     RtlClearAllBits @ 0x140290FE0 (RtlClearAllBits.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpIrtExtendRemappingRange(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int *Pool2; // rbp
  char v4; // si
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( a1 >= 0x20 || a1 && (HalpIrtAllocationFlags & 8) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4 * ((unsigned int)(HalpIrtEntriesPerRange + 31) >> 5), 1768710472LL);
    if ( Pool2 )
    {
      BitMapHeader.SizeOfBitMap = HalpIrtEntriesPerRange;
      v4 = 1;
      BitMapHeader.Buffer = Pool2;
      RtlClearAllBits(&BitMapHeader);
      ExAcquireFastMutex(&HalpIrtLock);
      if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v2) )
      {
        ++HalpIrtAllocatedRanges;
        v4 = 0;
        *(&HalpIrtRanges + v2) = BitMapHeader;
      }
      ExReleaseFastMutex(&HalpIrtLock);
      if ( v4 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
