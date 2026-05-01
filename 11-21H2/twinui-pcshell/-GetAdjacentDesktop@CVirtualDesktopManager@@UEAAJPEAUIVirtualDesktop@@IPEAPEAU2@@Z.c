/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x1805453F0
 * Callers:
 *     ?GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x18020C9A0 (-GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  unsigned int v8; // ebx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 11) + 72LL))(
         *((_QWORD *)this + 11),
         a2,
         a3,
         &GUID_536d3495_b208_4cc9_ae26_de8111275bf8,
         a4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
