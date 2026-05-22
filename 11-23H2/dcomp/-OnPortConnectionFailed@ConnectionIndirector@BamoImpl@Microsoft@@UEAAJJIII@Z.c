/*
 * XREFs of ?OnPortConnectionFailed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJJIII@Z @ 0x18016DA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPortConnectionFailed(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 40LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
}
