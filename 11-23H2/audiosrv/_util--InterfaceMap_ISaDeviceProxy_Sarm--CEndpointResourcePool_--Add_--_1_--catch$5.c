/*
 * XREFs of _util::InterfaceMap_ISaDeviceProxy_Sarm::CEndpointResourcePool_::Add_::_1_::catch$5 @ 0x180133D9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap_ISaDeviceProxy_Sarm::CEndpointResourcePool_::Add_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 184) = *v3;
  return 0LL;
}
