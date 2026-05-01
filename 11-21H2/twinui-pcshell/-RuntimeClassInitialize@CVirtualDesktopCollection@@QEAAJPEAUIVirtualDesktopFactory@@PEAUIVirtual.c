/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1800A0E94
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801476D4 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersistence@@@Z @ 0x1800B547C (--4-$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersiste.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18010FEA0 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C (-GetMonitors@VirtualDesktopHelpers@@YA-AV-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopCollection::RuntimeClassInitialize(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktopFactory *a2,
        struct IVirtualDesktopPersistence *a3,
        __int64 a4)
{
  struct IVirtualDesktopFactory *v7; // rax
  CVirtualDesktopManager *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *, GUID *, char *); // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  HMONITOR *i; // rdi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IVirtualDesktopFactory *v21; // [rsp+80h] [rbp+8h] BYREF

  *((_BYTE *)this + 16) = a4;
  v7 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
    }
    v21 = v7;
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  if ( !CVirtualDesktopManager::IsVirtualDesktopPerMonitor(v8) )
  {
    v9 = CVirtualDesktopCollection::AddVirtualDesktop(this, 0LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v18 = 446LL;
    }
    else
    {
LABEL_7:
      v11 = *((_QWORD *)this + 3);
      v12 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, char *))(*(_QWORD *)v11 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
      v9 = v12(v11, &qword_1806846C0, &GUID_536d3495_b208_4cc9_ae26_de8111275bf8, (char *)this + 40);
      v10 = v9;
      if ( v9 >= 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
          0,
          v13,
          v14);
        Microsoft::WRL::ComPtr<IVirtualDesktopPersistence>::operator=((char *)this + 32, a3);
        v10 = 0;
        goto LABEL_9;
      }
      v18 = 449LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  VirtualDesktopHelpers::GetMonitors(v19);
  for ( i = (HMONITOR *)v19[0]; ; ++i )
  {
    if ( i == (HMONITOR *)v19[1] )
    {
      std::vector<HMONITOR__ *>::_Tidy(v19);
      goto LABEL_7;
    }
    v17 = CVirtualDesktopCollection::AddVirtualDesktop(this, *i, 0LL);
    v10 = v17;
    if ( v17 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B9,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v17);
  std::vector<HMONITOR__ *>::_Tidy(v19);
LABEL_9:
  *((_BYTE *)this + 17) = 0;
  return v10;
}
