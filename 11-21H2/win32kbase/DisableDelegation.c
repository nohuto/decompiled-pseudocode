/*
 * XREFs of DisableDelegation @ 0x1C00BB460
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C009DE40 (SetInputDelegationModeImpl.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DBA00 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

void __fastcall DisableDelegation(CCursorClip *a1)
{
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
}
