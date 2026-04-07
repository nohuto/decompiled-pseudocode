/*
 * XREFs of ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1801042B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D3410 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D3794 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x1800F7110 (-Create@CScreenRotation@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HandleHardwareExpressionActivation(CWindowList *this, int a2)
{
  CScreenRotation **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  CScreenRotation *v9; // rcx
  int v10; // eax
  int v11; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (CScreenRotation **)((char *)this + 536);
  if ( *v4 || (v5 = CScreenRotation::Create(v4), v6 = v5, v5 >= 0) )
  {
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                         + 16LL)
                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = *v4;
      *((_DWORD *)v9 + 96) = 1065353216;
      *((float *)v9 + 93) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
      *((float *)v9 + 94) = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
      *((float *)v9 + 95) = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
      v10 = CScreenRotation::Capture(*v4, (__int64)GammaLUT_sRGB_to_scRGB, v8);
      v6 = v10;
      if ( v10 >= 0 )
      {
        CScreenRotation::UpdateAngle(*v4, 360, 360);
        v11 = CScreenRotation::Start(*v4);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x77Au);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x776u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x773u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x76Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v6;
}
