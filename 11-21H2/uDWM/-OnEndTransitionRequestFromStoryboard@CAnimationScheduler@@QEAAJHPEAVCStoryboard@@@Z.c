/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800A72C4
 * Callers:
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x1800A7260 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D7C10 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003FC04 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800A4D60 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x1800A8024 (McTemplateU0d_EtwEventWriteTransfer.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  struct _GUID v13; // xmm6
  int v14; // r9d
  unsigned __int64 v15; // rax
  struct _GUID v17; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d_EtwEventWriteTransfer(v6, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v7 = -2147467259;
  v8 = *((_DWORD *)this + 10) - 1;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (_QWORD *)(*((_QWORD *)this + 2) + 8LL * v8);
    while ( 1 )
    {
      v11 = *v10;
      if ( !*(_DWORD *)(*v10 + 24LL) && *(_DWORD *)(v11 + 72) == a2 && *(struct CStoryboard **)(v11 + 88) == a3 )
        break;
      --v10;
      if ( --v9 < 0 )
        goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 96LL))(*v10);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122184, 1LL, v12, 0x132u);
LABEL_19:
      if ( *(_DWORD *)(v11 + 72) == a2 && (!*(_DWORD *)(v11 + 24) || !*(_BYTE *)(v11 + 76)) )
        CStoryboard::Abandon((CStoryboard *)v11);
      goto LABEL_23;
    }
    v13 = *(struct _GUID *)(v11 + 48);
    v7 = -2147024809;
    v14 = -2147024809;
    v15 = *(_QWORD *)(v11 + 48) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v15 )
      v15 = _mm_srli_si128((__m128i)v13, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
    if ( !v15 )
      goto LABEL_18;
    v17 = *(struct _GUID *)(v11 + 48);
    v14 = CAnimationClockCoordinator::OnEndAnimationClock(
            *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 20),
            &v17);
    if ( v14 == -2147019873 )
    {
      v17 = v13;
      v14 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v17);
    }
    v7 = v14;
    if ( v14 < 0 )
    {
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122184, 1LL, v14, 0x135u);
      goto LABEL_19;
    }
  }
LABEL_23:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v7;
}
