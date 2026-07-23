/*
 * XREFs of AslStringDuplicate @ 0x1406D4A28
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D4870 (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075946C (AslpFileMakeStringVersionAttributes.c)
 *     AslFileMappingCreateFromImageView @ 0x140848D80 (AslFileMappingCreateFromImageView.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FDAC (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x140A54584 (AslRegistryGetString.c)
 *     AslPathToSystemPath @ 0x140A555D8 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x140A56568 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  size_t v5; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF
  size_t v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  pullResult = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v10);
  if ( v4 < 0 )
  {
LABEL_15:
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  v5 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v4 = -1073741675;
    goto LABEL_15;
  }
  v4 = RtlULongLongMult(v10 + 1, 2uLL, &pullResult);
  if ( v4 < 0 )
    goto LABEL_15;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, 1953517633LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  memset(Pool2, 0, pullResult);
  v4 = RtlStringCchCopyW(v7, v5, a2);
  if ( v4 < 0 )
  {
    AslLogCallPrintf(1LL);
    ExFreePoolWithTag(v7, 0x74705041u);
    return (unsigned int)v4;
  }
  *a1 = v7;
  return 0;
}
