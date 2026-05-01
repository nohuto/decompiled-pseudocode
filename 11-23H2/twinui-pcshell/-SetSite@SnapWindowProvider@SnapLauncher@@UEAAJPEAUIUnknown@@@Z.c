/*
 * XREFs of ?SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18022E020
 * Callers:
 *     <none>
 * Callees:
 *     ?copy_ref@?$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z @ 0x180392184 (-copy_ref@-$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall SnapLauncher::SnapWindowProvider::SetSite(
        SnapLauncher::SnapWindowProvider *this,
        struct IUnknown *a2)
{
  winrt::com_ptr<IUnknown>::copy_ref((char *)this + 40, a2);
  return 0LL;
}
