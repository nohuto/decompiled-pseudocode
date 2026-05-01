/*
 * XREFs of AslStringDuplicate @ 0x18009E710
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180096B70 (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x180096C80 (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180096D70 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180096EC0 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x18009A330 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringReplace @ 0x18009E99C (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009EBC4 (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x1800A2924 (AslpFileVerQueryBlock.c)
 *     AslRegWildcardFindFirst @ 0x1800A554C (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     RtlULongLongMult @ 0x180099A34 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x18009EFB8 (RtlStringCchLengthW.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  _WORD *Heap; // rax
  void *v7; // rbp
  SIZE_T Size; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &Size);
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = Size + 1;
  if ( Size + 1 < Size )
  {
    v4 = -1073741675;
    goto LABEL_12;
  }
  v4 = RtlULongLongMult(Size + 1, 2uLL, &Size);
  if ( v4 < 0 )
  {
LABEL_12:
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
  v7 = Heap;
  if ( !Heap )
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  v4 = RtlStringCchCopyW(Heap, v5, a2);
  if ( v4 < 0 )
  {
    AslLogCallPrintf(1LL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return (unsigned int)v4;
  }
  *a1 = v7;
  return 0;
}
