/*
 * XREFs of ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x1800D8618
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800D7E00 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800D7E80 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

void __fastcall CLauncherAnimationBase::RecordLauncherRect(struct _LIST_ENTRY *this)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)GetDesktopID(1LL, &v5) )
  {
    v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    if ( *(_QWORD *)(v2 + 96) == -1LL || *(_QWORD *)(v2 + 96) == v5 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 52));
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        if ( ((__int64)i[42].Flink & 0xFFF) == 9 )
          this[8] = i[3];
      }
    }
  }
}
