/*
 * XREFs of CmpAcceptBoot @ 0x1407E9258
 * Callers:
 *     NtInitializeRegistry @ 0x1407E91B0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x14036B80C (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403B2944 (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085DF94 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
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
