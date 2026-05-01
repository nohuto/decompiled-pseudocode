/*
 * XREFs of ?GetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1803D6C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable **a2)
{
  struct IInspectable **v2; // rbx

  v2 = (struct IInspectable **)((char *)this + 432);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 54);
  *a2 = *v2;
  return 0LL;
}
