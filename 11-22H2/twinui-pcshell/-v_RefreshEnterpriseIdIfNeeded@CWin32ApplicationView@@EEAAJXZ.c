/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1800652F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180128890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180128890.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x18012F43C (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x1801304E8 (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801330E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8642074a08b00918dbc99c393cacc902__&_ @ 0x1803CD3F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8642074a08b00918dbc99c393cacc902__-_.c)
 */

__int64 __fastcall CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(CWin32ApplicationView *this, volatile int *a2)
{
  signed __int64 v4; // rax
  int v5; // r8d
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rbx
  volatile int *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  _OWORD v16[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  CWin32ApplicationView *v20; // [rsp+88h] [rbp+28h] BYREF

  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v4 = *((_QWORD *)this + 26);
  v5 = 0x7FFFFFFF;
  while ( v4 >= 0 )
  {
    if ( (_DWORD)v4 != 0x7FFFFFFF )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v4 + 1, v4);
      if ( v6 != v4 )
        continue;
    }
    goto LABEL_9;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_9:
  v7 = *((_QWORD *)this + 26);
  v20 = this;
  while ( v7 >= 0 )
  {
    if ( (_DWORD)v7 != v5 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v7 + 1, v7);
      if ( v8 != v7 )
        continue;
    }
    goto LABEL_15;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), a2);
LABEL_15:
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  ApplicationViewManagement::CGlobals::CGlobals((ApplicationViewManagement::CGlobals *)v16);
  v9 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v19);
  if ( v19 )
  {
    v11 = *(_QWORD *)(v19 + 48);
    if ( v11 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 228), v10);
      v9 = v12;
    }
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v19);
  v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_8642074a08b00918dbc99c393cacc902____(
          v14,
          v13,
          *(unsigned int *)(v9 + 272),
          &v20);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v9);
  ApplicationViewManagement::CGlobals::~CGlobals((ApplicationViewManagement::CGlobals *)v16);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v15,
      v16[0]);
  if ( v20 )
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release)();
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(this);
  return (unsigned int)v15;
}
