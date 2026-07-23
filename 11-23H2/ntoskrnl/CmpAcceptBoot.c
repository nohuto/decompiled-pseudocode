/*
 * XREFs of CmpAcceptBoot @ 0x1407E8FA8
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8F00 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x14036BFFC (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403B31B4 (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085DD74 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v4; // di

  KvfCommitFeatureStates();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v4 = a1 - 4096;
      if ( v4 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v2 = CmpSaveBootControlSet(v4);
        off_140C02178[0]();
        CmpUpdatePhaseAccessBit();
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return v2;
}
