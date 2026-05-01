/*
 * XREFs of ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802D63F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_94b54b57b58432639b6768f358bf3b60_::operator() @ 0x1804A33D0 (_lambda_94b54b57b58432639b6768f358bf3b60_--operator().c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804A4414 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
  __int64 v4; // rdx
  struct DiagnosticsInfo v5; // rbx
  __int64 (__fastcall *v6)(struct DiagnosticsInfo, GUID *, GUID *, char *); // rdi
  __int64 v7; // rdx
  bool v8; // dl
  int v9; // eax
  unsigned __int64 v10; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-50h]
  int v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+3Ch] [rbp-34h]
  _QWORD v15[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v16[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  __int16 v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct DiagnosticsInfo v21; // [rsp+98h] [rbp+28h] BYREF

  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&v21);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 48LL;
LABEL_15:
    v10 = (unsigned int)Instance;
    goto LABEL_16;
  }
  v5 = v21;
  v6 = *(__int64 (__fastcall **)(struct DiagnosticsInfo, GUID *, GUID *, char *))(**(_QWORD **)&v21 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(
               v5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               (char *)this + 96);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 49LL;
    goto LABEL_15;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 12) + 96LL))(
               *((_QWORD *)this + 12),
               ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
               (char *)this + 104);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 51LL;
    goto LABEL_15;
  }
  v15[0] = &v21;
  v15[1] = this;
  *(_QWORD *)v16 = retaddr;
  v17 = "pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp";
  v18 = 0LL;
  v19 = 53;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::GetImpl'::`2'::impl,
    v7);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v13, v8);
  v9 = lambda_94b54b57b58432639b6768f358bf3b60_::operator()(v15);
  v3 = v9;
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (int)v13,
      (struct wil::ThreadErrorContext *)0x119D464,
      (unsigned int)v16,
      (const struct DiagnosticsInfo *)ppv);
  if ( *(_QWORD *)v13 )
    *(_DWORD *)(*(_QWORD *)v13 + 16LL) = v14;
  if ( v3 >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 48LL))(
                 *((_QWORD *)this + 11),
                 this);
    v3 = Instance;
    if ( Instance >= 0 )
    {
      v3 = 0;
      goto LABEL_18;
    }
    v4 = 67LL;
    goto LABEL_15;
  }
  v10 = (unsigned int)v3;
  v4 = 65LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
    (const char *)v10);
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v3;
}
