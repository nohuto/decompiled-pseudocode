/*
 * XREFs of VmProbeAndLockPages @ 0x1405F9130
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061D938 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

__int64 __fastcall VmProbeAndLockPages(PMDL MemoryDescriptorList, char a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 ByteCount; // r8
  char *v7; // rdx
  char *v8; // rax
  char *v9; // rax

  v5 = 0;
  if ( a2 || a3 > 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ByteCount = MemoryDescriptorList->ByteCount;
    v7 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    v8 = &v7[ByteCount - 1];
    if ( !(_DWORD)ByteCount )
      v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    if ( v8 < v7 )
      return (unsigned int)-1073741637;
    v9 = &v7[ByteCount - 1];
    if ( !(_DWORD)ByteCount )
      v9 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    if ( (unsigned __int64)v9 > 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741637;
    MiProbeAndLockPages((__int64)MemoryDescriptorList, 0, a3 != 0);
    if ( (MemoryDescriptorList->MdlFlags & 0xFFFFFF77) != 0x102 )
    {
      MmUnlockPages(MemoryDescriptorList);
      return (unsigned int)-1073741637;
    }
    MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)MemoryDescriptorList);
  }
  return v5;
}
