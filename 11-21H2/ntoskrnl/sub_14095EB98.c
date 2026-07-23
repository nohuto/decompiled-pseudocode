/*
 * XREFs of sub_14095EB98 @ 0x14095EB98
 * Callers:
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14095EC4C @ 0x14095EC4C (sub_14095EC4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095EB98(PVOID Object, int a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1685089872LL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    sub_14095EC4C(Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
