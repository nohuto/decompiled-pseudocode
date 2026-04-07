/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D25D4
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D31FC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D3410 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  char v6; // al
  void *v7; // rdx
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 296) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v3 = *((_QWORD *)this + 38);
    if ( v3 )
    {
      v4 = (*(_DWORD *)(v3 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 38) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
    v6 = *((_BYTE *)this + 388);
    *((_BYTE *)this + 296) = 0;
    if ( *((_DWORD *)this + 78) == 1 )
    {
      if ( v6 )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v7 = &UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)v7,
            v2,
            1,
            (__int64)v8);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v7 = &UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v7 = &UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v7 = &UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    *((_DWORD *)this + 78) = 0;
  }
}
