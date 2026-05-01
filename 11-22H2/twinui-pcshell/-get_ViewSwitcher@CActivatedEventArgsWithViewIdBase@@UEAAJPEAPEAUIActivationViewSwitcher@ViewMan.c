/*
 * XREFs of ?get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1801AFA10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_ViewSwitcher(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::UI::ViewManagement::IActivationViewSwitcher **a2)
{
  RTL_SRWLOCK *v4; // rdi

  v4 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)this + 3);
    *a2 = (struct Windows::UI::ViewManagement::IActivationViewSwitcher *)*((_QWORD *)this + 3);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
