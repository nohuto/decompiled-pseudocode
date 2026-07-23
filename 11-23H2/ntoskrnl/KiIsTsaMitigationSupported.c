/*
 * XREFs of KiIsTsaMitigationSupported @ 0x140410E10
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140410C54 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579778 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  int v2; // ebx
  _QWORD *i; // rcx

  v2 = 0;
  if ( (unsigned int)KiIsHyperVCr3RspErrataPresent() )
    return 0LL;
  if ( _bittest64((const signed __int64 *)&KeFeatureBits2, 0x2Cu) )
    return 1LL;
  if ( HviIsAnyHypervisorPresent() )
    return 0LL;
  for ( i = &KiVerwClearErrataVersions; *(_DWORD *)i != *(_DWORD *)(a1 + 1736); i += 2 )
  {
    if ( (unsigned int)++v2 >= 0xF )
      return 1LL;
  }
  return *(_QWORD *)(a1 + 35240) >= i[1];
}
