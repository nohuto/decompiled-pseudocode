/*
 * XREFs of ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x1800D7660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800D8E74 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

char __fastcall MPCInputProviderBase::TryDemote(MPCInputProviderBase *this)
{
  char v2; // bl

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24);
  if ( v2 )
    RayStabilizer::Reset((MPCInputProviderBase *)((char *)this + 448));
  return v2;
}
