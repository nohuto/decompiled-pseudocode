/*
 * XREFs of ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180044D2C
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063968 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180044E0C (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x180046548 (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeHardware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IVolumeControlHandler **a4)
{
  CVolumeHardware *v8; // rax
  CVolumeHardware *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct IVolumeControlHandler *v12; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v16; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = (int)v8;
  if ( !v8 )
  {
    v16 = 0LL;
    goto LABEL_9;
  }
  v9 = CVolumeHardware::CVolumeHardware(v8, a2);
  v16 = v9;
  if ( !v9 )
  {
LABEL_9:
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL,
      v14);
    return v11;
  }
  v10 = CVolumeHardware::Initialize(v9, a1, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x451,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v10,
      (int)&v16);
  }
  else
  {
    v12 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
    v11 = 0;
  }
  (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v16 + 16LL))(v16);
  return v11;
}
