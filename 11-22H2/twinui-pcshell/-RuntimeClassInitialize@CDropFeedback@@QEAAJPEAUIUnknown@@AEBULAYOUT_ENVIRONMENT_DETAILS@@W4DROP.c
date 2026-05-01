/*
 * XREFs of ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1805E9FEC
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1805E8FE4 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18057CB00 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805E84D4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RegisterWindowClass@CDropFeedback@@AEAAXXZ @ 0x1805EB0DC (-_RegisterWindowClass@CDropFeedback@@AEAAXXZ.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x1805EB178 (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropFeedback::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, int a4)
{
  __int64 *v7; // rbx
  const struct _GUID *v8; // rcx
  int Instance; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  const struct _GUID *v12; // rcx
  CDropFeedback *v13; // rcx
  int v14; // r13d
  HWND WindowInBand; // rax
  const char *v16; // r9
  HWND v17; // r15
  LONG_PTR WindowLongPtrW; // rax
  int v20; // eax
  int v21; // r9d
  int cy; // ecx
  int v23; // r8d
  __int64 *v24; // rbx
  int Service; // eax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, HWND, __int64, __int64 *); // rsi
  __int64 *v29; // rdi
  __int64 v30; // r9
  DCompThumbnailHelpers **v31; // r15
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v34; // rbx
  __int64 *v35; // rdi
  __int64 *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r12
  DCompThumbnailHelpers *v39; // rsi
  _QWORD *v40; // r15
  __int64 (__fastcall *v41)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v42; // rbx
  DWORD SysColor; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // [rsp+70h] [rbp-19h] BYREF
  __int64 v47; // [rsp+78h] [rbp-11h] BYREF
  int v48; // [rsp+80h] [rbp-9h]
  __int64 v49; // [rsp+88h] [rbp-1h] BYREF
  IUnknown *v50; // [rsp+90h] [rbp+7h]
  int v51; // [rsp+98h] [rbp+Fh] BYREF
  int v52; // [rsp+9Ch] [rbp+13h]
  int v53; // [rsp+A0h] [rbp+17h]
  int v54; // [rsp+A4h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v50 = a2;
  *(_DWORD *)(a1 + 120) = a4;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 128, &v46);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  Instance = CDropFeedbackList_CreateInstance(v8, (void **)v7);
  if ( Instance >= 0 )
  {
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 136, &v46);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    Instance = CDropFeedbackList_CreateInstance(v12, (void **)v11);
    if ( Instance < 0 )
    {
      v10 = 108LL;
      goto LABEL_3;
    }
    CDropFeedback::_RegisterWindowClass(v13);
    v14 = *(_DWORD *)(a1 + 120) & 8;
    WindowInBand = (HWND)CreateWindowInBand(
                           136315008LL,
                           L"ImmersiveDropFeedback",
                           &LocaleName,
                           0x80000000LL,
                           0,
                           0,
                           0,
                           0,
                           0LL,
                           0LL,
                           &_ImageBase,
                           a1,
                           v14 != 0 ? 1 : 5);
    v17 = WindowInBand;
    if ( !WindowInBand )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x7D,
               (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
               v16);
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v17, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 32);
    v20 = *(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 72);
    v21 = *(_DWORD *)(a1 + 76);
    cy = *(_DWORD *)(a1 + 84) - v21;
    v23 = *(_DWORD *)(a1 + 72);
    LODWORD(v46) = cy;
    v48 = v20;
    if ( v14 )
      SetWindowPos(v17, 0LL, v23, v21, v20, cy, 0x14u);
    else
      SetWindowPos(v17, (HWND)1, v23, v21, v20, cy, 0x10u);
    CDropFeedback::_SetThreadPriority((CDropFeedback *)a1, 1);
    v49 = 0LL;
    v24 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v49, &v47);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
    Service = IUnknown_QueryService(a2, &stru_18089FBF8, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, (void **)v24);
    Instance = Service;
    if ( Service >= 0 )
    {
      v27 = v49;
      v28 = *(__int64 (__fastcall **)(__int64, HWND, __int64, __int64 *))(*(_QWORD *)v49 + 56LL);
      v29 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 144, &v47);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v29);
      Service = v28(v27, v17, 1LL, v29);
      Instance = Service;
      if ( Service >= 0 )
      {
        v31 = (DCompThumbnailHelpers **)(a1 + 144);
        LOBYTE(v30) = -1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 144) + 144LL))(
          *(_QWORD *)(a1 + 144),
          4LL,
          0xFFFFFFLL,
          v30);
        v32 = *(_QWORD *)(a1 + 144);
        v51 = 0;
        v52 = 0;
        v53 = v48;
        v54 = v46;
        v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v32 + 120LL);
        v34 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 160, &v47);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v34);
        LODWORD(v46) = v53 - v51;
        HIDWORD(v46) = v54 - v52;
        Service = v33(v32, 0LL, v46, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v34);
        Instance = Service;
        if ( Service >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(
            *(_QWORD *)(a1 + 160),
            &v51,
            0LL,
            0LL);
          v46 = 0LL;
          if ( v14 )
          {
            v38 = v46;
          }
          else
          {
            v35 = (__int64 *)(a1 + 168);
            v36 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 168, &v47);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v36);
            Service = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                        *v31,
                        0LL,
                        (struct IDCompThumbnail *)(a1 + 72),
                        0LL,
                        (const struct tagSIZE *)v36);
            Instance = Service;
            if ( Service < 0 )
            {
              v26 = 171LL;
              goto LABEL_26;
            }
            (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)*v35 + 24LL))(*v35, &v51, 0LL, 0LL);
            LOBYTE(v37) = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)*v35 + 152LL))(*v35, 0LL, v37);
            v38 = *v35;
          }
          v39 = *v31;
          v40 = (_QWORD *)(a1 + 176);
          v41 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v39 + 112LL);
          v42 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1 + 176, &v47);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v42);
          v46 = 0x100000001LL;
          SysColor = GetSysColor(8);
          Service = v41(v39, 0LL, SysColor, v46, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v42);
          Instance = Service;
          if ( Service >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v40 + 32LL))(*v40, v44, 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)*v40 + 24LL))(*v40, &v51, 0LL, 0LL);
            LOBYTE(v45) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v40 + 152LL))(*v40, v38, v45);
            Instance = (*(__int64 (__fastcall **)(__int64, IUnknown *))(*(_QWORD *)a1 + 24LL))(a1, v50);
            goto LABEL_28;
          }
          v26 = 179LL;
        }
        else
        {
          v26 = 162LL;
        }
      }
      else
      {
        v26 = 156LL;
      }
    }
    else
    {
      v26 = 155LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
      (const char *)(unsigned int)Service);
LABEL_28:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
    return (unsigned int)Instance;
  }
  v10 = 107LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
