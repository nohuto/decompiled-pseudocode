/*
 * XREFs of ??1?$com_ptr_t@VVirtualDesktopCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180544630
 * Callers:
 *     _VirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1802C2DA3 (_VirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualDesktopCollection,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopCollection,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
