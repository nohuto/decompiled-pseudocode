/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x18048EA1C
 * Callers:
 *     ?VirtualDesktopMoved@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x18048F7A0 (-VirtualDesktopMoved@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesk.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18048E67C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopP.c)
 *     ??0VirtualDesktopPerMonitorCollectionChangedEventArgs@@QEAA@XZ @ 0x18048ECB0 (--0VirtualDesktopPerMonitorCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopPerMonitorCollectionChangedEventArgs@@@Z @ 0x18048EFE8 (-Attach@-$ComPtr@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopPerMonitorCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,unsigned int &,unsigned int &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  VirtualDesktopPerMonitorCollectionChangedEventArgs *v9; // rax
  unsigned int v10; // edi
  VirtualDesktopPerMonitorCollectionChangedEventArgs *v11; // rax
  int v12; // ebp
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopPerMonitorCollectionChangedEventArgs *)operator new(
                                                               0x58uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = VirtualDesktopPerMonitorCollectionChangedEventArgs::VirtualDesktopPerMonitorCollectionChangedEventArgs(v9);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<VirtualDesktopPerMonitorCollectionChangedEventArgs>::Attach(&v18, v11);
    v12 = *a5;
    v13 = *a4;
    v14 = *a3;
    v15 = v18;
    *(_DWORD *)(v18 + 64) = *a2;
    v16 = *(_QWORD *)(v15 + 72);
    *(_QWORD *)(v15 + 72) = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *(_DWORD *)(v15 + 80) = v13;
    *(_DWORD *)(v15 + 84) = v12;
    v10 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>>(
            v15,
            &GUID_e0cc0bf1_04ae_53a9_821a_4d193c75c5da,
            a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
