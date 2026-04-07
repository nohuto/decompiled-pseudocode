/*
 * XREFs of ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D3950 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenRotation::PreDelayExpired(CScreenRotation *this)
{
  LONG v2; // edx
  LONG v3; // ecx
  CAnimationEngine *v4; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r9d
  __int64 v8; // rax
  int started; // eax
  __int64 v10; // r8
  char v11; // al
  void *v12; // rdx
  void *v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  int v18; // [rsp+48h] [rbp-40h]
  struct tagSIZE v19; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  *((_DWORD *)this + 86) = (int)*((double *)this + 21);
  *(_QWORD *)((char *)this + 356) = *((_QWORD *)this + 15);
  v19 = 0LL;
  CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&v19);
  CVisual::SetRotation(this, 0.0);
  v2 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  if ( v3 < 0 )
    v3 = 0;
  v19.cx = v3;
  if ( v2 < 0 )
    v2 = 0;
  v19.cy = v2;
  CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v19, 0);
  *((_BYTE *)this + 339) = 1;
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v19 = (struct tagSIZE)*((_QWORD *)this + 40);
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, &v19);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC0u);
      v15 = 402;
      v7 = v5;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v15);
LABEL_27:
      CAnimationEngine::Release(v4);
      goto LABEL_28;
    }
    v8 = *((_QWORD *)this + 40);
    *(_DWORD *)(v8 + 736) = 76;
    *(_DWORD *)(v8 + 740) = 1;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v16, (unsigned int *)this + 91);
    v5 = started;
    if ( started < 0 )
    {
      v15 = 407;
LABEL_12:
      v7 = started;
      goto LABEL_9;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                v4,
                (struct IAnimationListener *)(((unsigned __int64)this + 288) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v5 = started;
    if ( started < 0 )
    {
      v15 = 408;
      goto LABEL_12;
    }
    v11 = Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( *((_BYTE *)this + 388) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_21;
      v12 = &UdwmHardwareExpression_Animation_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_21;
      v12 = &UdwmScreenRotation_Animation_Start;
    }
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)v12,
      v10,
      1,
      (__int64)&v19);
    v11 = Microsoft_Windows_Dwm_UdwmEnableBits;
LABEL_21:
    if ( *((_BYTE *)this + 388) )
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_27;
      v13 = &UdwmHardwareExpression_PreDelayAnimation_Start;
    }
    else
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_27;
      v13 = &UdwmScreenRotation_PreDelayAnimation_Start;
    }
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)v13,
      v10,
      1,
      (__int64)&v19);
    goto LABEL_27;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x190u);
LABEL_28:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  return v5;
}
