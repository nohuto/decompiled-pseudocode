/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e___::_scalar_deleting_destructor_ @ 0x180037120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[11] = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 8);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x50uLL);
  return a1;
}
