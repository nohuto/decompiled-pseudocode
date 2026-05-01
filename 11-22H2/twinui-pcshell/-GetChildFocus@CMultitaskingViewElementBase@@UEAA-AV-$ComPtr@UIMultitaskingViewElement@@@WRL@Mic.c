/*
 * XREFs of ?GetChildFocus@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@XZ @ 0x1805745A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetChildFocus(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 168);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
