/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062E5C
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180064388 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x180064670 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_180064670.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800C68E8 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBluetoothVolume@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothVolume@BluetoothControls@@@Z @ 0x1800C6D64 (-Attach@-$ComPtr@VBluetoothVolume@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothVolume@Bl.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,BluetoothControls::BluetoothVolume,unsigned short * &,BluetoothControls::BluetoothVolume *,IControlChangeNotify * &>(
        struct IControlChangeNotify **a1)
{
  BluetoothControls::BluetoothVolume *v2; // rax
  int v3; // edi
  __int64 v4; // rax
  struct IControlChangeNotify *v5; // rbx
  BluetoothControls::BluetoothVolume *v7; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (BluetoothControls::BluetoothVolume *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = BluetoothControls::BluetoothVolume::BluetoothVolume(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<BluetoothControls::BluetoothVolume>::Attach(&v8, v4);
    v7 = 0LL;
    v5 = v8;
    v3 = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(v8);
    if ( v3 >= 0 )
    {
      if ( v5 )
        ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->AddRef)(v5);
      *a1 = v5;
      v3 = 0;
    }
    if ( v5 )
      ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->Release)(v5);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v7);
  return (unsigned int)v3;
}
