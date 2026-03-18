/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C01A6A7C
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C005EB24 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01A7B2C (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdx
  char **v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx

  while ( 1 )
  {
    result = rimFindHoldingFrame(a1, a2);
    v7 = (char *)result;
    if ( !result )
      break;
    rimReclaimHoldingFrame(v6, v5, result);
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (char **)*((_QWORD *)v7 + 1), *v9 != v7) )
      __fastfail(3u);
    v10 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    NSInstrumentation::CLeakTrackingAllocator::Free(v10, v7);
  }
  return result;
}
