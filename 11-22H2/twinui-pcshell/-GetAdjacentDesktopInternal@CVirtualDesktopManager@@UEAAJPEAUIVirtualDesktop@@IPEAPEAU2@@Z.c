/*
 * XREFs of ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x1806016E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        __int64 a3,
        struct IVirtualDesktop **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 12) + 72LL))(
           *((_QWORD *)this + 12),
           a2,
           a3,
           &GUID_3f07f4be_b107_441a_af0f_39d82529072c,
           a4);
}
