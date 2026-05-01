/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802E0640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewShown@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAXXZ @ 0x18007389C (-_ViewShown@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAXXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x180107680 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802E0300 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180560ECC (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x180562130 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x180562660 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1805626B8 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAltTabViewHost::Show(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r13
  char v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 (__fastcall ****v13)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  char v17; // bl
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  char v28; // [rsp+60h] [rbp-A0h]
  __int128 v29; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v8 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v25[1] = (__int64)v8;
  v9 = 1;
  v26 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v8, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"ShowAltTab");
  v30[0] = &MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v30);
  v27 = a1;
  v28 = 1;
  v10 = CMultitaskingViewHostBase<IAltTabViewHost>::_RegisterForMonitorEvents(a1, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 211LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)(a1 + 184), a2);
  v29 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v29);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 215LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 160) + 24LL))(
          *(_QWORD *)(a1 + 160),
          &v29,
          3LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 218LL;
    goto LABEL_7;
  }
  v24 = 0LL;
  if ( !a4 )
    goto LABEL_17;
  v23 = 0LL;
  v13 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 144) + 24LL))(
                                                                *(_QWORD *)(a1 + 144),
                                                                v25);
  v14 = *v13;
  v15 = ***v13;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v16 = v15(v14, &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6, &v23);
  if ( v16 >= 0 )
  {
    v17 = 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v16);
    v17 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v25);
  if ( v17 )
  {
    v18 = v23;
    v19 = *(void (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v19(v18, a4, &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc, &v24);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  if ( v24
    && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 112LL))(*(_QWORD *)(a1 + 160), 1LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 160) + 104LL))(
      *(_QWORD *)(a1 + 160),
      1LL,
      (unsigned int)((a3 & 2) != 0) + 5);
  }
  else
  {
LABEL_17:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 160) + 104LL))(
      *(_QWORD *)(a1 + 160),
      1LL,
      (unsigned int)((a3 & 2) != 0) + 7);
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 64LL))(*(_QWORD *)(a1 + 160));
  v11 = v20;
  if ( v20 >= 0 )
  {
    *(_BYTE *)(a1 + 112) = 1;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 96LL))(*(_QWORD *)(a1 + 160));
    v11 = v20;
    if ( v20 < 0 )
    {
      v21 = 252LL;
      goto LABEL_22;
    }
    *(_BYTE *)(a1 + 216) = a3 & 1;
    if ( (a3 & 4) != 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168)) )
      {
LABEL_26:
        CMultitaskingViewHostBase<IAllUpViewHost>::_ViewShown(a1);
LABEL_27:
        v9 = 0;
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
        v11 = 0;
        goto LABEL_28;
      }
    }
    else if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
    {
      goto LABEL_26;
    }
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_27;
  }
  v21 = 248LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
    (const char *)(unsigned int)v20);
LABEL_28:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_29:
  if ( v9 )
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab((MultitaskingViewTelemetry::ShowAltTab *)v30);
  if ( v26 >= 0 )
    LeaveCriticalSection(v8);
  return v11;
}
