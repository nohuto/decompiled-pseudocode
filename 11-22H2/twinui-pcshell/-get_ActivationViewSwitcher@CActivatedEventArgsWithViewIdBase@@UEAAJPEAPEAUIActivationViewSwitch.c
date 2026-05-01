/*
 * XREFs of ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x18073AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_ActivationViewSwitcher(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::UI::ViewManagement::IActivationViewSwitcher **a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // ebx

  v4 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)this + 2);
    *a2 = (struct Windows::UI::ViewManagement::IActivationViewSwitcher *)*((_QWORD *)this + 2);
    v5 = 0;
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
