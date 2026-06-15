/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180014AC0
 * Callers:
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027980 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18000E710 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  if ( TsSessionIdIsAudioInStandbyAllowed(*((_DWORD *)this + 41)) || g_bIsAoAcSystem && *((_DWORD *)this + 106) )
    return FLOAT_1_0;
  else
    return 0.0;
}
