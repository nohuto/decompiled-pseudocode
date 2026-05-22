/*
 * XREFs of ?Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z @ 0x18016C764
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_c65fbe9eee07b3529dffe6fa73aa7905__&__1_::Invoke @ 0x18016CAC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatch_ea_18016CAC0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateClient@VDiagCallbackClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVDiagCallbackClientConnection@@@Z @ 0x18016985C (--$CreateClient@VDiagCallbackClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessa.c)
 *     ?InternalAddRef@?$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ @ 0x18016C9B0 (-InternalAddRef@-$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDiagCallbackClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18016C9E0 (-InternalRelease@-$ComPtr@VDiagCallbackClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CompObjectDiagnosticsRootPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAK@Z @ 0x18019E89C (--0CompObjectDiagnosticsRootPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAK.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::Initialize(
        Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *this,
        unsigned int *a2)
{
  __int64 *v2; // rdi
  int v5; // eax
  struct dcompwinrtnestedg_AutoBamos::BamoConnection **v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // r8
  int v9; // eax
  CompObjectDiagnosticsRootPrincipal *v10; // rax
  CompObjectDiagnosticsRootPrincipal *v11; // rdi
  __int64 v12; // rcx
  struct dcompwinrtnestedg_AutoBamos::BamoConnection *v13; // rbx
  __int64 v14; // rcx
  int v15[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CompObjectDiagnosticsRootPrincipal *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 1);
  v5 = CoreUICreate(v2);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      850LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)(unsigned int)v5,
      v15[0]);
  v6 = (struct dcompwinrtnestedg_AutoBamos::BamoConnection **)((char *)this + 16);
  Microsoft::WRL::ComPtr<DiagCallbackClientConnection>::InternalRelease((char *)this + 16);
  *(_QWORD *)v15 = 0LL;
  v7 = *v2;
  v15[2] = 1;
  v9 = Microsoft::Bamo::BaseBamoConnection::CreateClient<DiagCallbackClientConnection>(
         v7,
         (__int128 *)v15,
         v8,
         (_QWORD *)this + 2);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      857LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)(unsigned int)v9,
      v15[0]);
  v10 = (CompObjectDiagnosticsRootPrincipal *)operator new(0x40uLL);
  if ( v10 )
    v11 = CompObjectDiagnosticsRootPrincipal::CompObjectDiagnosticsRootPrincipal(v10, *v6, a2);
  else
    v11 = 0LL;
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *((_QWORD *)this + 3) = v11;
  v13 = *v6;
  if ( *((CompObjectDiagnosticsRootPrincipal **)*v6 + 31) != v11 )
  {
    v17 = v11;
    Microsoft::WRL::ComPtr<CompObjectDiagnosticsPrincipal>::InternalAddRef(&v17);
    v14 = *((_QWORD *)v13 + 31);
    *((_QWORD *)v13 + 31) = v11;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
}
