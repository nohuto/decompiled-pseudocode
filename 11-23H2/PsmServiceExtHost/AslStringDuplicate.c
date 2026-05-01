/*
 * XREFs of AslStringDuplicate @ 0x180098DC8
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180051E70 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslRegistryGetString @ 0x180052FD0 (AslRegistryGetString.c)
 *     AslPathToSystemPath @ 0x18005326C (AslPathToSystemPath.c)
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x18009193C (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x180091A4C (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180091B48 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091C98 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095090 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringReplace @ 0x180099054 (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009927C (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x18009CFD4 (AslpFileVerQueryBlock.c)
 *     AslRegWildcardFindFirst @ 0x18009EF24 (AslRegWildcardFindFirst.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchLengthW @ 0x18008FCD8 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x180094794 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(unsigned __int16 **a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  int v8; // r8d
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v10; // rbp
  int v11; // eax
  int v13; // [rsp+20h] [rbp-28h]
  SIZE_T Size; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( a2 )
  {
    v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &Size);
    v4 = v5;
    if ( v5 < 0 )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslStringDuplicate",
        574,
        (unsigned int)"RtlStringCchLengthW failed [%x]",
        v5);
      return v4;
    }
    v6 = Size + 1;
    if ( Size + 1 < Size )
    {
      v4 = -1073741675;
      v8 = 585;
      v13 = -1073741675;
    }
    else
    {
      v7 = RtlULongLongMult(Size + 1, 2uLL, &Size);
      v4 = v7;
      if ( v7 >= 0 )
      {
        Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
        v10 = Heap;
        if ( !Heap )
        {
          v4 = -1073741801;
          AslLogCallPrintf(1LL, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"Out of memory");
          return v4;
        }
        v11 = RtlStringCchCopyW(Heap, v6, a2);
        v4 = v11;
        if ( v11 < 0 )
        {
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslStringDuplicate",
            608,
            (unsigned int)"RtlStringCchCopyW failed [%x]",
            v11);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
          return v4;
        }
        *a1 = v10;
        return 0;
      }
      v13 = v7;
      v8 = 591;
    }
    AslLogCallPrintf(1LL, (unsigned int)"AslStringDuplicate", v8, (unsigned int)"SIZE_T arithmetic failed [%x]", v13);
    return v4;
  }
  return 0;
}
