/*
 * XREFs of ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010A38C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180145330 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802E5FD2 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802E6974 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1802E6974.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E6B64 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E6D38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E6E54 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E6F64 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_ @ 0x1805E04D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_.c)
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_ @ 0x1805E12E0 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--_lambda_af26cd4e336a58c3fc15d2bb79fbb070_.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805E16A8 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1805E1DA8 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1805E2808 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1805E3124 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x1805E45B0 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x1805E4C2C (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall JointResize::OnArrangedWindowResizeStarted(
        JointResize *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *a3)
{
  char v5; // r12
  int v6; // eax
  int v7; // ebx
  int ViewForWindow; // eax
  __int64 v9; // rdx
  struct IUnknown **v10; // r15
  struct IUnknown *v11; // rdi
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v14; // rdx
  char v15; // dl
  JointResize *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  struct IUnknown *v21; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+28h] [rbp-D8h] BYREF
  int v23; // [rsp+2Ch] [rbp-D4h] BYREF
  struct tagRECT v24; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  HWND v26; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v27; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v28; // [rsp+60h] [rbp-A0h]
  char v29; // [rsp+70h] [rbp-90h]
  float v30; // [rsp+78h] [rbp-88h] BYREF
  float v31; // [rsp+7Ch] [rbp-84h]
  float v32; // [rsp+80h] [rbp-80h]
  float v33; // [rsp+84h] [rbp-7Ch]
  _BYTE v34[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36[40]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v37[40]; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v36,
    (__int64)"JointResize");
  v36[0] = (__int64)&JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v36);
  *(_QWORD *)&v24.left = this;
  *(_QWORD *)&v24.right = v36;
  v28 = v24;
  v5 = 1;
  v29 = 1;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, _BYTE *))(*(_QWORD *)a3 + 72LL))(
         a3,
         v25);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C8,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_37;
  }
  if ( (v25[0] & 2) != 0 )
  {
    v7 = -2147467259;
    goto LABEL_37;
  }
  v21 = 0LL;
  ViewForWindow = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, HWND *))(*(_QWORD *)a3 + 48LL))(
                    a3,
                    &v26);
  v7 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    v9 = 973LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)ViewForWindow);
    goto LABEL_36;
  }
  v21 = 0LL;
  ViewForWindow = JointResize::GetViewForWindow(this, v26, (struct IApplicationView **)&v21);
  v7 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    v9 = 974LL;
    goto LABEL_23;
  }
  ViewForWindow = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, int *))(*(_QWORD *)a3 + 64LL))(
                    a3,
                    &v22);
  v7 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    v9 = 976LL;
    goto LABEL_23;
  }
  v10 = (struct IUnknown **)((char *)this + 192);
  if ( *((_QWORD *)this + 24) )
    goto LABEL_42;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 24, (__int64)v21);
  v11 = *v10;
  AddRef = (*v10)->lpVtbl[3].AddRef;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)this + 23);
  ViewForWindow = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(v11, AddressOf);
  v7 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    v9 = 983LL;
    goto LABEL_23;
  }
  ViewForWindow = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 88LL))(
                    *((_QWORD *)this + 23),
                    (char *)this + 272);
  v7 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    v9 = 984LL;
    goto LABEL_23;
  }
  *((_QWORD *)this + 33) = ApplicationViewHelpers::GetWindowForView(
                             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                             v14);
  *((_DWORD *)this + 74) = v22;
  v7 = JointResize::CalculateSecondaryViews(this, v15);
  if ( v7 >= 0 )
  {
LABEL_42:
    if ( !(unsigned int)SHIsSameObject(*v10, v21) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)0x8000FFFFLL,
        (int)v21);
    if ( *((_DWORD *)this + 74) != v22 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E2,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)0x8000FFFFLL,
        (int)v21);
    *((_BYTE *)this + 256) = 1;
    JointResize::RegisterRawInput(this, 0);
    JointResize::RegisterViewChanges(this, 1);
    ViewForWindow = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, float *))(*(_QWORD *)a3 + 56LL))(
                      a3,
                      &v30);
    v7 = ViewForWindow;
    if ( ViewForWindow < 0 )
    {
      v9 = 1001LL;
      goto LABEL_23;
    }
    v24.left = (int)v30;
    v24.top = (int)v31;
    v24.right = (int)(float)(v32 + v30);
    v24.bottom = (int)(float)(v31 + v33);
    JointResize::ComputeExtendedViewRect(
      v16,
      &v27,
      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))*v10,
      &v24);
    *(_QWORD *)&v24.left = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24.left);
    lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_(
      (__int64)v34,
      (__int64)this,
      (__int64 *)&v24.left,
      &v27);
    v18 = Windows::Internal::ComTaskPool::QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070____(v17, (__int64)v34);
    v7 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, int *))(*(_QWORD *)a3 + 80LL))(
              a3,
              &v23);
      v7 = v18;
      if ( v18 >= 0 )
      {
        v23 |= 3u;
        v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *))(*(_QWORD *)a3 + 88LL))(a3);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v5 = 0;
          v29 = 0;
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
            (struct wil::details::IFailureCallback *)v37,
            (__int64)v36,
            0);
          v37[0] = &JointResizeTelemetry::JointResize::`vftable';
          JointResizeTelemetry::JointResize::operator=((_QWORD *)this + 59, (__int64)v37);
          JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v37);
          JointResize::TagWindowsForResize(this);
          v7 = 0;
          goto LABEL_32;
        }
        v19 = 1032LL;
      }
      else
      {
        v19 = 1030LL;
      }
    }
    else
    {
      v19 = 1026LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v18);
LABEL_32:
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    if ( this )
      (*(void (__fastcall **)(JointResize *))(*(_QWORD *)this + 16LL))(this);
  }
LABEL_36:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
LABEL_37:
  if ( v5 )
  {
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v36,
      0);
  }
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v36);
  return (unsigned int)v7;
}
