/*
 * XREFs of ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800C2838
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800BA7C0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800BE87C (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800BEE78 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        char a3,
        char a4,
        unsigned __int16 a5)
{
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  _BYTE v17[32]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v17,
      this);
    LOBYTE(v9) = a4;
    LOBYTE(v10) = a3;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned __int16, _BYTE *))(**((_QWORD **)this + 354)
                                                                                                 + 80LL))(
            *((_QWORD *)this + 354),
            a2,
            v10,
            v9,
            a5,
            v17);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        650LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v11);
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v17,
      v12,
      v13,
      v14);
  }
  return 0LL;
}
