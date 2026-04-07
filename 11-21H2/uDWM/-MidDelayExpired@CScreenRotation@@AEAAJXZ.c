/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D2C10 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D26C8 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // rsi
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rax
  int started; // eax
  __int64 v12; // r8
  void *v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-50h]
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-30h]
  unsigned int v18; // [rsp+44h] [rbp-2Ch]
  unsigned int v19; // [rsp+48h] [rbp-28h]
  _QWORD v20[2]; // [rsp+50h] [rbp-20h] BYREF

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual((struct CAnimatedTransitionVisual **)this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x166u);
    goto LABEL_29;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v20[0] = *((_QWORD *)this + 40);
    v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, v20);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xC0u);
      v15 = 362;
LABEL_8:
      v5 = v3;
      goto LABEL_9;
    }
    v6 = *((_QWORD *)this + 40);
    *(_DWORD *)(v6 + 736) = 76;
    *(_DWORD *)(v6 + 740) = 2;
    v7 = *((_QWORD *)this + 41);
    v20[0] = v7;
    v8 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v3 = -2147024362;
      v9 = 181;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v9);
      v15 = 365;
      goto LABEL_8;
    }
    if ( v8 > v18 )
    {
      v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, v20);
      if ( v3 < 0 )
      {
        v9 = 192;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(v16 + 8LL * v19) = v7;
      v19 = v8;
    }
    v10 = *((_QWORD *)this + 41);
    *(_DWORD *)(v10 + 736) = 76;
    *(_DWORD *)(v10 + 740) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v16, (unsigned int *)this + 92);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                  v4,
                  (struct IAnimationListener *)(((unsigned __int64)this + 288) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 388) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v13 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v13 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v13,
          v12,
          1,
          (__int64)v20);
        goto LABEL_28;
      }
      v15 = 371;
    }
    else
    {
      v15 = 370;
    }
    v5 = started;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v15);
LABEL_28:
    CAnimationEngine::Release(v4);
    goto LABEL_29;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x168u);
LABEL_29:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  return (unsigned int)v3;
}
