/*
 * XREFs of ViPtInitCircularPoolTrace @ 0x140A9DD9C
 * Callers:
 *     VfPoolTrackingEntry @ 0x140601DB0 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExSetPoolFlags @ 0x14063B338 (ExSetPoolFlags.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406AD260 (MmGetNumberOfPhysicalPages.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 ViPtInitCircularPoolTrace()
{
  unsigned int v0; // ebx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  int v2; // edx
  int v3; // eax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v0 = 0;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  v2 = 0x10000;
  v3 = VfPoolTracesLength;
  v4 = NumberOfPhysicalPages >> 18;
  if ( (unsigned int)VfPoolTracesLength <= 0x10000 )
  {
    if ( (unsigned int)v4 > 4 )
    {
      if ( (unsigned int)v4 > 0x10 )
      {
        v3 = 0x80000;
        goto LABEL_14;
      }
      v5 = (unsigned __int64)(unsigned int)v4 >> 2;
      do
      {
        v2 *= 2;
        --v5;
      }
      while ( v5 );
    }
    v3 = v2;
    goto LABEL_14;
  }
  v6 = 0x800000;
  if ( (unsigned int)VfPoolTracesLength > 0x800000 )
  {
    v3 = 0x800000;
    VfPoolTracesLength = 0x800000;
    goto LABEL_15;
  }
  while ( (v6 & VfPoolTracesLength) == 0 )
  {
    v6 >>= 1;
    if ( v6 < 0x10000 )
      goto LABEL_15;
  }
  v3 = v6 & VfPoolTracesLength;
LABEL_14:
  VfPoolTracesLength = v3;
LABEL_15:
  VfPoolTraces = (PVOID)ExAllocatePool3(64LL, (unsigned int)(424 * v3), 0x6E496956u, (__int64)&VfExtendedParameters, 1u);
  if ( VfPoolTraces )
    ExSetPoolFlags(0x10u);
  else
    return (unsigned int)-1073741801;
  return v0;
}
