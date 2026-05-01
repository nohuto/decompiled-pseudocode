/*
 * XREFs of ?GetIconLoader@MultitaskingData@@UEAA?AV?$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@XZ @ 0x1805601B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetIconLoader(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
