/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800B07F8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180041554 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x1800AEB74 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800C0170 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnFlick(CContactManager *this, const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *a2)
{
  CContactManager *v4; // rcx
  unsigned int v5; // ebx
  struct CVisual **v6; // rdi
  struct CTouchVisual *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r14d
  int Touch; // eax
  CContactManager *v11; // rcx
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) <= 0x14u )
  {
    v6 = (struct CVisual **)((char *)this + 312);
    v7 = (struct CTouchVisual *)*((_QWORD *)this + 39);
    CContactManager::StopAndRemoveFromRootNode(v4, v7);
    if ( v7 )
      CBaseObject::Release(v7);
    *v6 = 0LL;
    v9 = *((_DWORD *)this + 80);
    *((_DWORD *)this + 80) = v9 + 1;
    GetDesktopID(1LL, &v13, v8);
    Touch = CreateTouchVisual<CFlickVisual>(v13, (CTouchVisual **)this + 39);
    v5 = Touch;
    if ( Touch >= 0 )
    {
      CContactManager::AddToTouchNode(v11, v13, *v6);
      CFlickVisual::Start(*v6, (char *)a2 + 8, *((unsigned int *)a2 + 1), v9);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x342u);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
