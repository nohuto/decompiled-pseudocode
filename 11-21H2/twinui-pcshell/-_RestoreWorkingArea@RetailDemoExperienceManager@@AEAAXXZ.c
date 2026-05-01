/*
 * XREFs of ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384888
 * Callers:
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180383670 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803840B0 (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803842B4 (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Hide@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384314 (-_Hide@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x180383F08 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_RestoreWorkingArea(RetailDemoExperienceManager *this)
{
  struct tagRECT v1; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 106) > *((_DWORD *)this + 104) && *((_DWORD *)this + 107) > *((_DWORD *)this + 105) )
  {
    v1 = 0LL;
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &v1);
  }
}
