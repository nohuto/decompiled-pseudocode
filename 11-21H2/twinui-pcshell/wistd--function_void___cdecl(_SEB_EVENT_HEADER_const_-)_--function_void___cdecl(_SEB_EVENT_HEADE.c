/*
 * XREFs of wistd::function_void___cdecl(_SEB_EVENT_HEADER_const_&)_::function_void___cdecl(_SEB_EVENT_HEADER_const_&)___lambda_4a5b095ff0d9349924b6274c14ba96ea__void_ @ 0x1800A2DE0
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005C018 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl__SEB_EVENT_HEADER_const____::function_void___cdecl__SEB_EVENT_HEADER_const______lambda_4a5b095ff0d9349924b6274c14ba96ea__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_180621A30;
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
