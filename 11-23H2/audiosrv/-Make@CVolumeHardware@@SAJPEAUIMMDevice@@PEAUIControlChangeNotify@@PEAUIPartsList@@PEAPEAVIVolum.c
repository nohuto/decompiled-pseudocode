/*
 * XREFs of ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180020F4C
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F29B4 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x18002102C (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800211F8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x1801108FC (wil--details--lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___--_lambda_call__lambda_c171.c)
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
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v17; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v14 = v8;
  if ( !v8 )
  {
    v17 = 0LL;
    goto LABEL_7;
  }
  v9 = CVolumeHardware::CVolumeHardware(v8, a2);
  v17 = v9;
  if ( !v9 )
  {
LABEL_7:
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL,
      v14[0]);
    return v11;
  }
  *(_QWORD *)v14 = &v17;
  v15 = 1;
  v10 = CVolumeHardware::Initialize(v9, a1, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v17;
    *a4 = v17;
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v17 + 16LL))(v17);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v10,
    v14[0]);
  wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(v14);
  return v11;
}
