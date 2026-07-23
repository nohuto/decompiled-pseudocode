/*
 * XREFs of CmpAllocateUnitOfWork @ 0x1407D3770
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 CmpAllocateUnitOfWork()
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, 120LL, 2002079043LL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 56) = 0LL;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 15;
  }
  return result;
}
