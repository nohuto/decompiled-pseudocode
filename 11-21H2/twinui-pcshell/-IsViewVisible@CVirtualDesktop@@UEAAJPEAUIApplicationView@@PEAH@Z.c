/*
 * XREFs of ?IsViewVisible@CVirtualDesktop@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180166B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::IsViewVisible(unsigned __int64 this, struct IApplicationView *a2, int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(this + 80) + 24LL))(*(_QWORD *)(this + 80), &SRWLock);
  *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, unsigned __int64))(**(_QWORD **)(this + 72)
                                                                                               + 24LL))(
          *(_QWORD *)(this + 72),
          a2,
          this & -(__int64)(this != 8));
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
