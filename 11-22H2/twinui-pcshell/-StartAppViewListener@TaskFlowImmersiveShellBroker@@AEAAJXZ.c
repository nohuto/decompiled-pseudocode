/*
 * XREFs of ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1458
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@details@wil@@QEAA_NXZ @ 0x180111BE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@detail.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x180499D34 (--$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Micr.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1804A01C0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppViewListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v3; // rdi
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64, char *); // rsi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveTimelineActivities>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveTimelineActivities>::GetImpl'::`2'::impl) )
    return 0LL;
  v3 = *((_QWORD *)this + 26);
  v18 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory,>(&v16);
    v6 = *v4;
    if ( *v4 )
      v6 += 40LL;
    v17 = v6;
    *v4 = 0LL;
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v7,
        v5);
    }
    if ( !v6 )
    {
      v8 = -2147024882;
      v9 = 2147942414LL;
      v10 = 647LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)v9);
      goto LABEL_16;
    }
    v11 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v6 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 27);
    v12 = v11(v6, v3, (char *)this + 216);
    v8 = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 648LL;
      goto LABEL_12;
    }
    v13 = *((_QWORD *)this + 27);
    v16 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      v8 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28D,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
LABEL_16:
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        goto LABEL_21;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v8 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  return v8;
}
