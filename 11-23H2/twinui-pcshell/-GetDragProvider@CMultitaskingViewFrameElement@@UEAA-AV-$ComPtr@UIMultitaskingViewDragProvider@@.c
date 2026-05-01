/*
 * XREFs of ?GetDragProvider@CMultitaskingViewFrameElement@@UEAA?AV?$ComPtr@UIMultitaskingViewDragProvider@@@WRL@Microsoft@@XZ @ 0x18057D0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMultitaskingViewFrameElement::GetDragProvider(__int64 a1, __int64 *a2)
{
  *a2 = (a1 + 232) & -(__int64)(a1 != 0);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
