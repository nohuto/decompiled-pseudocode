/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180017860
 * Callers:
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x1800184AC (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18002F234 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v2; // xmm6_4

  v2 = FLOAT_1_0;
  if ( !TsSessionIdIsAudioInStandbyAllowed(*((_DWORD *)this + 41)) && (!g_bIsAoAcSystem || !*((_DWORD *)this + 106)) )
    return 0.0;
  return v2;
}
