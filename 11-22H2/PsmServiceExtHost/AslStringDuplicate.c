/*
 * XREFs of AslStringDuplicate @ 0x180099128
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslRegistryGetString @ 0x1800531D0 (AslRegistryGetString.c)
 *     AslPathToSystemPath @ 0x18005346C (AslPathToSystemPath.c)
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180091C9C (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x180091DAC (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180091EA8 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091FF8 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1800953F0 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringReplace @ 0x1800993B4 (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x1800995DC (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x1800999F8 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x18009D334 (AslpFileVerQueryBlock.c)
 *     AslRegWildcardFindFirst @ 0x18009F294 (AslRegWildcardFindFirst.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchLengthW @ 0x180090038 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x180094AF4 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
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
