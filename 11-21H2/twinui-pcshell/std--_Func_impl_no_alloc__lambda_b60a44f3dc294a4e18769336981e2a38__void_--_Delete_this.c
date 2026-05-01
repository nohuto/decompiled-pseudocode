/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Delete_this @ 0x1801A8340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x18031A808 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
  if ( a2 )
    return std::_Deallocate<8,0>(a1, 24LL);
  return result;
}
