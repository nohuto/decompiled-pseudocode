/*
 * XREFs of ?GetMonitor@CSnappedWindow@@UEBA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x1802E9A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CSnappedWindow::GetMonitor(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
