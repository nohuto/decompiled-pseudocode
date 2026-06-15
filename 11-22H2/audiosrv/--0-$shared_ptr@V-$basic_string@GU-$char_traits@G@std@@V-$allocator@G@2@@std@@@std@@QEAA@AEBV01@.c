/*
 * XREFs of ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800113C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800251E0 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18003E70C (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x1800424A8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEAV21@@Z @ 0x1800424D8 (--$_Emplace_reallocate@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ??1CPowerReference@@QEAA@XZ @ 0x1800473CC (--1CPowerReference@@QEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Copy @ 0x180073E20 (std--_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_::_Copy @ 0x180083AD0 (std--_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_--_Copy.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800F2B90 (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800F2C54 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F31C0 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F3608 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800F4220 (-_Copy@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800F4260 (-_Copy@-$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800F42A0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800F42E0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1801068AC (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Copy @ 0x18010AA00 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Copy @ 0x18010ABB0 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Copy.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@?$vector@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@1@QEAV21@AEAV21@@Z @ 0x18010D730 (--$_Emplace_reallocate@AEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@-$vector@V-$shared_.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DAB4 (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC70 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x180115A24 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_c39c375cc353a820071102aacff3912a__void_::_Copy @ 0x18011A7F0 (std--_Func_impl_no_alloc__lambda_c39c375cc353a820071102aacff3912a__void_--_Copy.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18014A13C (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18014C94C (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F2D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
