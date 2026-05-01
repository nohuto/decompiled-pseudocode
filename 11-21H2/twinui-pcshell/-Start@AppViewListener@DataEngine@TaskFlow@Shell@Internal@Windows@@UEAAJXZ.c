/*
 * XREFs of ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1800D9F10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_94b54b57b58432639b6768f358bf3b60_::operator() @ 0x18010BE9C (_lambda_94b54b57b58432639b6768f358bf3b60_--operator().c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180117BE4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164224 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180364EF4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
  struct DiagnosticsInfo v4; // rbx
  __int64 (__fastcall *v5)(struct DiagnosticsInfo, GUID *, GUID *, char *); // rdi
  __int64 v6; // rdx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-50h]
  int v12[2]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+3Ch] [rbp-34h]
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v15[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int16 v18; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct DiagnosticsInfo v20; // [rsp+98h] [rbp+28h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&v20);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v8 = 48LL;
LABEL_18:
    v10 = (unsigned int)Instance;
    goto LABEL_19;
  }
  v4 = v20;
  v5 = *(__int64 (__fastcall **)(struct DiagnosticsInfo, GUID *, GUID *, char *))(**(_QWORD **)&v20 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v5)(
               v4,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               (char *)this + 96);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v8 = 49LL;
    goto LABEL_18;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 12) + 96LL))(
               *((_QWORD *)this + 12),
               (char *)this + 16,
               (char *)this + 104);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v8 = 51LL;
    goto LABEL_18;
  }
  v14[0] = &v20;
  v14[1] = this;
  *(_QWORD *)v15 = retaddr;
  v16 = "pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp";
  v17 = 0LL;
  v18 = 53;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::GetImpl'::`2'::impl,
    v6);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v12);
  v9 = lambda_94b54b57b58432639b6768f358bf3b60_::operator()(v14);
  v3 = v9;
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (int)v12,
      (struct wil::ThreadErrorContext *)0x119D464,
      (unsigned int)v15,
      (const struct DiagnosticsInfo *)ppv);
  if ( *(_QWORD *)v12 )
    *(_DWORD *)(*(_QWORD *)v12 + 16LL) = v13;
  if ( v3 < 0 )
  {
    v10 = (unsigned int)v3;
    v8 = 65LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)v10);
    goto LABEL_8;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 48LL))(
               *((_QWORD *)this + 11),
               this);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v8 = 67LL;
    goto LABEL_18;
  }
  v3 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v3;
}
