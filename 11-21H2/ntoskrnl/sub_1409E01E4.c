/*
 * XREFs of sub_1409E01E4 @ 0x1409E01E4
 * Callers:
 *     sub_1409E1C60 @ 0x1409E1C60 (sub_1409E1C60.c)
 *     sub_1409E1DB8 @ 0x1409E1DB8 (sub_1409E1DB8.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E01E4(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  _QWORD *Pool2; // rbx
  __int64 v5; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8 * MaximumProcessorCount + 24, 1484223557LL);
  if ( !Pool2 )
    return 3221225495LL;
  v5 = ExAllocatePool2(64LL, 4LL * *(unsigned int *)((char *)&NlsMbCodePageTag + 5), 1484223557LL);
  *Pool2 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1016) = Pool2;
  return 0LL;
}
