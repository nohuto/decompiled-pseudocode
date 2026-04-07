/*
 * XREFs of ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18006D494
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800DBAE0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800DBB60 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

void __fastcall CLauncherAnimationBase::RecordLauncherRect(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)GetDesktopID(1LL, &v7, a3) )
  {
    v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    if ( *(_QWORD *)(v4 + 96) == -1LL || *(_QWORD *)(v4 + 96) == v7 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               v7);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        if ( ((__int64)i[42].Blink & 0xFFF) == 9 )
          this[8] = i[3];
      }
    }
  }
}
