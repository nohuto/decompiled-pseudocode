/*
 * XREFs of MiIsStoreProcess @ 0x140216D94
 * Callers:
 *     MiProcessSuitableForCombining @ 0x140216D54 (MiProcessSuitableForCombining.c)
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     MiCheckFatalAccessViolation @ 0x1403688FC (MiCheckFatalAccessViolation.c)
 *     MiOrderTrimList @ 0x14046C0EE (MiOrderTrimList.c)
 *     MiStoreCheckCandidatePage @ 0x14046DA40 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiCloneProcessAddressSpace @ 0x140A48C04 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1192) )
  {
    if ( *(_QWORD *)(v1 + 1344) == a1 )
      return 1LL;
  }
  return result;
}
