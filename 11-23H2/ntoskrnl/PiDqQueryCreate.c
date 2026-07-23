/*
 * XREFs of PiDqQueryCreate @ 0x1407F9354
 * Callers:
 *     PiDqDispatch @ 0x1407F9130 (PiDqDispatch.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryCreate(char a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  __int64 v6; // rbx
  signed __int64 v7; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 232LL, 1483763280LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 212) = 1;
    v7 = _InterlockedIncrement64(&PiDqSequenceNumber);
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 224) = v7;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v6 + 72),
      (PRTL_AVL_COMPARE_ROUTINE)PiDqCompareAddresses,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiDqAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiDqFreeGenericTableEntry,
      0LL);
    *(_QWORD *)(v6 + 200) = v6 + 192;
    *(_QWORD *)(v6 + 192) = v6 + 192;
    if ( a1 )
      *(_DWORD *)(v6 + 216) |= 2u;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v6 + 32));
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
