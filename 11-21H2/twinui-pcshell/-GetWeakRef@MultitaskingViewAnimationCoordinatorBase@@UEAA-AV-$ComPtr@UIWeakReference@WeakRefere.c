/*
 * XREFs of ?GetWeakRef@MultitaskingViewAnimationCoordinatorBase@@UEAA?AV?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@XZ @ 0x1804CA450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingViewAnimationCoordinatorBase::GetWeakRef(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v2 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v5 = 0LL;
  *a2 = v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return a2;
}
