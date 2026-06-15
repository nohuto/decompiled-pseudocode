/*
 * XREFs of ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800377B0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??1?$lambda_call@V_lambda_208d61be655f3644b49a98df515ae814_@@@details@wil@@QEAA@XZ @ 0x1800F1CB0 (--1-$lambda_call@V_lambda_208d61be655f3644b49a98df515ae814_@@@details@wil@@QEAA@XZ.c)
 *     ??1?$lambda_call@V_lambda_68f6c7c3f9567dff1d633f4ba8604984_@@@details@wil@@QEAA@XZ @ 0x1800F1D00 (--1-$lambda_call@V_lambda_68f6c7c3f9567dff1d633f4ba8604984_@@@details@wil@@QEAA@XZ.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800F2D20 (-ProviderFinalRelease@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800F2DE0 (-ProviderFinalRelease@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F31C0 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F3608 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180101C8C (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18010973C (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18010A7C0 (-UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     _lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_ @ 0x180119200 (_lambda_a5b20f628b6b681ff62fc21fdf557568_--_lambda_invoker_cdecl_.c)
 *     _lambda_c39c375cc353a820071102aacff3912a_::operator() @ 0x180119D6C (_lambda_c39c375cc353a820071102aacff3912a_--operator().c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x18011A050 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18011A434 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D2FC (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x18015DFEC (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
