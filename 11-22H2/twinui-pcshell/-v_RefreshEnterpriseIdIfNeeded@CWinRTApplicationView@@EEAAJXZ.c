/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180047830
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180035D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_808f8076f8742639e20918e7f95659f2___ @ 0x180047768 (Windows--Internal--ComTaskPool--QueueTask__lambda_808f8076f8742639e20918e7f95659f2___.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x18012F43C (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x1801304E8 (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801330E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded(CWinRTApplicationView *this)
{
  CWinRTApplicationView *v1; // r8
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  __int64 v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  volatile int *v11; // rdx
  volatile int *v13; // rdx
  _OWORD v14[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CWinRTApplicationView *v17; // [rsp+70h] [rbp+10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+18h] BYREF

  v1 = this;
  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v2 = *((_QWORD *)this + 25);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 25, v2 + 1, v2);
      if ( v3 != v2 )
        continue;
    }
    goto LABEL_6;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference(
    (Microsoft::WRL::Details *)(2 * v2 + 16),
    (volatile int *)((unsigned __int64)v2 >> 63));
LABEL_6:
  v17 = v1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  ApplicationViewManagement::CGlobals::CGlobals((ApplicationViewManagement::CGlobals *)v14);
  v4 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v18);
  if ( v18 )
  {
    v6 = *(_QWORD *)(v18 + 48);
    if ( v6 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v6 + 228), v5);
      v4 = v7;
    }
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v18);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_808f8076f8742639e20918e7f95659f2___(
          v9,
          v8,
          *(_DWORD *)(v4 + 272),
          &v17);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v4);
  ApplicationViewManagement::CGlobals::~CGlobals((ApplicationViewManagement::CGlobals *)v14);
  if ( v10 >= 0 )
  {
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(
        (__int64)v17,
        v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v10,
    v14[0]);
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(
      (__int64)v17,
      v13);
  return (unsigned int)v10;
}
