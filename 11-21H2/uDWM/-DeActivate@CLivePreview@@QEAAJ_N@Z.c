/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18005CAA0
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18005CA20 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800B0180 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18005F908 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B06E4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C2430 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C41C0 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800C4510 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C58C8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 */

__int64 __fastcall CLivePreview::DeActivate(CLivePreview *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  int v9; // eax
  int v10; // r9d
  bool v11; // zf
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  GetDesktopID(1LL, &v16);
  if ( !*((_BYTE *)this + 288) )
    goto LABEL_2;
  if ( *((_DWORD *)this + 84) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmLivePreviewAnimation_Start,
        v5,
        1,
        (__int64)v17);
    NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 75), 0, 0);
  }
  v9 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
  v4 = v9;
  if ( v9 < 0 )
  {
    v15 = 1043;
LABEL_10:
    v10 = v9;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v15);
    goto LABEL_2;
  }
  v11 = *((_BYTE *)this + 290) == 0;
  *((_BYTE *)this + 289) = 1;
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 70);
    if ( v12 && *(_BYTE *)(v12 + 56) && ((*((_QWORD *)this + 67) - *((_QWORD *)this + 66)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      CLivePreview::_AnimateOpaqueVisuals(this);
  }
  else
  {
    v9 = CLivePreview::_RemoveLauncherClones(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      v15 = 1050;
      goto LABEL_10;
    }
  }
  *((_DWORD *)this + 148) = 4;
  CLivePreview::GetAnimationDuration(1LL);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 59));
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v13 = CLivePreview::_HideExistingVisuals(this, 0);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x668u);
    v10 = v4;
    v15 = 1056;
    goto LABEL_12;
  }
  if ( v16 != *((_QWORD *)this + 37) || a2 )
    CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 59));
  *((_BYTE *)this + 288) = 0;
LABEL_2:
  v6 = (__int64 *)*((_QWORD *)this + 66);
  v7 = (__int64 *)*((_QWORD *)this + 67);
  if ( v6 != v7 )
  {
    do
    {
      v14 = *v6++;
      *(_BYTE *)(v14 + 670) &= ~1u;
    }
    while ( v6 != v7 );
    v6 = (__int64 *)*((_QWORD *)this + 66);
  }
  *((_QWORD *)this + 67) = v6;
  return v4;
}
