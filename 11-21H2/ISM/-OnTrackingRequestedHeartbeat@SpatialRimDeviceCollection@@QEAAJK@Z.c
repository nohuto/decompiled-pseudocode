/*
 * XREFs of ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800C1B78
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800BA7C0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800BE87C (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800BEE78 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat(
        SpatialRimDeviceCollection *this,
        unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v9,
      this);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 354) + 88LL))(
           *((_QWORD *)this + 354),
           a2,
           v9);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        661LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v9,
      v5,
      v6,
      v7);
  }
  return 0LL;
}
