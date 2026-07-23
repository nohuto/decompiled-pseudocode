/*
 * XREFs of sub_1406928FC @ 0x1406928FC
 * Callers:
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 */

__int64 __fastcall sub_1406928FC(unsigned __int64 *a1)
{
  __int64 CurrentSilo; // rbx
  __int64 HostSilo; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentSilo = PsGetCurrentSilo();
  HostSilo = PsGetHostSilo();
  if ( CurrentSilo == HostSilo )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, dword_140C48D10, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo, v5, v6, v7);
    if ( CurrentSilo == HostSilo )
      return 0LL;
  }
  return 1LL;
}
