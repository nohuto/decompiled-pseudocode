/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2d0fc716a24758c5659c2630b6d3cdc8__void_ @ 0x180159328
 * Callers:
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D170 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2d0fc716a24758c5659c2630b6d3cdc8__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_180170E48;
  v3[1] = 0LL;
  if ( v3 + 1 != a2 )
  {
    v3[1] = *a2;
    *a2 = 0LL;
  }
  v3[2] = a2[1];
  *(_QWORD *)(a1 + 112) = v3;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return a1;
}
