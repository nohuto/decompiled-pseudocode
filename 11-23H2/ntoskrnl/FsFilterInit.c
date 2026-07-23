/*
 * XREFs of FsFilterInit @ 0x1403A9640
 * Callers:
 *     FsRtlInitSystem @ 0x140B68494 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = (PVOID)ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_140C5F682 = 6;
  AcquireOpsEvent = 1;
  qword_140C5F690 = (__int64)&qword_140C5F688;
  qword_140C5F688 = (__int64)&qword_140C5F688;
  qword_140C5F670 = (__int64)&qword_140C5F668;
  qword_140C5F668 = (__int64)&qword_140C5F668;
  result = v0;
  dword_140C5F684 = 1;
  ReleaseOpsEvent = 1;
  byte_140C5F662 = 6;
  dword_140C5F664 = 1;
  return result;
}
