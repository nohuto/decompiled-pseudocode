/*
 * XREFs of ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180595A30
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABEB0 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC930 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ??$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@AEBW445@AEBW4Edge@5@AEBW465@@CSnapComponentTelemetry@@SAXAEAW4SnapRegion@@$$QEAPEBG$$QEAPEAUHWND__@@$$QEAW4SnapFillType@SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@4AEBW4Edge@6@5@Z @ 0x1805908F8 (--$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapComponentTelemetry::SendSnapFillTypeEvent(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 112LL))(a3, &v17);
    v5 = v17;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
    v13 = -1LL;
    v14 = -1LL;
    v7 = v6(v5, &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  }
  LODWORD(v17) = !Geometry::operator==(a1 + 8, a1 + 4) + 1;
  if ( a3 )
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 80LL))(a3);
  else
    v9 = 0LL;
  v18 = v9;
  v11 = v12;
  CSnapComponentTelemetry::SnapFillType<enum SnapRegion &,unsigned short const *,HWND__ *,enum SnapComponentTelemetry::SnapFillType,enum SnapLayoutHelpers::FillRule const &,enum SnapLayoutHelpers::FillRule const &,enum SnapLayoutHelpers::Edge const &,enum SnapLayoutHelpers::Edge const &>(
    &v16,
    &v11,
    &v18,
    &v17,
    a1,
    a1 + 1,
    a1 + 2,
    a1 + 3);
  v8 = 0;
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
  return v8;
}
