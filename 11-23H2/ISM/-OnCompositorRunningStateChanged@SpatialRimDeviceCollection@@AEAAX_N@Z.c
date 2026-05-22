/*
 * XREFs of ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D9CC0
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180041988 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800D7800 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800D7DE4 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D8A00 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::OnCompositorRunningStateChanged(SpatialRimDeviceCollection *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
    (SpatialRimDeviceCollectionCallbacks *)v9,
    this);
  if ( !a2 )
    goto LABEL_5;
  if ( !*((_BYTE *)this + 2904) )
  {
    (*(void (__fastcall **)(SpatialRimDeviceCollection *))(*(_QWORD *)this + 216LL))(this);
    SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized(this);
    *((_BYTE *)this + 2904) = 1;
    v7 = *((_QWORD *)this + 354);
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, 0LL, v9);
LABEL_5:
    if ( !*((_BYTE *)this + 2904) )
      goto LABEL_8;
  }
  v8 = *((_QWORD *)this + 354);
  if ( v8 )
  {
    LOBYTE(v4) = a2;
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v4, v9);
  }
LABEL_8:
  SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
    (SpatialRimDeviceCollectionCallbacks *)v9,
    v4,
    v5,
    v6);
}
