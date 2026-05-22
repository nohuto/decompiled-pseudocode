/*
 * XREFs of ?HandleSurfaceReclaimed@CYCbCrBitmapInfo@DirectComposition@@UEAAJ_N0@Z @ 0x1800FEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CYCbCrBitmapInfo::HandleSurfaceReclaimed(
        DirectComposition::CYCbCrBitmapInfo *this,
        char a2,
        char a3)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // cl

  v3 = 0;
  if ( a3 )
  {
    *((_BYTE *)this + 68) &= ~2u;
    if ( a2 )
    {
      v5 = *((_QWORD *)this + 2);
      if ( v5 )
      {
        DirectComposition::CCompositorSynchronizedObject::UnUse((DirectComposition::CCompositorSynchronizedObject *)(v5 + 16));
        ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)this + 2);
      }
    }
    v6 = *((_QWORD *)this + 4);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  }
  else
  {
    v7 = *((_QWORD *)this + 4);
    if ( !v7 || (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v3 >= 0) )
    {
      v8 = *((_BYTE *)this + 68);
      if ( (v8 & 2) != 0 )
        *((_BYTE *)this + 68) = v8 | 1;
    }
  }
  return (unsigned int)v3;
}
