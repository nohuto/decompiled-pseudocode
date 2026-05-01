/*
 * XREFs of ?Attach@?$ComPtr@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopPerMonitorCollectionChangedEventArgs@@@Z @ 0x18048EFE8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@@Z @ 0x18048E934 (--$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMon.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x18048EA1C (--$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtual_ea_18048EA1C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopPerMonitorCollectionChangedEventArgs>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
