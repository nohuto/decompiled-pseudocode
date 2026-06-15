/*
 * XREFs of ??1?$lambda_call@V_lambda_68f6c7c3f9567dff1d633f4ba8604984_@@@details@wil@@QEAA@XZ @ 0x1800F1D00
 * Callers:
 *     _BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1800F345E (_BluetoothControls--BluetoothControl_IMuteControlHandler_BluetoothControls--Bluetoo_ea_1800F345E.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call<_lambda_68f6c7c3f9567dff1d633f4ba8604984_>::~lambda_call<_lambda_68f6c7c3f9567dff1d633f4ba8604984_>(
        _BYTE *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 104LL));
  }
  return result;
}
