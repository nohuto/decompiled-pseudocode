/*
 * XREFs of ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800F1A34
 * Callers:
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800F1B30 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800F190C (--$make_shared@Voperation_guard@wil@@$$V@std@@YA-AV-$shared_ptr@Voperation_guard@wil@@@0@XZ.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>(
        __int64 a1)
{
  *(_QWORD *)a1 = &IVolumeControlHandler::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeControlHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(GUID *)(a1 + 84) = GUID_00000000_0000_0000_0000_000000000000;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 148) = 0;
  std::make_shared<wil::operation_guard,>((_QWORD *)(a1 + 152));
  return a1;
}
