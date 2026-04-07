/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x1801067CC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x1800A8024 (McTemplateU0d_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::StartTransition(
        struct _RTL_CRITICAL_SECTION *this,
        struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *a2)
{
  __int64 v3; // rcx
  CAnimationScheduler *v4; // rdi
  unsigned int v5; // ebx
  const struct _GUID *v6; // r8
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = this;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d_EtwEventWriteTransfer(v3, (__int64)&UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
  v4 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v5 = *((_DWORD *)a2 + 1);
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v4, v5, v6, 0LL, (struct _GUID *)((char *)a2 + 24));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1439u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return (unsigned int)v7;
}
