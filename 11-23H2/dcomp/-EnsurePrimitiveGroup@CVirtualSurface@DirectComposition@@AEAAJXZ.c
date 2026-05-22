/*
 * XREFs of ?EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ @ 0x18003B14C
 * Callers:
 *     ?GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18003B110 (-GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::EnsurePrimitiveGroup(DirectComposition::CVirtualSurface *this)
{
  int v2; // edi
  __int64 v4; // rcx
  DirectComposition::CDeviceLock *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v5);
  if ( *((_QWORD *)this + 37)
    || (v4 = *(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 24LL,
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4),
        v2 >= 0) )
  {
    v2 = DirectComposition::CVirtualSurface::EnsurePrimitive(this, 0);
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v5);
  return (unsigned int)v2;
}
