/*
 * XREFs of ?ModeChange@CWindowList@@AEAAJXZ @ 0x18010B1CC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18003EA04 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ModeChange(CWindowList *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v1 = CDesktopManager::ModeChange((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x1B4Au);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
