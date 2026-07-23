/*
 * XREFs of KiRestoreThreadIptState @ 0x140573220
 * Callers:
 *     SwapContext @ 0x140428750 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x14057304C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x140573120 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
