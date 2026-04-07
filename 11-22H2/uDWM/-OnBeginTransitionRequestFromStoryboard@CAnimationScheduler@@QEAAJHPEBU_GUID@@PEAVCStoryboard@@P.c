/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18000DD18 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800DB580 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18000D588 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x18000DEB0 (McTemplateU0d_EtwEventWriteTransfer.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18000E264 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000F950 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18000F9E0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180041804 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // esi
  CAnimationScheduler *v15; // rcx
  const struct _GUID *v16; // r8
  __int64 *v18; // r9
  __int64 *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-40h]
  struct CStoryboard *v25; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h]

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d_EtwEventWriteTransfer(v8, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v25 = 0LL;
  v9 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  v10 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v18 = (__int64 *)*((_QWORD *)this + 2);
    v19 = v18;
    while ( 1 )
    {
      v20 = *v19;
      if ( *(_DWORD *)(*v19 + 72) == a2 )
      {
        v27 = *(_OWORD *)(v20 + 32);
        v21 = v27 - *(_QWORD *)&GUID_NULL.Data1;
        if ( (_QWORD)v27 == *(_QWORD *)&GUID_NULL.Data1 )
          v21 = *((_QWORD *)&v27 + 1) - *(_QWORD *)GUID_NULL.Data4;
        if ( !v21 && !*(_DWORD *)(v20 + 24) )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v19;
      if ( (unsigned int)v10 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v25 = (struct CStoryboard *)v18[v10];
    _InterlockedAdd((volatile signed __int32 *)v25 + 2, 1u);
    v9 = 0;
  }
LABEL_4:
  if ( v25 )
  {
    if ( v9 < 0 )
      goto LABEL_17;
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 10) > 0xAu )
  {
    v9 = -2147024809;
    goto LABEL_19;
  }
  v11 = CStoryboardFactory::Create(a2, a4, &v25);
  v9 = v11;
  if ( v11 < 0 )
  {
    v24 = 215;
LABEL_33:
    v22 = v11;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801286FC, 1u, v22, v24, 0LL);
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v25 + 24LL))(v25) )
  {
    v12 = *((_DWORD *)this + 10);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v9 = -2147024362;
      v14 = -2147024362;
      v23 = 181;
    }
    else
    {
      if ( v13 <= *((_DWORD *)this + 9) )
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v25;
        *((_DWORD *)this + 10) = v13;
        goto LABEL_11;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v25);
      v9 = v14;
      if ( v14 >= 0 )
      {
LABEL_11:
        _InterlockedAdd((volatile signed __int32 *)v25 + 2, 1u);
        goto LABEL_12;
      }
      v23 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v23, 0LL);
    v24 = 226;
    v22 = v14;
    goto LABEL_36;
  }
LABEL_12:
  if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v25 + 24LL))(v25) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v25) )
    {
      v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v25 + 88LL))(v25);
      v9 = v11;
      if ( v11 < 0 )
      {
        v24 = 250;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v25, a4);
        v11 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                v25,
                0,
                0);
        v9 = v11;
        if ( v11 < 0 )
        {
          v24 = 254;
        }
        else
        {
          v11 = CAnimationScheduler::_OnBeginAnimationClock(v15, v25, v16, a5);
          v9 = v11;
          if ( v11 >= 0 )
            goto LABEL_17;
          v24 = 257;
        }
      }
      goto LABEL_33;
    }
    CStoryboard::Abandon(v25);
    v9 = -2147467259;
  }
  else
  {
    v9 = -2147024809;
  }
LABEL_17:
  if ( v25 )
  {
    CStoryboard::Release(v25);
    v25 = 0LL;
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return (unsigned int)v9;
}
