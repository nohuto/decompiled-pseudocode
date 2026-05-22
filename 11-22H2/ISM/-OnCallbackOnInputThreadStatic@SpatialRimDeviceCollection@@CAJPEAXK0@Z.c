/*
 * XREFs of ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800E8B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800E66D0 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800E6CEC (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic(
        struct SpatialRimDeviceCollection *a1,
        __int64 a2,
        void *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)a1 + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v9,
      a1);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a1 + 354) + 104LL))(*((_QWORD *)a1 + 354), v9);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x382,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v9,
      v5,
      v6,
      v7);
  }
  return 0LL;
}
