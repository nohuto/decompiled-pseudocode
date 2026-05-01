/*
 * XREFs of ?copy_ref@?$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z @ 0x180392184
 * Callers:
 *     ?SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18022E020 (-SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IUnknown>::copy_ref(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    *a1 = a2;
    return Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  }
  return result;
}
