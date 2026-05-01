/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800B17F8
 * Callers:
 *     ??0VirtualDesktopPerMonitorCollection@@QEAA@XZ @ 0x1800B15D0 (--0VirtualDesktopPerMonitorCollection@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800B1760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitaskin.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  *a1 = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 1));
  return a1;
}
