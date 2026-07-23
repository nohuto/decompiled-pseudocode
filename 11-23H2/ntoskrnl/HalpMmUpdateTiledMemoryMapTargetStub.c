/*
 * XREFs of HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051BA98
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 *     HalpBuildResumeStructures @ 0x140A95D68 (HalpBuildResumeStructures.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x140335C40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 */

__int64 HalpMmUpdateTiledMemoryMapTargetStub()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( HalpTargetStubPtePa )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(HalpTargetStubPtePa, 8LL, 4u);
    if ( v1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HalpLMStub);
      if ( PhysicalAddress.QuadPart )
        *v1 ^= (*v1 ^ PhysicalAddress.QuadPart) & 0xFFFFFFFFFF000LL;
      else
        v0 = -1073741823;
      MmUnmapIoSpace(v1, 8uLL);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
