/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___ @ 0x180062678
 * Callers:
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180062330 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x18004690C (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 56LL))(*i) )
      CSpatialProperties::EnsureSpatialSettingsAreInitialized((LPCRITICAL_SECTION)(*i + 416LL), v6, v7, v8);
  }
  return a1;
}
