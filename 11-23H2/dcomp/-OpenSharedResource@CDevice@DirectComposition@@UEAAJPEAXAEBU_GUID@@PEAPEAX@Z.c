/*
 * XREFs of ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x18008C960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::OpenSharedResource(
        DirectComposition::CDevice *this,
        void *a2,
        const struct _GUID *a3,
        void **a4)
{
  return (*(__int64 (__fastcall **)(DirectComposition::CDevice *, void *, _QWORD, const struct _GUID *, void **))(*(_QWORD *)this + 344LL))(
           this,
           a2,
           0LL,
           a3,
           a4);
}
