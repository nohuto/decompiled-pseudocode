/*
 * XREFs of ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800538D4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004DD60 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180053994 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x180053AA8 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AFDEC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B0034 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::HandleThreadMessage(int a1, HWND a2, unsigned int a3)
{
  HWND LastActivePopup; // rbx
  CDesktopManager *v4; // rcx
  HWND Ancestor; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h] BYREF

  LastActivePopup = a2;
  if ( a1 != 1027 )
  {
    switch ( a1 )
    {
      case 1029:
        v9 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::ActivateLivePreview((struct LivePreviewRequest *)LastActivePopup);
        break;
      case 1031:
        CContactManager::HandleFlickFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          a2 != 0LL,
          a3);
        return;
      case 1032:
        CContactManager::HandleKeystateFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          a2 != 0LL,
          a3);
        return;
      case 1033:
        v9 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::InitializeComObjects((LPVOID *)CDesktopManager::s_pDesktopManagerInstance, v6, v7, v8);
        break;
      case 1025:
        v9 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v4 = CDesktopManager::s_pDesktopManagerInstance;
        *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 508) = (_DWORD)LastActivePopup != 0;
        CWindowList::UpdateShellWindowFrameColorization(*((CWindowList **)v4 + 54));
        break;
      default:
        return;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
    return;
  }
  if ( !IsWindowEnabled(a2) )
  {
    Ancestor = GetAncestor(LastActivePopup, 3u);
    LastActivePopup = GetLastActivePopup(Ancestor);
  }
  SwitchToThisWindow(LastActivePopup, 1);
}
