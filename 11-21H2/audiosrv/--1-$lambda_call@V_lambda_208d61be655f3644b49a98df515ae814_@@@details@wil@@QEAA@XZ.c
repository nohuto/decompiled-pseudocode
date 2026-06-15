/*
 * XREFs of ??1?$lambda_call@V_lambda_208d61be655f3644b49a98df515ae814_@@@details@wil@@QEAA@XZ @ 0x180063228
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$5 @ 0x180064622 (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_180064622.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_208d61be655f3644b49a98df515ae814_>::~lambda_call<_lambda_208d61be655f3644b49a98df515ae814_>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    v2 = *a1;
    v3 = *(_QWORD *)(v2 + 104);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 32LL))(*(_QWORD *)(v2 + 104));
      v2 = *a1;
    }
    return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v2 + 104);
  }
  return result;
}
