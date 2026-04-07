/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E3194 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x180008760 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800481B0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180048264 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rax
  int v12; // eax
  int started; // ebx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  unsigned int v18; // eax
  unsigned int v19; // eax
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v21; // [rsp+60h] [rbp+8h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v9, (int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v21 = (CBaseObject *)v11;
  if ( !v11 )
  {
    v21 = 0LL;
    started = -2147024882;
    v18 = 128;
    goto LABEL_17;
  }
  *(_DWORD *)(v11 + 8) = 1;
  *(_QWORD *)v11 = &CAnimationEngine::CTransitionVisualSet::`vftable';
  *(_DWORD *)(v11 + 16) = v10;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = a2;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_WORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0LL;
  *(_QWORD *)(v11 + 64) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  v21 = (CBaseObject *)v11;
  v12 = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
  started = v12;
  if ( v12 < 0 )
  {
    v16 = v12;
    v18 = 130;
    goto LABEL_18;
  }
  v14 = *((_DWORD *)this + 16);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    started = -2147024362;
    v19 = 181;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v19);
    v18 = 131;
LABEL_17:
    v16 = started;
    goto LABEL_18;
  }
  if ( v15 > *((_DWORD *)this + 15) )
  {
    started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v21);
    if ( started >= 0 )
      goto LABEL_8;
    v19 = 192;
    goto LABEL_14;
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v14) = v21;
  *((_DWORD *)this + 16) = v15;
LABEL_8:
  *a5 = v10;
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  v16 = started;
  if ( started >= 0 )
    goto LABEL_9;
  v18 = 135;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v18);
  if ( v21 )
    CBaseObject::Release(v21);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)started;
}
