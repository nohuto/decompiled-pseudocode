/*
 * XREFs of KiRestoreThreadIptState @ 0x140572CE0
 * Callers:
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x140572B0C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x140572BE0 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
