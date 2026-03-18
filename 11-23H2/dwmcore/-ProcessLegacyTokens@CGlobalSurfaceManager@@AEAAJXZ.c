/*
 * XREFs of ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002EB70
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18002E9C0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18001ABC0 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z @ 0x18002ECD8 (-ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002EE1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18012FF4E (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessLegacyTokens(CGlobalSurfaceManager *this)
{
  unsigned int v1; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r13d
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // rcx
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v11; // rcx
  unsigned int *v12; // r8
  __int64 v13; // rdi
  int v15; // eax
  int v16; // eax
  int LegacyTokens; // eax
  bool v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v21[2]; // [rsp+40h] [rbp-20h] BYREF

  v1 = 0;
  v3 = 0;
  v21[0] = 0;
  v4 = 0;
  v19 = 0;
  v20 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  v5 = CLegacySurfaceManager::ProcessUnclaimedTokens((CGlobalSurfaceManager *)((char *)this + 152), v21);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE4u, 0LL);
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 62);
    *(_QWORD *)v21 = v9;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v21, &v19, &v20);
    if ( FrameLegacyTokens < 0 )
    {
      v8 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v8,
        v19);
    *((_DWORD *)this + 62) = v8;
    if ( v8 >= 0 )
    {
      while ( 1 )
      {
        v3 += v19;
        v13 = *((_QWORD *)this + 13);
        if ( v19 )
          break;
LABEL_12:
        v1 = 0;
        if ( v20 )
        {
          ++v4;
          LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v11, &v19, &v20);
          *((_DWORD *)this + 62) = LegacyTokens;
          if ( LegacyTokens >= 0 )
            continue;
        }
        goto LABEL_13;
      }
      while ( 1 )
      {
        v18 = 0;
        v15 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 152),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v13,
                v12,
                &v18);
        v7 = v15;
        if ( v15 < 0 )
          break;
        if ( !v18 )
        {
          v16 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CGlobalSurfaceManager *)((char *)this + 152),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v13);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v16, 0xFCu, 0LL);
            goto LABEL_13;
          }
        }
        ++v1;
        v13 += *(unsigned int *)(v13 + 4);
        if ( v1 >= v19 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v15, 0xF7u, 0LL);
    }
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v3,
      v4);
  dword_1803E5A9C += v3;
  return v7;
}
