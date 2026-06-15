/*
 * XREFs of ??1?$lambda_call@V_lambda_978a729973ba3d16391942d318620482_@@@details@wil@@QEAA@XZ @ 0x1800632D0
 * Callers:
 *     _BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1800641CE (_BluetoothControls--BluetoothControl_IMuteControlHandler_BluetoothControls--Bluetoo_ea_1800641CE.c)
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180064616 (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_180064616.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_978a729973ba3d16391942d318620482_>::~lambda_call<_lambda_978a729973ba3d16391942d318620482_>(
        _BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1[8] )
  {
    a1[8] = 0;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 148LL) )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 136LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)a1 + 136LL),
               *(unsigned int *)(*(_QWORD *)a1 + 144LL));
  }
  return result;
}
