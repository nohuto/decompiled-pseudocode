/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180053A14
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180053994 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800B4340 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180048C20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x1800582C4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B48B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C70F0 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C763C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C8B30 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800C8E04 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800CA080 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 */

__int64 __fastcall CLivePreview::DeActivate(CLivePreview *this, char a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 i; // rcx
  int v10; // eax
  int v11; // r9d
  bool v12; // zf
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  GetDesktopID(1LL, &v16, a3);
  if ( !*((_BYTE *)this + 288) )
    goto LABEL_2;
  if ( *((_DWORD *)this + 84) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmLivePreviewAnimation_Start,
        v6,
        1LL,
        (__int64)v17);
    NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 77), 0, 0);
  }
  v10 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
  v5 = v10;
  if ( v10 < 0 )
  {
    v15 = 1022;
LABEL_11:
    v11 = v10;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v15, 0LL);
    goto LABEL_2;
  }
  v12 = *((_BYTE *)this + 290) == 0;
  *((_BYTE *)this + 289) = 1;
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 66);
    if ( v13 && *(_BYTE *)(v13 + 56) && ((*((_QWORD *)this + 63) - *((_QWORD *)this + 62)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      CLivePreview::_AnimateOpaqueVisuals(this);
  }
  else
  {
    v10 = CLivePreview::_RemoveLauncherClones(this);
    v5 = v10;
    if ( v10 < 0 )
    {
      v15 = 1029;
      goto LABEL_11;
    }
  }
  *((_DWORD *)this + 140) = 4;
  CLivePreview::GetAnimationDuration(1LL);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 55));
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v14 = CLivePreview::_HideExistingVisuals(this, 0);
  v5 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x5FBu, 0LL);
    v11 = v5;
    v15 = 1035;
    goto LABEL_13;
  }
  if ( v16 != *((_QWORD *)this + 37) || a2 )
    CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 55));
  *((_BYTE *)this + 288) = 0;
LABEL_2:
  v7 = *((_QWORD *)this + 63);
  for ( i = *((_QWORD *)this + 62); i != v7; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 678LL) &= ~2u;
  *((_QWORD *)this + 63) = *((_QWORD *)this + 62);
  return v5;
}
