/*
 * XREFs of ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180074D28
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180077BA0 (-CreateInstance@-$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007A190 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18007A190.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ToastNotification::NotificationsTargetedContentClient,IUnknown,>(
        _QWORD *a1)
{
  char *v2; // rax
  volatile signed __int64 *v3; // rdi
  _QWORD *v5; // rsi
  unsigned int Interface; // ebx

  *a1 = 0LL;
  v2 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (volatile signed __int64 *)v2;
  if ( !v2 )
    return 2147942414LL;
  v5 = v2 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 8));
  *((_QWORD *)v3 + 8) = 1LL;
  *v3 = (volatile signed __int64)&ToastNotification::NotificationsTargetedContentClient::`vftable'{for `IInspectable'};
  *v5 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback>'};
  *((_QWORD *)v3 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v3 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,INotificationActivationCallback>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v3 = (volatile signed __int64)&ToastNotification::NotificationsTargetedContentClient::`vftable'{for `IInspectable'};
  *v5 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback>'};
  *((_QWORD *)v3 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v3 + 6) = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,INotificationActivationCallback>'};
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::QueryInterface(
                v3,
                &GUID_00000000_0000_0000_c000_000000000046,
                a1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v3);
  return Interface;
}
