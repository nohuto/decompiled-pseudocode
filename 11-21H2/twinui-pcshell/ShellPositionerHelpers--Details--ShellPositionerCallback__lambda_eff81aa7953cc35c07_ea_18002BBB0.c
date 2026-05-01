/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::_scalar_deleting_destructor_ @ 0x18002BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
_DWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::_scalar_deleting_destructor_(
        _DWORD *Block,
        char a2)
{
  Block[11] = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 8);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
