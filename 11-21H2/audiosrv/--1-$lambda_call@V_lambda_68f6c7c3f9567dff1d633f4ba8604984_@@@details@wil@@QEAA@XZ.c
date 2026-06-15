/*
 * XREFs of ??1?$lambda_call@V_lambda_68f6c7c3f9567dff1d633f4ba8604984_@@@details@wil@@QEAA@XZ @ 0x18006327C
 * Callers:
 *     _BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1800641DA (_BluetoothControls--BluetoothControl_IMuteControlHandler_BluetoothControls--Bluetoo_ea_1800641DA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall wil::details::lambda_call<_lambda_68f6c7c3f9567dff1d633f4ba8604984_>::~lambda_call<_lambda_68f6c7c3f9567dff1d633f4ba8604984_>(
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
