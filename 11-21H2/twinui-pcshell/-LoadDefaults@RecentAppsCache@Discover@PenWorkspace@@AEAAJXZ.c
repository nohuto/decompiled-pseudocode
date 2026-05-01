/*
 * XREFs of ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803B81E0
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18008ADC4 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x18018029C (_anonymous_namespace_--GetCurTime.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6FA4 (--0-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ @ 0x1803B73CC (--1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1803B8394 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1803B8B7C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B8D70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@details.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x1803B8E58 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x1803B8F64 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDefaults(PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  int v4; // esi
  bool v5; // bl
  void *ppv; // [rsp+38h] [rbp-D0h] BYREF
  struct _FILETIME FileTime; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v9[40]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v10; // [rsp+188h] [rbp+80h]
  const wchar_t *v11; // [rsp+190h] [rbp+88h]
  const wchar_t *v12; // [rsp+198h] [rbp+90h]
  const wchar_t *v13; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v14; // [rsp+1A8h] [rbp+A0h]
  const WCHAR *v15; // [rsp+1B0h] [rbp+A8h]

  anonymous_namespace_::GetCurTime(&FileTime);
  v2 = 0LL;
  LODWORD(ppv) = 0;
  PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(this, FileTime, (int *)&ppv);
  LOBYTE(v3) = 1;
  v4 = 6 - (_DWORD)ppv;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::GetImpl'::`2'::impl,
    v3);
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &PenWorkspaceBrokerTelemetry::OfficeInstalled::`vftable';
  PenWorkspaceBrokerTelemetry::OfficeInstalled::StartActivity((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v9);
  ppv = 0LL;
  v5 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         L"Microsoft.Office.WINWORD.EXE.15",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv) >= 0;
  PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v9, v5);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  PenWorkspaceBrokerTelemetry::OfficeInstalled::~OfficeInstalled((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v9);
  v10 = L"Microsoft.WindowsMaps_8wekyb3d8bbwe!App";
  if ( v5 )
  {
    v12 = L"Microsoft.Office.WINWORD.EXE.15";
    v11 = L"Microsoft.Office.POWERPNT.EXE.15";
  }
  else
  {
    v11 = L"Microsoft.MSPaint_8wekyb3d8bbwe!Microsoft.MSPaint";
    v12 = L"Microsoft.Windows.Photos_8wekyb3d8bbwe!App";
  }
  v13 = L"Microsoft.Office.OneNote_8wekyb3d8bbwe!microsoft.onenoteim";
  v14 = L"Microsoft.WindowsCommunicationsApps_8wekyb3d8bbwe!Microsoft.WindowsLive.Mail";
  v15 = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
  if ( v4 > 0 )
  {
    do
      PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, (&v10)[v2++], &FileTime);
    while ( v2 < v4 );
  }
  return 0LL;
}
