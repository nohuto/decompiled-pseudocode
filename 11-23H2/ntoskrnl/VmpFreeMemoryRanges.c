/*
 * XREFs of VmpFreeMemoryRanges @ 0x1409DD1AC
 * Callers:
 *     VmpInsertMemoryRange @ 0x1405F938C (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405F9FC4 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405FACF4 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB0B0 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1409DC4E0 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x1409DC770 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x1409DCFB4 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall VmpFreeMemoryRanges(char *P)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(P + 40);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}
