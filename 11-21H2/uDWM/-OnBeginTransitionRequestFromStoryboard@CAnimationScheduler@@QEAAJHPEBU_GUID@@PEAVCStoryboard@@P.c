/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48
 * Callers:
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D78A0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x1801067CC (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003FC04 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800A7650 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x1800A7E3C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x1800A8024 (McTemplateU0d_EtwEventWriteTransfer.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800D506C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800D8C18 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
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
  __int64 *v11; // r9
  __int64 *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  CAnimationScheduler *v19; // rcx
  const struct _GUID *v20; // r8
  unsigned int v22; // [rsp+20h] [rbp-40h]
  struct CStoryboard *v23; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d_EtwEventWriteTransfer(v8, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v23 = 0LL;
  v9 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  v10 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 2);
    v12 = v11;
    while ( 1 )
    {
      v13 = *v12;
      if ( *(_DWORD *)(*v12 + 72) == a2 )
      {
        v25 = *(_OWORD *)(v13 + 32);
        v14 = v25 - *(_QWORD *)&GUID_NULL.Data1;
        if ( (_QWORD)v25 == *(_QWORD *)&GUID_NULL.Data1 )
          v14 = *((_QWORD *)&v25 + 1) - *(_QWORD *)GUID_NULL.Data4;
        if ( !v14 && !*(_DWORD *)(v13 + 24) )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v12;
      if ( (unsigned int)v10 >= *((_DWORD *)this + 10) )
        goto LABEL_13;
    }
    v23 = (struct CStoryboard *)v11[v10];
    _InterlockedAdd((volatile signed __int32 *)v23 + 2, 1u);
    v9 = 0;
  }
LABEL_13:
  if ( v23 )
  {
    if ( v9 < 0 )
      goto LABEL_40;
  }
  else
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v9 = -2147024809;
      goto LABEL_42;
    }
    v15 = CStoryboardFactory::Create(a2, a4, &v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      v22 = 215;
      goto LABEL_17;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v23 + 24LL))(v23) )
    {
      v16 = *((_DWORD *)this + 10);
      v17 = v16 + 1;
      if ( v16 + 1 < v16 )
      {
        v9 = -2147024362;
        v18 = 181;
LABEL_27:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v18);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122184, 1LL, v9, 0xE2u);
        goto LABEL_40;
      }
      if ( v17 > *((_DWORD *)this + 9) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v23);
        if ( v9 < 0 )
        {
          v18 = 192;
          goto LABEL_27;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v23;
        *((_DWORD *)this + 10) = v17;
      }
      _InterlockedAdd((volatile signed __int32 *)v23 + 2, 1u);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v23 + 24LL))(v23) )
  {
    v9 = -2147024809;
    goto LABEL_40;
  }
  if ( !CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v23) )
  {
    CStoryboard::Abandon(v23);
    v9 = -2147467259;
    goto LABEL_40;
  }
  v15 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v23 + 88LL))(v23);
  v9 = v15;
  if ( v15 >= 0 )
  {
    CStoryboard::SetParentStoryboard(v23, a4);
    v15 = CTransitionVisualController::RemoveTargetsForStoryboard(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
            v23,
            0,
            0);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v15 = CAnimationScheduler::_OnBeginAnimationClock(v19, v23, v20, a5);
      v9 = v15;
      if ( v15 >= 0 )
        goto LABEL_40;
      v22 = 257;
    }
    else
    {
      v22 = 254;
    }
  }
  else
  {
    v22 = 250;
  }
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122184, 1LL, v15, v22);
LABEL_40:
  if ( v23 )
  {
    CStoryboard::Release(v23);
    v23 = 0LL;
  }
LABEL_42:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return (unsigned int)v9;
}
