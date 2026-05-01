/*
 * XREFs of ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1A54
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@details@wil@@QEAA_NXZ @ 0x180111BE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@detail.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskFlowImmersiveShellBroker::StartFileListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v3; // rdi
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, char *); // rsi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveTimelineActivities>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveTimelineActivities>::GetImpl'::`2'::impl) )
    return 0LL;
  v3 = *((_QWORD *)this + 26);
  v15 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v13 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.FileActivityListener",
      0x40u,
      0x3Fu);
    ActivationFactory = RoGetActivationFactory(v17, &GUID_e73e0a75_15f4_479f_a515_948333fbd48a, &v13);
    v5 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v6 = 670LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)ActivationFactory);
      goto LABEL_12;
    }
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 29);
    ActivationFactory = v8(v7, v3, (char *)this + 232);
    v5 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v6 = 671LL;
      goto LABEL_8;
    }
    v9 = *((_QWORD *)this + 29);
    v14 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A4,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
LABEL_12:
        v11 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_18;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
    v12 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v5 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
  return v5;
}
