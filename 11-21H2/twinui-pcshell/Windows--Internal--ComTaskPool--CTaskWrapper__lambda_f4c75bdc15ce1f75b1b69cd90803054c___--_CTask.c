/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___ @ 0x18019BA54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_scalar_deleting_destructor_ @ 0x18019D450 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
