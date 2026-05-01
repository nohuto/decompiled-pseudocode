/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x1805442D0
 * Callers:
 *     ?VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x180544F40 (-VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039EB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180543F38 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopC.c)
 *     ??0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ @ 0x180544564 (--0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopCollectionChangedEventArgs@@@Z @ 0x1805447D8 (-Attach@-$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,unsigned int &,unsigned int &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  VirtualDesktopCollectionChangedEventArgs *v9; // rax
  unsigned int v10; // edi
  VirtualDesktopCollectionChangedEventArgs *v11; // rax
  int v12; // ebp
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopCollectionChangedEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = VirtualDesktopCollectionChangedEventArgs::VirtualDesktopCollectionChangedEventArgs(v9);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<VirtualDesktopCollectionChangedEventArgs>::Attach(&v18, v11);
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
    v10 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>>(
            v15,
            &GUID_441fc94f_1600_5938_827e_084d1252525e,
            a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
