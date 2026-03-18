/*
 * XREFs of WbAlloc @ 0x140763988
 * Callers:
 *     WbHashData @ 0x140761DC0 (WbHashData.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     WbDispatchOperation @ 0x140763418 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1407A513C (WbAllocateMemoryBlock.c)
 *     sub_1407D20A4 @ 0x1407D20A4 (sub_1407D20A4.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1407D260C (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1407D28F8 (WbInitializeEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x1407E04BC (WbProcessModuleUnload.c)
 *     WbReAlloc @ 0x1407E510C (WbReAlloc.c)
 *     WbCreateWarbirdProcess @ 0x1407E769C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1407E77E0 (WbProcessStartup.c)
 *     sub_1407E98BC @ 0x1407E98BC (sub_1407E98BC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WbAlloc(unsigned int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  Pool2 = 0LL;
  if ( a1 && (Pool2 = (void *)ExAllocatePool2(256LL, a1, 1112686935LL)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else if ( a2 )
  {
    *a2 = Pool2;
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
  }
  return v2;
}
