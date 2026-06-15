/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___ @ 0x18004B3DC
 * Callers:
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18004D420 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x18005CFD4 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 56LL))(*i) )
      CSpatialProperties::EnsureSpatialSettingsAreInitialized((LPCRITICAL_SECTION)(*i + 1904LL));
  }
  return a1;
}
