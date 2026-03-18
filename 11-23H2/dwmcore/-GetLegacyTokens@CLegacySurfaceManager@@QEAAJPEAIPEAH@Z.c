/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18012FF4E
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002EB70 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180042C70 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(CLegacySurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int FrameLegacyTokens; // eax
  __int64 v7; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&CurrentFrameId, v4, v5);
  if ( FrameLegacyTokens < 0 )
  {
    v3 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory);
  return v3;
}
