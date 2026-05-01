/*
 * XREFs of ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x1803111F8
 * Callers:
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18022B41C (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x180311080 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *__fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this);
  return this;
}
