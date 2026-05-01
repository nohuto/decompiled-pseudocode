/*
 * XREFs of wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::___func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_ @ 0x1801AA23C
 * Callers:
 *     wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801AAA10 (wistd--__function--__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__::___func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
