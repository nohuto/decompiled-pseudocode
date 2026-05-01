/*
 * XREFs of ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x1805E4C2C
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801186A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180145330 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x1802144A0 (-TagViewWithLogoAsync@JointResize@@AEAA-AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTR.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802E6974 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1802E6974.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805E16A8 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x1805E4E90 (-TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 */

void __fastcall JointResize::TagWindowsForResize(JointResize *this)
{
  _QWORD *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  ULONG v12; // [rsp+20h] [rbp-2E8h]
  _BYTE v13[16]; // [rsp+30h] [rbp-2D8h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v15[48]; // [rsp+180h] [rbp-188h] BYREF
  __int64 v16; // [rsp+1B0h] [rbp-158h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+2C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 472);
  JointResizeTelemetry::JointResize::TransferToCurrentThread((char *)this + 472, v15);
  DwmpTransitionWindow(*((_QWORD *)this + 33), 1073741918LL);
  v4 = *((_QWORD *)this + 25);
  v5 = *((_QWORD *)this + 26);
  while ( v4 != v5 )
  {
    switch ( *(_DWORD *)(v4 + 8) )
    {
      case 0xA:
        v6 = *(_BYTE *)(v4 + 40) != 0 ? 96 : 99;
        break;
      case 0xB:
        v6 = *(_BYTE *)(v4 + 40) != 0 ? 95 : 100;
        break;
      case 0xC:
        v6 = *(_BYTE *)(v4 + 40) != 0 ? 98 : 101;
        break;
      case 0xF:
        v6 = *(_BYTE *)(v4 + 40) != 0 ? 97 : 102;
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x249,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)0x80070057LL,
          v12);
    }
    v7 = v6;
    LODWORD(v7) = v6 | 0x40000000;
    DwmpTransitionWindow(*(_QWORD *)(v4 + 16), v7);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_JointResizeIcons>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_JointResizeIcons>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    JointResize::TagViewWithLogoAsync((__int64)this, v13, v4, v6);
    v4 += 96LL;
  }
  v10 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    v3,
                    (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_18086CC09, (const GUID *)(v16 + 8), 0LL, 2u, &v17);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)v15,
    0);
  v14[0] = &JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::operator=(v2, (__int64)v14);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v14);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v15);
}
