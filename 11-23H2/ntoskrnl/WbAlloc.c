/*
 * XREFs of WbAlloc @ 0x140763B78
 * Callers:
 *     WbHashData @ 0x140761FB0 (WbHashData.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     WbDispatchOperation @ 0x140763608 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1407A532C (WbAllocateMemoryBlock.c)
 *     sub_1407D2374 @ 0x1407D2374 (sub_1407D2374.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1407D28DC (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2BC8 (WbInitializeEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x1407E078C (WbProcessModuleUnload.c)
 *     WbReAlloc @ 0x1407E53DC (WbReAlloc.c)
 *     WbCreateWarbirdProcess @ 0x1407E796C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1407E7AB0 (WbProcessStartup.c)
 *     sub_1407E9B8C @ 0x1407E9B8C (sub_1407E9B8C.c)
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
