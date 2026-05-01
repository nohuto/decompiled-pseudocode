/*
 * XREFs of ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1800CA3A4
 * Callers:
 *     ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800CA310 (-v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x1800CA460 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x1800CA890 (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ED490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  ApplicationViewManagement::CGlobals *v5; // rax
  __int64 v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  volatile int *v11; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (ApplicationViewManagement::CGlobals *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = ApplicationViewManagement::CGlobals::CGlobals(v5);
    v8 = *a2;
    v9 = v6;
    v13 = v6;
    v10 = *(_QWORD *)(v6 + 48);
    if ( v10 != v8 )
    {
      if ( v8 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 228), v7);
        v10 = *(_QWORD *)(v9 + 48);
      }
      *(_QWORD *)(v9 + 48) = v8;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release();
    }
    ApplicationViewManagement::CPersistence::Initialize((PHKEY)(v9 + 40));
    if ( v9 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 36), v11);
    *a1 = v9;
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v13, v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
