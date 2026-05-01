/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_ @ 0x1805D6890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D7590 (-InternalRelease@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
