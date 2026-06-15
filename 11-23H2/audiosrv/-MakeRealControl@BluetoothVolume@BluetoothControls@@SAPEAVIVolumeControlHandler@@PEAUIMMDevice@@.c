/*
 * XREFs of ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F29B4
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F35B8 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800F38A4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_1800F38A4.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18001F194 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180020F4C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F0FC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801282E8 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 */

struct IVolumeControlHandler *__fastcall BluetoothControls::BluetoothVolume::MakeRealControl(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList **a3)
{
  struct IVolumeControlHandler *v5; // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVolumeControlHandler *v10; // [rsp+40h] [rbp+18h] BYREF
  struct IPartsList *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  VolumeHelpers::GetPath((VolumeHelpers *)a1, (struct IMMDevice *)&v11, a3);
  if ( !v11 || (CVolumeHardware::Make(a1, a2, v11, &v10), (v5 = v10) == 0LL) )
  {
    v6 = CVolumeSoftware::Make(a1, a2, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        370LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v6,
        v8);
    v5 = v10;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v11);
  return v5;
}
