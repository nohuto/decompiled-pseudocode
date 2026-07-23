/*
 * XREFs of LdrpUnmapModule @ 0x18007A514
 * Callers:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x18007A558 (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall LdrpUnmapModule(__int64 a1)
{
  void *v1; // rdx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
    {
      RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
      v1 = *(void **)(a1 + 48);
    }
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
