/*
 * XREFs of ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x18066C830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004C2A0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18019140C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ??1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x18066A0A8 (--1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x18066C0D0 (-StartActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18066DE14 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::TriggerSnapAssistFromAppLayout(
        CSnapAssistControllerBase *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayout *a3)
{
  __int64 (__fastcall *v6)(struct IAppLayout *, __int64 *, _QWORD); // rbx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  DWORD v10; // edx
  void *v11; // rdi
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"SnapAssistTabletModeProcessing");
  v17[0] = &CSnapComponentTelemetry::SnapAssistTabletModeProcessing::`vftable';
  CSnapComponentTelemetry::SnapAssistTabletModeProcessing::StartActivity((CSnapComponentTelemetry::SnapAssistTabletModeProcessing *)v17);
  v13 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAppLayout *, __int64 *, _QWORD))(*(_QWORD *)a3 + 168LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v7 = v6(a3, &v13, 0LL);
  if ( v7 < 0 )
    goto LABEL_10;
  v16 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v13 + 56LL))(v13, 0LL, &v16);
  v14 = 0LL;
  v15 = 0LL;
  v8 = CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor(this, a2, &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 263LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v8 = CSnapAssistControllerBase::_SnapAssistTriggered(this, &v16, a2, &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 264LL;
    goto LABEL_6;
  }
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, v10);
  v7 = 0;
LABEL_8:
  v11 = (void *)v14;
  if ( (_QWORD)v14 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>((__int64 *)v14, *((__int64 **)&v14 + 1));
    std::_Deallocate<16,0>(v11, (v15 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  CSnapComponentTelemetry::SnapAssistTabletModeProcessing::~SnapAssistTabletModeProcessing((CSnapComponentTelemetry::SnapAssistTabletModeProcessing *)v17);
  return (unsigned int)v7;
}
