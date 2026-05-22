/*
 * XREFs of ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800B2B10
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800AF55C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800D0DE8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x1800D23D0 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800E21EC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
