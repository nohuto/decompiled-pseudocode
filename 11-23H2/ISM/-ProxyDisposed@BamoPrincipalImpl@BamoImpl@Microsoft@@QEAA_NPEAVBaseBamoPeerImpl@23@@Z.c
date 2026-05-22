/*
 * XREFs of ?ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z @ 0x1800B1020
 * Callers:
 *     ?Thunk_ProxyDisposed_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B2530 (-Thunk_ProxyDisposed_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBam.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x18009FB20 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 */

char __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::ProxyDisposed(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // r8
  __int64 v7; // rax

  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(v4 + 32) + 36LL) != *((_DWORD *)a2 + 9) )
  {
    v4 = *(_QWORD *)(v4 + 40);
    if ( !v4 )
      return 0;
  }
  *(_BYTE *)(v4 + 58) = 0;
  if ( *((int *)this + 2) <= 0
    && Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(this, (__int64)a2, v4, a4) )
  {
    v7 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return 1;
}
