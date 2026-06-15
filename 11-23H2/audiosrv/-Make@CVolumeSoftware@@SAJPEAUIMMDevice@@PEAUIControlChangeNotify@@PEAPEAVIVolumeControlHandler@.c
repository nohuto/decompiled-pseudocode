/*
 * XREFs of ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801282E8
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F29B4 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x1801108FC (wil--details--lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___--_lambda_call__lambda_c171.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x180126E80 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IVolumeControlHandler **a3)
{
  CVolumeSoftware *v6; // rax
  CVolumeSoftware *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct IVolumeControlHandler *v10; // rcx
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v15; // [rsp+50h] [rbp+18h] BYREF
  CVolumeSoftware *v16; // [rsp+58h] [rbp+20h]

  *a3 = 0LL;
  v6 = (CVolumeSoftware *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v6;
  if ( !v6 )
  {
    v15 = 0LL;
    goto LABEL_7;
  }
  v7 = CVolumeSoftware::CVolumeSoftware(v6, a2);
  v15 = v7;
  if ( !v7 )
  {
LABEL_7:
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
    return v9;
  }
  *(_QWORD *)v12 = &v15;
  v13 = 1;
  v8 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v7 + 224LL))(v7, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = v15;
    *a3 = v15;
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v10 + 8LL))(v10);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x67F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v8);
  wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(v12);
  return v9;
}
