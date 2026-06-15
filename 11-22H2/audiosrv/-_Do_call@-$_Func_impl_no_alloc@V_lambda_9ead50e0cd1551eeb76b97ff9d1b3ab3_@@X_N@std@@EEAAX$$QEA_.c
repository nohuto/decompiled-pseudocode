/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800F4390
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800F2B90 (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F46B0 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc<_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_,void,bool>::_Do_call(
        __int64 a1,
        char *a2)
{
  char v3; // si
  volatile signed __int32 *v4; // rbx
  PVOID v5; // rcx
  PVOID Address; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  wil::operation_guard::acquire(*(_QWORD *)(a1 + 16), &Address);
  v4 = (volatile signed __int32 *)Address;
  if ( Address )
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnStreamStateChanged(
      *(_QWORD *)(a1 + 8),
      v3);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      v5 = Address;
      *(_DWORD *)Address = 1;
      WakeByAddressAll(v5);
    }
  }
}
