/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800C63BC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180064388 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800C68E8 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBluetoothVolume@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothVolume@BluetoothControls@@@Z @ 0x1800C6D64 (-Attach@-$ComPtr@VBluetoothVolume@BluetoothControls@@@WRL@Microsoft@@QEAAXPEAVBluetoothVolume@Bl.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        __int64 *a3)
{
  BluetoothControls::BluetoothVolume *v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r8
  struct IControlChangeNotify *v10; // rbx
  struct IControlChangeNotify *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (BluetoothControls::BluetoothVolume *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = BluetoothControls::BluetoothVolume::BluetoothVolume(v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<BluetoothControls::BluetoothVolume>::Attach(&v12, v8);
    v13 = 0LL;
    v9 = *a3;
    v10 = v12;
    v7 = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
           v12,
           *a2,
           v9);
    if ( v7 >= 0 )
      v7 = ((__int64 (__fastcall *)(struct IControlChangeNotify *, GUID *, _QWORD *))v10->lpVtbl->QueryInterface)(
             v10,
             &GUID_52b4411a_db00_4d9c_8797_992d2de2cf2d,
             a1);
    if ( v10 )
      ((void (__fastcall *)(struct IControlChangeNotify *))v10->lpVtbl->Release)(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
