/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D75BC
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D7880 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D7A00 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180043970 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180045BF8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D730C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this, __int64 a2, __int64 a3)
{
  int LiveDesktopVisual; // eax
  int v5; // ebx
  CAnimationEngine *v6; // rsi
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rax
  int started; // eax
  __int64 v15; // r8
  void *v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-50h]
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+40h] [rbp-30h]
  unsigned int v21; // [rsp+44h] [rbp-2Ch]
  unsigned int v22; // [rsp+48h] [rbp-28h]
  _QWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF

  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual((struct CAnimatedTransitionVisual **)this, a2, a3);
  v5 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x163u);
    goto LABEL_29;
  }
  v6 = CDesktopManager::AcquireAnimationEngine();
  if ( v6 )
  {
    v23[0] = *((_QWORD *)this + 40);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v19, 8, 1, v23);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
      v18 = 359;
      v7 = v5;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v18);
      goto LABEL_28;
    }
    v8 = *((_QWORD *)this + 40);
    *(_DWORD *)(v8 + 736) = 76;
    *(_DWORD *)(v8 + 740) = 2;
    v9 = *((_QWORD *)this + 41);
    v23[0] = v9;
    v10 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v5 = -2147024362;
      v11 = -2147024362;
      v12 = 181;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v12);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x16Au);
LABEL_28:
      CAnimationEngine::Release(v6);
      goto LABEL_29;
    }
    if ( v10 > v21 )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v19, 8, 1, v23);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 192;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(v19 + 8LL * v22) = v9;
      v22 = v10;
    }
    v13 = *((_QWORD *)this + 41);
    *(_DWORD *)(v13 + 736) = 76;
    *(_DWORD *)(v13 + 740) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v6, 76, (__int64)&v19, (unsigned int *)this + 92);
    v5 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                  v6,
                  (struct IAnimationListener *)(((unsigned __int64)this + 288) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v5 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 388) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v16 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v16 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v16,
          v15,
          1LL,
          (__int64)v23);
        goto LABEL_28;
      }
      v18 = 368;
    }
    else
    {
      v18 = 367;
    }
    v7 = started;
    goto LABEL_8;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x165u);
LABEL_29:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
  return (unsigned int)v5;
}
