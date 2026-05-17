/*
 * XREFs of LdrpUnmapModule @ 0x180073CDC
 * Callers:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8B60 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180073D20 (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable();
    result = NtUnmapViewOfSection(-1LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
