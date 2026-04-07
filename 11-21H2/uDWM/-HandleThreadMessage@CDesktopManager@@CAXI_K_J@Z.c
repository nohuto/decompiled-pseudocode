/*
 * XREFs of ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180051A88 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18005CA20 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18005D2E8 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AADC0 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AB018 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::HandleThreadMessage(int a1, HWND a2, unsigned int a3)
{
  HWND LastActivePopup; // rbx
  CDesktopManager *v4; // rcx
  HWND Ancestor; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+20h] BYREF

  LastActivePopup = a2;
  if ( a1 != 1027 )
  {
    switch ( a1 )
    {
      case 1029:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::ActivateLivePreview((struct LivePreviewRequest *)LastActivePopup);
        break;
      case 1031:
        CContactManager::HandleFlickFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
          a2 != 0LL,
          a3);
        return;
      case 1032:
        CContactManager::HandleKeystateFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
          a2 != 0LL,
          a3);
        return;
      case 1033:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance);
        break;
      case 1025:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v4 = CDesktopManager::s_pDesktopManagerInstance;
        *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 492) = (_DWORD)LastActivePopup != 0;
        CWindowList::UpdateShellWindowFrameColorization(*((CWindowList **)v4 + 52));
        break;
      default:
        return;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
    return;
  }
  if ( !IsWindowEnabled(a2) )
  {
    Ancestor = GetAncestor(LastActivePopup, 3u);
    LastActivePopup = GetLastActivePopup(Ancestor);
  }
  SwitchToThisWindow(LastActivePopup, 1);
}
