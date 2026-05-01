/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18007754C
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800601D8 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180075654 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  int v9; // eax
  int v10; // ebx
  __int64 (__fastcall *v11)(struct IApplicationView *, __int64 *); // rbx
  int OffsetRectFromSize; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, __int64, __int64, __int64 *); // rbx
  CDesktopPositioner *v17; // rcx
  CCommonApplicationViewPosition *v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  CCommonApplicationViewPosition *v21; // rax
  __int64 v22; // rcx
  int fixed; // eax
  int v24; // [rsp+20h] [rbp-79h]
  __int64 v25; // [rsp+30h] [rbp-69h] BYREF
  __int64 v26; // [rsp+38h] [rbp-61h] BYREF
  int v27; // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v28; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h]
  __int64 v31; // [rsp+60h] [rbp-39h]
  __int64 v32; // [rsp+68h] [rbp-31h] BYREF
  __int64 v33; // [rsp+70h] [rbp-29h]
  __int64 v34; // [rsp+78h] [rbp-21h]
  struct tagRECT v35; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v36; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a4 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v29);
  v30 = -1LL;
  v31 = -1LL;
  v9 = v8(a2, &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x635,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9,
      v24);
    goto LABEL_7;
  }
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v11 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 488LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v32);
  v33 = -1LL;
  v34 = -1LL;
  OffsetRectFromSize = v11(a2, &v32);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1592LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)OffsetRectFromSize,
      v24);
    goto LABEL_6;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 36) + 24LL))(
                         *((_QWORD *)this + 36),
                         v29,
                         &v27);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1595LL;
    goto LABEL_15;
  }
  if ( v27 == 1 )
  {
    OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagSIZE *))(**((_QWORD **)this + 36) + 40LL))(
                           *((_QWORD *)this + 36),
                           v29,
                           &v28);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1602LL;
      goto LABEL_15;
    }
    OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v28, &v36);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1608LL;
      goto LABEL_15;
    }
    v26 = 0LL;
    if ( IsRectEmpty(a3) )
    {
      v15 = *((_QWORD *)this + 35);
      v16 = *(int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      if ( v16(v15, v29, v32, &v26) >= 0
        && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v26 + 56LL))(v26, &v37) >= 0
        && (int)CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v17, &v37, &v35) >= 0 )
      {
        v36.left = v35.left;
        v36.top = v35.top;
        v36.right = v28.cx + v35.left;
        v36.bottom = v35.top + v28.cy;
      }
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v25 = 0LL;
    v18 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v35.left = v18;
    if ( v18 )
    {
      v21 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v18);
      *(_QWORD *)&v35.left = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v35, (__int64)v21);
      v22 = *(_QWORD *)&v35.left;
      *(struct tagRECT *)(*(_QWORD *)&v35.left + 16LL) = v36;
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
              v22,
              (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
              &v25);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v35.left);
      if ( v10 >= 0 )
      {
        fixed = CDesktopPositioner::_FixPosition(this, 2u, v25, (__int64 *)a4);
        v10 = fixed;
        if ( fixed >= 0 )
        {
          v10 = 0;
          goto LABEL_29;
        }
        v19 = (unsigned int)fixed;
        v20 = 1633LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)v19,
          v24);
LABEL_29:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
        goto LABEL_6;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v35);
      v10 = -2147024882;
    }
    v19 = (unsigned int)v10;
    v20 = 1632LL;
    goto LABEL_24;
  }
  v10 = -2147023728;
LABEL_6:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v32);
LABEL_7:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v29);
  return (unsigned int)v10;
}
