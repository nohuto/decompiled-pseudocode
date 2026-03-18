/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801B9570
 * Callers:
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800D79B0 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180194CC4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801B9A60 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800274C8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 26);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 220) )
    {
      (*(void (__fastcall **)(CResponseItem *))(*(_QWORD *)v3 + 40LL))(v3);
      v3 = (CResponseItem *)*((_QWORD *)this + 26);
      *((_BYTE *)this + 220) = 0;
    }
    CResponseItem::QueueResponse(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 54) = 0;
    return 1;
  }
  return v2;
}
