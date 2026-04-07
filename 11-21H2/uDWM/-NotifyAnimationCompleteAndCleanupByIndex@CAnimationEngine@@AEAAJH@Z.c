/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180014844
 * Callers:
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180014680 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180015730 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800157B8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x180008760 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180014944 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  int *v5; // rsi
  __int64 i; // rdi
  void (__fastcall ***v7)(_QWORD, _QWORD); // rcx
  CBaseObject *v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(int **)(*((_QWORD *)this + 5) + 8 * v2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v4, (int)&UdwmAnimationEngine_Animation_End, v5[4], v5[7], v5[6]);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v7 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8 * i);
    if ( v7 )
      (**v7)(v7, (unsigned int)v5[4]);
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard((CAnimationEngine::CTransitionVisualSet *)v5);
  *((_BYTE *)this + 112) = 1;
  v8 = *(CBaseObject **)(*((_QWORD *)this + 5) + 8 * v2);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = 0;
  v10 = *((_DWORD *)this + 16);
  if ( (unsigned int)v2 >= v10 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x218u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x59Bu);
  }
  else
  {
    v11 = v10 - 1;
    if ( (unsigned int)v2 < (unsigned int)v11 )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
      v10 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 16) = v10 - 1;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
