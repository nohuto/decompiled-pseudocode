/*
 * XREFs of ??$?0V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@$0A@@?$function@$$A6AXXZ@std@@QEAA@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@@Z @ 0x180062C20
 * Callers:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063C28 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::function<void (void)>::function<void (void)>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  a1[7] = 0LL;
  *a1 = &std::_Func_impl_no_alloc<_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_,void,>::`vftable';
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
