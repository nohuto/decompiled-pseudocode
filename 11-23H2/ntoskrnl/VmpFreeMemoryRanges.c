/*
 * XREFs of VmpFreeMemoryRanges @ 0x1409DD3AC
 * Callers:
 *     VmpInsertMemoryRange @ 0x1405F98FC (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405FA534 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405FB264 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB620 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1409DC6E0 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x1409DC970 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x1409DD1B4 (VmpAllocateMemoryRanges.c)
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
