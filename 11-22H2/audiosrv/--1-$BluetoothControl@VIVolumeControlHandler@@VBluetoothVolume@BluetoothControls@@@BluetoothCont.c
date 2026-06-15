/*
 * XREFs of ??1?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAA@XZ @ 0x1800F1BAC
 * Callers:
 *     ??_G?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAPEAXI@Z @ 0x1800F1F80 (--_G-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCon.c)
 *     ??_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z @ 0x1800F2000 (--_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::~BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  unsigned __int64 v3; // rdx
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+40h] [rbp+20h] BYREF
  void *v8; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  void *v10; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(std::_Ref_count_base **)(a1 + 160);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a1 + 136));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a1 + 128));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a1 + 120));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 >= 8 )
  {
    v4 = *(void **)(a1 + 48);
    v7 = 2 * v3 + 2;
    v8 = v4;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v4 = v8;
    }
    operator delete(v4);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_WORD *)(a1 + 48) = 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 >= 8 )
  {
    v6 = *(void **)(a1 + 16);
    v9 = 2 * v5 + 2;
    v10 = v6;
    if ( v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v6 = v10;
    }
    operator delete(v6);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = -1073741823;
}
