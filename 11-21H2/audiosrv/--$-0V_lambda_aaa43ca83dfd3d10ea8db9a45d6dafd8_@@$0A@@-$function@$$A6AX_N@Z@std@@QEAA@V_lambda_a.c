/*
 * XREFs of ??$?0V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@$0A@@?$function@$$A6AX_N@Z@std@@QEAA@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@@Z @ 0x180062C84
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180064388 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::function<void (bool)>::function<void (bool)>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  a1[7] = 0LL;
  *a1 = &std::_Func_impl_no_alloc<_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_,void,bool>::`vftable';
  v3 = *a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[1] = v3;
  a1[2] = a2[1];
  a1[3] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  a1[7] = a1;
  v4 = (std::_Ref_count_base *)a2[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
