/*
 * XREFs of ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806070A4
 * Callers:
 *     ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602DD0 (-RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801BB104 (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDeskto.c)
 */

__int64 __fastcall CVirtualDesktopManager::UpdateCurrentDesktop(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)((char *)this + 192);
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 24)) )
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::operator=((__int64 *)this + 23, *v3);
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::operator=(v3, (__int64)a3);
  }
  return 0LL;
}
