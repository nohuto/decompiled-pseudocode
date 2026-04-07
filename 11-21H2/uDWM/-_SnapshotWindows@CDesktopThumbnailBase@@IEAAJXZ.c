/*
 * XREFs of ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B39C0
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800B35A8 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_SnapshotWindows(CDesktopThumbnailBase *this)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int8 Blink; // cl
  int v6; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 35) != -1LL )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 52));
    Flink = WindowListForDesktop->Flink;
    if ( WindowListForDesktop->Flink != WindowListForDesktop )
    {
      while ( 1 )
      {
        if ( Flink )
        {
          if ( Flink[27].Blink )
          {
            Blink = (unsigned __int8)Flink[41].Blink;
            if ( (Blink & 1) != 0 && ((Blink | BYTE4(Flink[41].Blink)) & 4) == 0 && (BYTE6(Flink[41].Blink) & 8) == 0 )
            {
              if ( Flink[2].Blink )
              {
                if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *, struct _LIST_ENTRY *))(*(_QWORD *)this + 208LL))(
                       this,
                       Flink) )
                {
                  if ( CTransitionVisualController::ShouldCloneWindow((HWND)Flink[2].Blink) )
                  {
                    v6 = CDesktopThumbnailBase::_AddWindow(this, (struct CWindowData *)Flink);
                    v1 = v6;
                    if ( v6 < 0 )
                      break;
                  }
                }
              }
            }
          }
        }
        Flink = Flink->Flink;
        if ( Flink == WindowListForDesktop )
          return v1;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x60u);
    }
  }
  return v1;
}
