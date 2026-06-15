/*
 * XREFs of ??1?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAA@XZ @ 0x180063180
 * Callers:
 *     ??_G?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAPEAXI@Z @ 0x1800633B0 (--_G-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCon.c)
 *     ??_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z @ 0x1800C6CB0 (--_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800631F8 (--1-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C6A48 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::~BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  __int64 result; // rax

  v2 = *(std::_Ref_count_base **)(a1 + 160);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>::~com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>(a1 + 136);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 128));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 120));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 104));
  std::wstring::~wstring(a1 + 48);
  result = std::wstring::~wstring(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
