/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003DBA0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18003DC40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICrea.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18003DC60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppI.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18003DC80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIden.c)
 *     ?Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ @ 0x18003DD70 (-Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VContentManagementBrokerServer@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800476F4 (--$MakeAndInitialize@VContentManagementBrokerServer@ContentManagement@@UIInspectable@@$$V@Detail.c)
 *     ?Attach@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x180048DE0 (-Attach@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstal.c)
 *     ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A654 (-InternalRelease@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x18004D8C4 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18006D208 (--$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Detai.c)
 *     ??$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UITargetedContentActionInternal@2345@W4ActionServices@Actions@CreativeFramework@@AEAUActionContext@89@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@$$QEAW4ActionServices@Actions@CreativeFramework@@AEAUActionContext@9CreativeFramework@@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@7@@Z @ 0x180072B14 (--$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F9F8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
