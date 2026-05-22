/*
 * XREFs of ??$MakeAndInitialize@VCompositionNotificationDeferral@Composition@UI@Windows@@UICompositionNotificationDeferral@234@AEAPEAUICompositionDeferralHandlerPrivate@Private@234@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUICompositionNotificationDeferral@Composition@UI@Windows@@AEAPEAUICompositionDeferralHandlerPrivate@Private@456@AEAI@Z @ 0x1801222EC
 * Callers:
 *     ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x1801261A4 (-CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferr.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18011F56C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNoti.c)
 *     ??0CompositionNotificationDeferral@Composition@UI@Windows@@QEAA@XZ @ 0x180122924 (--0CompositionNotificationDeferral@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180129450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICom_ea_180129450.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionNotificationDeferral,Windows::UI::Composition::ICompositionNotificationDeferral,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate * &,unsigned int &>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  void *v6; // rax
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // edi
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = DefaultHeap::Alloc(0x50uLL);
  v14 = v6;
  if ( v6 )
  {
    v8 = Windows::UI::Composition::CompositionNotificationDeferral::CompositionNotificationDeferral((Windows::UI::Composition::CompositionNotificationDeferral *)v6);
    v9 = *a3;
    v10 = v8;
    v11 = *a2;
    if ( *(_QWORD *)(v8 + 72) != *a2 )
    {
      if ( v11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*a2);
      v12 = *(_QWORD *)(v10 + 72);
      *(_QWORD *)(v10 + 72) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    *(_DWORD *)(v10 + 68) = v9;
    v13 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>>(
            v10,
            &GUID_cfc6dd5d_b15e_50f1_951c_42bda7775d71,
            a1);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::Release(v10);
    return v13;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    return 2147942414LL;
  }
}
