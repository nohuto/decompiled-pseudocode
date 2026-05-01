/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@@Z @ 0x18048E934
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18048F020 (-CurrentVirtualDesktopChanged@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVi.c)
 *     ?VirtualDesktopCreated@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18048F4C0 (-VirtualDesktopCreated@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDe.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18048F610 (-VirtualDesktopDestroyed@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18048E67C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopP.c)
 *     ??0VirtualDesktopPerMonitorCollectionChangedEventArgs@@QEAA@XZ @ 0x18048ECB0 (--0VirtualDesktopPerMonitorCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopPerMonitorCollectionChangedEventArgs@@@Z @ 0x18048EFE8 (-Attach@-$ComPtr@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopPerMonitorCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  VirtualDesktopPerMonitorCollectionChangedEventArgs *v6; // rax
  unsigned int v7; // edi
  VirtualDesktopPerMonitorCollectionChangedEventArgs *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (VirtualDesktopPerMonitorCollectionChangedEventArgs *)operator new(
                                                               0x58uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = VirtualDesktopPerMonitorCollectionChangedEventArgs::VirtualDesktopPerMonitorCollectionChangedEventArgs(v6);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<VirtualDesktopPerMonitorCollectionChangedEventArgs>::Attach(&v13, v8);
    v9 = *a3;
    v10 = v13;
    *(_DWORD *)(v13 + 64) = *a2;
    v11 = *(_QWORD *)(v10 + 72);
    *(_QWORD *)(v10 + 72) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *(_DWORD *)(v10 + 80) = 0;
    *(_DWORD *)(v10 + 84) = 0;
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>>(
           v10,
           &GUID_e0cc0bf1_04ae_53a9_821a_4d193c75c5da,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
