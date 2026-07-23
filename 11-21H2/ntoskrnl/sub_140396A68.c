/*
 * XREFs of sub_140396A68 @ 0x140396A68
 * Callers:
 *     sub_140A522B8 @ 0x140A522B8 (sub_140A522B8.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

__int64 sub_140396A68()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( qword_140C4ACA0 )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(qword_140C4ACA0, 4096LL, 4u);
    if ( v1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(qword_14041B0E0);
      if ( PhysicalAddress.QuadPart )
        *v1 ^= (PhysicalAddress.QuadPart ^ *v1) & 0xFFFFFFFFFF000LL;
      else
        v0 = -1073741823;
      MmUnmapVideoDisplay(v1, 0x1000uLL);
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
