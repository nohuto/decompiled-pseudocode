/*
 * XREFs of SepInitializationPhase0 @ 0x140B1E170
 * Callers:
 *     SeInitSystem @ 0x140B1E13C (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14070F2D8 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140B1F250 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140B1F300 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140B1F3C0 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140B290EC (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($CCA5BBB6D199B5680204B8CF1C208784 *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].Affinity.StaticBitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] != 0;
}
