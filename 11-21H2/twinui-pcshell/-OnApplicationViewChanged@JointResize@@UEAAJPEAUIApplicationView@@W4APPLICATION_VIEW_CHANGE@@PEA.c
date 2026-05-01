/*
 * XREFs of ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805295E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180529980 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  int v5; // r8d
  bool v6; // r14
  HWND ForegroundWindow; // r15
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  JointResize *v11; // rcx
  bool v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  struct IUnknown **v15; // rbx
  struct IUnknown **v16; // r14
  struct IUnknown *v18[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 8 && *(_BYTE *)(a1 + 160) && (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 104)) )
    {
      v6 = 1;
      ForegroundWindow = GetForegroundWindow();
      if ( !ForegroundWindow )
        goto LABEL_9;
      v18[0] = 0LL;
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v8 + 40LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)v18);
      if ( v9(v8, ForegroundWindow, AddressOf) >= 0 )
        v6 = (unsigned int)SHIsSameObject(v18[0], *(struct IUnknown **)(a1 + 104)) == 0;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v18);
      if ( v6 )
      {
LABEL_9:
        v11 = (JointResize *)(a1 - 96);
LABEL_17:
        v18[0] = 0LL;
        LOBYTE(v18[1]) = 0;
        JointResize::OnArrangedWindowJointResizeCompleted(v11, 0LL, v18);
      }
    }
  }
  else
  {
    v12 = (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 104)) != 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
      1u,
      v13,
      v14);
    if ( v12 )
    {
LABEL_16:
      v11 = (JointResize *)(a1 - 96);
      if ( !*(_BYTE *)(a1 + 160) )
      {
        JointResize::OnArrangedWindowBorderExit(v11);
        return 0LL;
      }
      goto LABEL_17;
    }
    v15 = *(struct IUnknown ***)(a1 + 120);
    v16 = *(struct IUnknown ***)(a1 + 128);
    while ( v15 != v16 )
    {
      if ( (unsigned int)SHIsSameObject(a2, *v15) )
        goto LABEL_16;
      v15 += 11;
    }
  }
  return 0LL;
}
