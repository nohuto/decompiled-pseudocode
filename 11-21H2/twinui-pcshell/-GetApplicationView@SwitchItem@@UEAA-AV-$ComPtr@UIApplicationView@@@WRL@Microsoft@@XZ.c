/*
 * XREFs of ?GetApplicationView@SwitchItem@@UEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@XZ @ 0x1804B6030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall SwitchItem::GetApplicationView(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
