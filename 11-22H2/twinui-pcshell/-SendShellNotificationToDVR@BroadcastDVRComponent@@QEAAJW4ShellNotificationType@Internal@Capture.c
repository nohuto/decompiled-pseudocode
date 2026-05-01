/*
 * XREFs of ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___::Run @ 0x18006BE90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___--Run.c)
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803DA414 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA8E4 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$0CP@@StringReference@Internal@Windows@@QEAA@AEAY0CP@$$CBG@Z @ 0x180039BF8 (--$-0$0CP@@StringReference@Internal@Windows@@QEAA@AEAY0CP@$$CBG@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182CF8 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1803D6708 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D8EC4 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::SendShellNotificationToDVR(
        __int64 a1,
        int a2,
        HWND a3,
        unsigned int a4,
        bool a5,
        _BYTE *a6,
        struct BroadcastDVRActiveAppInfo *a7)
{
  unsigned __int64 v9; // rsi
  bool v11; // bl
  int ActivationFactory; // ebp
  unsigned __int8 v13; // r13
  const unsigned __int16 *v14; // rdx
  HSTRING v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  BroadcastDVRComponent *v18; // rcx
  unsigned int v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  struct BroadcastDVRActiveAppInfo *v22; // [rsp+50h] [rbp-78h]
  HSTRING string; // [rsp+58h] [rbp-70h] BYREF

  v20 = a4;
  v9 = a2;
  v22 = a7;
  v21 = 0LL;
  v11 = 0;
  ActivationFactory = 0;
  v13 = a4 & 1;
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1)
    && ((unsigned int)(v9 - 12) <= 0x14
     || (*(_BYTE *)(a1 + 433) || *a6)
     && (unsigned int)(v9 - 1) <= 2
     && (!*(_DWORD *)(a1 + 436) || *(_BYTE *)(a1 + 434))
     && (!*(_DWORD *)(a1 + 440) || *(_BYTE *)(a1 + 435))) )
  {
    v11 = 1;
  }
  if ( v9 >= 0x21 )
    v14 = L"UNKNOWN";
  else
    v14 = off_1807F40B0[v9];
  GameDVRTraceProvider::BroadcastDVRComponent_SendShellNotificationToDVR(v9, v14, a3, v13, a5, v11, a4);
  if ( v11 )
  {
    v15 = *Windows::Internal::StringReference::StringReference(
             &string,
             L"Windows.Media.Capture.Internal.AppCaptureShell");
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    ActivationFactory = RoGetActivationFactory(v15, &GUID_1fc4ea77_38de_44ba_8dff_74ba9b15674d, &v21);
    if ( ActivationFactory >= 0 )
    {
      *a6 = 1;
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _QWORD))(*(_QWORD *)v21 + 56LL))(
                            v21,
                            a3,
                            v20,
                            (unsigned int)v9);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
      1u,
      v16,
      v17);
  }
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1) )
  {
    v20 = 1;
    SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"ShowStartupPanel", &v20);
    if ( v20 )
    {
      if ( a3 && a5 && (_DWORD)v9 == 2 )
      {
        *a6 = 1;
        ActivationFactory = BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(v18, a3, v22);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  return (unsigned int)ActivationFactory;
}
