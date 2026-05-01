/*
 * XREFs of ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802E8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801143CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1802274E4 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x1802282FC (-ShowSnapBarAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@Windo.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18065FE20 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x1806645AC (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x18067FA84 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnDragSizeInfoEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        HWND *a3,
        __int64 a4)
{
  HWND v5; // rbp
  int v7; // ebx
  SnapLayoutProvider *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = *a3;
  if ( *((_DWORD *)a3 + 2) == 2 )
  {
    v7 = 0;
    if ( *((_BYTE *)this + 921) && CShellSnapComponent::CanSnapWindow(this, *a3) )
    {
      switch ( *((_DWORD *)a3 + 4) )
      {
        case 1:
          v7 = 3;
          break;
        case 2:
          v7 = 2;
          break;
        case 4:
          v7 = 1;
          break;
        case 8:
          v7 = 4;
          break;
      }
      SnapFlyoutHost::ShowSnapBarAsync(*((_QWORD *)this + 114), &v12, v7, (__int64)v5);
    }
  }
  else if ( *((_DWORD *)a3 + 2) == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v8 = (SnapLayoutProvider *)*((_QWORD *)this + 73);
    if ( v8 )
    {
      SnapLayoutProvider::Reset(v8);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
        1u,
        v9,
        v10);
      if ( **((_DWORD **)this + 154) == 1 )
        CSnapComponentTelemetry::OnSnappingCancelled::Stop((CShellSnapComponent *)((char *)this + 1184), 1);
    }
    if ( *((_BYTE *)this + 921) && CShellSnapComponent::CanSnapWindow(v8, v5) )
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), &v12, 1);
  }
  return 0LL;
}
