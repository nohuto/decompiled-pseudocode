/*
 * XREFs of MiIsStoreProcess @ 0x1402365F4
 * Callers:
 *     MiCheckFatalAccessViolation @ 0x14023659C (MiCheckFatalAccessViolation.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiStoreCheckCandidatePage @ 0x14037D5E8 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x140596B14 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x1405B5BA0 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x1405B5EB8 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1176) )
  {
    if ( *(_QWORD *)(v1 + 1296) == a1 )
      return 1LL;
  }
  return result;
}
