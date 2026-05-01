/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0d1b8a6620457c9a80c81ea79532f28a__void_ @ 0x1800A2E30
 * Callers:
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E2138 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_0d1b8a6620457c9a80c81ea79532f28a__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_180621A58;
  v3[1] = 0LL;
  if ( v3 + 1 != a2 )
  {
    v3[1] = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return a1;
}
