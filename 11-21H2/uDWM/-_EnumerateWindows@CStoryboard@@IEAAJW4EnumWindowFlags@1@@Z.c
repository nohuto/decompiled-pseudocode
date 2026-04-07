/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800DA684
 * Callers:
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800D7D00 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800D7D80 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800D7E00 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800D7F60 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800D80E0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800D8150 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800D7484 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800DB108 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(struct _GUID *a1, unsigned int a2)
{
  __int64 v4; // rax
  char v5; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rbp
  struct _LIST_ENTRY *Blink; // rbx
  int i; // ebx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  if ( (unsigned int)GetDesktopID(1LL, &v13) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 96LL);
    if ( (v4 == -1 || v4 == v13)
      && *(_DWORD *)((*(__int64 (__fastcall **)(struct _GUID *))(*(_QWORD *)&a1->Data1 + 16LL))(a1) + 4) )
    {
      v5 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 52));
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( CTransitionVisualController::HasVisibleStyle((HWND)Blink[2].Blink)
          || ((__int64)Blink[42].Flink & 0x20000000) == 0 )
        {
          v5 = CStoryboard::_InvokeWindowEnumCallback(a1, Blink, a2, &v12);
        }
        Blink = Blink->Blink;
      }
      while ( v5 );
      for ( i = 0; v5; ++i )
      {
        v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        if ( (unsigned int)i >= *(_DWORD *)(v9 + 80) )
          break;
        if ( i >= 0 && i < *(_DWORD *)(v9 + 80) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 56) + 16LL * (unsigned int)i + 8) + 288LL) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v10 + 40)) )
            v5 = CStoryboard::_InvokeWindowEnumCallback(a1, v10, a2, &v12);
        }
      }
    }
  }
  else
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x15ABu);
  }
  result = (unsigned int)v12;
  if ( v12 < 0 )
  {
    CStoryboard::Abandon(a1);
    return (unsigned int)v12;
  }
  return result;
}
