/*
 * XREFs of ??1?$com_ptr_t@VVirtualDesktopPerMonitorCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18048EDBC
 * Callers:
 *     _VirtualDesktopPerMonitorCollection_CreateInstance_::_1_::dtor$0 @ 0x18021B4F0 (_VirtualDesktopPerMonitorCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopPerMonitorCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180175B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPe.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualDesktopPerMonitorCollection,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopPerMonitorCollection,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection,IVirtualDesktopPerMonitorCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
