/*
 * XREFs of ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062D4C
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063F40 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x180064228 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_180064228.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800C68B0 (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBluetoothMute@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothMute@BluetoothControls@@@Z @ 0x1800C6D20 (-Attach@-$ComPtr@VBluetoothMute@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothMute@Blueto.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>(
        struct IControlChangeNotify **a1)
{
  BluetoothControls::BluetoothMute *v2; // rax
  int v3; // edi
  __int64 v4; // rax
  struct IControlChangeNotify *v5; // rbx
  BluetoothControls::BluetoothMute *v7; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (BluetoothControls::BluetoothMute *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = BluetoothControls::BluetoothMute::BluetoothMute(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<BluetoothControls::BluetoothMute>::Attach(&v8, v4);
    v7 = 0LL;
    v5 = v8;
    v3 = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(v8);
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
