/*
 * XREFs of BiGetSystemPartition @ 0x14080488C
 * Callers:
 *     BcdGetSystemStorePath @ 0x1408056F0 (BcdGetSystemStorePath.c)
 * Callees:
 *     SyspartGetFirmwarePartition @ 0x140804918 (SyspartGetFirmwarePartition.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  void *Pool2; // rax
  void *v5; // rdi

  FirmwarePartition = SyspartGetFirmwarePartition(0LL);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(258LL, 0LL, 1262764866LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      v3 = SyspartGetFirmwarePartition(Pool2);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( FirmwarePartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
