/*
 * XREFs of ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x1805454B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        __int64 a3,
        struct IVirtualDesktop **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 11) + 72LL))(
           *((_QWORD *)this + 11),
           a2,
           a3,
           &GUID_536d3495_b208_4cc9_ae26_de8111275bf8,
           a4);
}
