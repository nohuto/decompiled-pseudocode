/*
 * XREFs of ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F14C4
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F31C0 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800F1AF8 (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBluetoothMute@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothMute@BluetoothControls@@@Z @ 0x1800F203C (-Attach@-$ComPtr@VBluetoothMute@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothMute@Blueto.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800F34AC (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_1800F34AC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>(
        struct IControlChangeNotify **a1)
{
  struct IControlChangeNotify *v2; // rax
  int v3; // edi
  __int64 v4; // rax
  struct IControlChangeNotify *v5; // rbx
  struct IControlChangeNotify *v7; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (struct IControlChangeNotify *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>((void **)&v7);
    return (unsigned int)v3;
  }
  v4 = BluetoothControls::BluetoothMute::BluetoothMute((BluetoothControls::BluetoothMute *)v2);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<BluetoothControls::BluetoothMute>::Attach(&v8, v4);
  v7 = 0LL;
  v5 = v8;
  v3 = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(v8);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v8);
    goto LABEL_5;
  }
  if ( v5 )
    ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->AddRef)(v5);
  *a1 = v5;
  if ( v5 )
    ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->Release)(v5);
  return 0LL;
}
