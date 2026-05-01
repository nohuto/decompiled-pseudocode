/*
 * XREFs of ?SetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAUIInspectable@@@Z @ 0x1803D91F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x180118134 (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable *a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::operator=((__int64 *)this + 54, (__int64)a2);
  return 0LL;
}
