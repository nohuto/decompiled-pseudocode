/*
 * XREFs of ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180103418
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x1800A7260 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x1800A8024 (McTemplateU0d_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EndTransition(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 1);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d_EtwEventWriteTransfer(v3, (__int64)&UdwmEndTransitionRequest, v5);
  if ( v5 != -1 )
    v4 = CAnimationScheduler::OnEndTransitionRequest(
           *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
           v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
