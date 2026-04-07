/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238
 * Callers:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000EE90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800DB9E0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800DBA60 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800DBAE0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800DBC40 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800DBDB8 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000F38C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F3B4 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180053F94 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(CStoryboard *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  char v6; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rbp
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int i; // ebx
  CTransitionVisualController *v10; // rcx
  __int64 v11; // rbp
  __int64 result; // rax
  struct CTransitionWindowSnapshot *v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  if ( (unsigned int)GetDesktopID(1LL, &v15, a3) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 96LL);
    if ( (v5 == v15 || v5 == -1)
      && *(_DWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4) )
    {
      v6 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               v15);
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( CTransitionVisualController::HasVisibleStyle((HWND)Blink[2].Blink)
          || ((__int64)Blink[42].Blink & 0x20000000) == 0 )
        {
          v6 = CStoryboard::_InvokeWindowEnumCallback(a1, Blink, a2, &v14);
        }
        Blink = Blink->Blink;
      }
      while ( v6 );
      for ( i = 0; v6; ++i )
      {
        v10 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
        if ( i >= *((_DWORD *)v10 + 20) )
          break;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v10, i, &v13) >= 0 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)v13 + 36) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v11 + 40)) )
            v6 = CStoryboard::_InvokeWindowEnumCallback(a1, v11, a2, &v14);
        }
      }
    }
  }
  else
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x154Bu,
      0LL);
  }
  result = (unsigned int)v14;
  if ( v14 < 0 )
  {
    CStoryboard::Abandon(a1);
    return (unsigned int)v14;
  }
  return result;
}
