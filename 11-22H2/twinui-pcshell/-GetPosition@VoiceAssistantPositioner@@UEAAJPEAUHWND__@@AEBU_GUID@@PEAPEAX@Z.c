/*
 * XREFs of ?GetPosition@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1805AC9D0
 * Callers:
 *     ?GetPosition@VoiceAssistantPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A6010 (-GetPosition@VoiceAssistantPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetPosition(
        VoiceAssistantPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  const char *v6; // r9
  struct tagRECT *v8; // rax
  int v9; // ebx
  CCommonApplicationViewPosition *v10; // rax
  struct tagRECT *v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT *v16; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a4 = 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x119,
             (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
             v6);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  v15 = 0LL;
  v8 = (struct tagRECT *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v8;
  if ( !v8 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v16);
    v9 = -2147024882;
LABEL_6:
    v12 = (unsigned int)v9;
    v13 = 284LL;
    goto LABEL_9;
  }
  v10 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v8);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v16, (__int64)v10);
  v11 = v16;
  v16[1] = Rect;
  v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
         (__int64)v11,
         (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
         &v15);
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v16);
  if ( v9 < 0 )
    goto LABEL_6;
  v14 = (**v15)(v15, a3, a4);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v9 = 0;
    goto LABEL_11;
  }
  v12 = (unsigned int)v14;
  v13 = 285LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v12);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v9;
}
