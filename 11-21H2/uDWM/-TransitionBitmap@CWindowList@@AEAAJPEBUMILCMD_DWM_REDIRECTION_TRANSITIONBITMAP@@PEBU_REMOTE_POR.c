/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1801068B8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800ED8E8 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  PVOID ViewBase; // r11
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = -2147467259;
  v6 = *(_QWORD *)((char *)a2 + 4);
  if ( v6 )
  {
    v7 = 0;
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
      v7 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
    if ( v7 > 0 )
    {
      v8 = 0;
      if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
        v8 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
      if ( v8 > 0 )
      {
        if ( a3->ViewSize )
        {
          ViewBase = a3->ViewBase;
          if ( ViewBase )
          {
            v10 = CTransitionVisualController::RegisterTransitionBitmap(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                    v6,
                    *((_DWORD *)a2 + 3),
                    (_DWORD *)a2 + 12,
                    (_OWORD *)a2 + 1,
                    (__int128 *)a2 + 2,
                    ViewBase,
                    a3->ViewSize);
            v5 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1465u);
          }
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
