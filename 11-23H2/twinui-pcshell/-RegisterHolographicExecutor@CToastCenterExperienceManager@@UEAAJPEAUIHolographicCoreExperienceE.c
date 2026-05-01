/*
 * XREFs of ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x1804392C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804350B8 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355CC (--1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804377D8 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x18043A154 (-StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18043A340 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CToastCenterExperienceManager::RegisterHolographicExecutor(
        CToastCenterExperienceManager *this,
        struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  LPVOID v8; // rbx
  __int64 (__fastcall *v9)(LPVOID, GUID *, GUID *, char *); // rsi
  int v10; // eax
  CToastCenterExperienceManager *v11; // r14
  int v12; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v13; // rdx
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"EM_RegisterHolographicExecutor");
  v17[0] = &ToastCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  ToastCenterTelemetry::EM_RegisterHolographicExecutor::StartActivity((ToastCenterTelemetry::EM_RegisterHolographicExecutor *)v17);
  if ( *((struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor **)this + 90) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *))(*(_QWORD *)a2 + 8LL))(a2);
    v16 = *((_QWORD *)this + 90);
    *((_QWORD *)this + 90) = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = ppv;
    v9 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 92);
    v10 = v9(
            v8,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            (char *)this + 736);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v11 = (CToastCenterExperienceManager *)((char *)this - 56);
      v12 = RtlSubscribeWnfStateChangeNotification(
              (char *)v11 + 432,
              WNF_HOLO_USER_DISPLAY_CONTEXT,
              0LL,
              CToastCenterExperienceManager::DisplayContextChangedCallback,
              v11,
              0LL,
              0,
              1);
      v5 = v12 | 0x10000000;
      if ( v12 >= 0 )
      {
        CToastCenterExperienceManager::OnDisplayContextChanged(v11, v13);
        wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
        v5 = 0;
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x460,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v5);
      v6 = v5;
      v7 = 1841LL;
    }
    else
    {
      v6 = (unsigned int)v10;
      v7 = 1839LL;
    }
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 1838LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  ToastCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor((ToastCenterTelemetry::EM_RegisterHolographicExecutor *)v17);
  return v5;
}
