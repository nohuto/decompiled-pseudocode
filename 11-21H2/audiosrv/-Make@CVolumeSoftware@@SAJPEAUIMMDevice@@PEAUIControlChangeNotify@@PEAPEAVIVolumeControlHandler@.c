/*
 * XREFs of ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1800CD298
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063968 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800CB8A8 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v12; // [rsp+50h] [rbp+18h]

  *a3 = 0LL;
  v6 = (CVolumeSoftware *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 && (v7 = CVolumeSoftware::CVolumeSoftware(v6, a2), (v12 = v7) != 0LL) )
  {
    v8 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v7 + 216LL))(v7, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v12;
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x648,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v8);
    }
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x646,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v9;
}
