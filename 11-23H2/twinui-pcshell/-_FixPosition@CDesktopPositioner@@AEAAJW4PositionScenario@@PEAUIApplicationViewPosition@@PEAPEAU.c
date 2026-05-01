/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180075858 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18007754C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1805B3250 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B58FC (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18005FFEC (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1800755B0 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180075654 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180076B80 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180076D54 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1805B23E0 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1805B23E0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(CDesktopPositioner *a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int DefaultRect; // eax
  int v11; // ebx
  CDesktopPositioner *v12; // rcx
  CDesktopPositioner *v13; // rcx
  int fixed; // eax
  CCommonApplicationViewPosition *v16; // rax
  CCommonApplicationViewPosition *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  CDesktopPositioner *v24; // rcx
  CCommonApplicationViewPosition *v25; // rax
  CCommonApplicationViewPosition *v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-E0h]
  CCommonApplicationViewPosition *v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  CCommonApplicationViewPosition *v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v35[44]; // [rsp+60h] [rbp-A0h]
  struct tagRECT v36; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v39; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  struct tagRECT v42; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v43; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v44; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h]
  __m128i v46; // [rsp+118h] [rbp+18h]
  __int128 v47; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v8 = 0;
  v30 = 0LL;
  *a4 = 0LL;
  v34 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
  v32 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(&v34, &v32) < 0 )
  {
    if ( !*((_DWORD *)a1 + 138) )
    {
      v11 = 0;
      goto LABEL_14;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)a3 + 24LL))(a3, &v43);
    v11 = fixed;
    if ( fixed < 0 )
    {
      v22 = 2211LL;
    }
    else
    {
      fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, &v43, 0LL);
      v11 = fixed;
      if ( fixed >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
        v30 = 0LL;
        v16 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
        v29 = v16;
        if ( v16 )
        {
          v17 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v16);
          v29 = 0LL;
          Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v29, (__int64)v17);
          v18 = (__int64)v29;
          *((_OWORD *)v29 + 1) = v47;
          v11 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
                  v18,
                  (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
                  &v30);
          Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v29);
          if ( v11 >= 0 )
          {
LABEL_23:
            v19 = v30;
            v30 = 0LL;
            *a4 = v19;
            goto LABEL_15;
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v29);
          v11 = -2147024882;
        }
        v23 = (unsigned int)v11;
        v22 = 2217LL;
LABEL_55:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)v23,
          v28);
        goto LABEL_14;
      }
      if ( fixed == -2147024809 )
      {
        fixed = CDesktopPositioner::_GetDefaultRect(a1, &v43, 0, &v36);
        v11 = fixed;
        if ( fixed >= 0 )
        {
          if ( a2 == 4 )
          {
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
            v30 = 0LL;
            v25 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
            v29 = v25;
            if ( v25 )
            {
              v26 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v25);
              v29 = 0LL;
              Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v29, (__int64)v26);
              v27 = (__int64)v29;
              *((struct tagRECT *)v29 + 1) = v36;
              v11 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
                      v27,
                      (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
                      &v30);
              Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v29);
              if ( v11 >= 0 )
                goto LABEL_23;
            }
            else
            {
              Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v29);
              v11 = -2147024882;
            }
            v23 = (unsigned int)v11;
            v22 = 2230LL;
            goto LABEL_55;
          }
          fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v24, &v36, &v37);
          v11 = fixed;
          if ( fixed >= 0 )
          {
            v31 = 3;
            fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                      &v30,
                      &v31,
                      &v37);
            v11 = fixed;
            if ( fixed >= 0 )
              goto LABEL_23;
            v22 = 2237LL;
          }
          else
          {
            v22 = 2236LL;
          }
        }
        else
        {
          v22 = 2224LL;
        }
      }
      else
      {
        v22 = 2242LL;
      }
    }
    v23 = (unsigned int)fixed;
    goto LABEL_55;
  }
  v9 = (__int64)v32;
  v29 = v32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
  if ( !a2 )
  {
    DefaultRect = (*(__int64 (__fastcall **)(CCommonApplicationViewPosition *, int *))(*(_QWORD *)v32 + 32LL))(
                    v32,
                    &v33);
    v11 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v20 = 2144LL;
    }
    else
    {
      DefaultRect = (*(__int64 (__fastcall **)(CCommonApplicationViewPosition *, __int128 *))(*(_QWORD *)v32 + 72LL))(
                      v32,
                      &v44);
      v11 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v20 = 2149LL;
      }
      else
      {
        *(_DWORD *)v35 = 44;
        *(_OWORD *)&v35[4] = v44;
        *(_QWORD *)&v35[20] = v45;
        *(__m128i *)&v35[28] = v46;
        v38 = *(_OWORD *)v35;
        v39 = *(struct tagRECT *)&v35[16];
        v40 = *(__int64 *)((char *)v46.m128i_i64 + 4);
        v41 = _mm_cvtsi128_si32(_mm_srli_si128(v46, 12));
        if ( v33 == 1 )
        {
          DefaultRect = (*(__int64 (__fastcall **)(CCommonApplicationViewPosition *, int *))(*(_QWORD *)v32 + 64LL))(
                          v32,
                          &v31);
          v11 = DefaultRect;
          if ( DefaultRect < 0 )
          {
            v20 = 2157LL;
            goto LABEL_36;
          }
          DWORD2(v38) = (v31 != 1) + 3;
        }
        DefaultRect = (*(__int64 (__fastcall **)(CCommonApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v32 + 56LL))(
                        v32,
                        &v42);
        v11 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v20 = 2165LL;
        }
        else
        {
          DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v12, &v42, &v37);
          v11 = DefaultRect;
          if ( DefaultRect < 0 )
          {
            v20 = 2169LL;
          }
          else
          {
            if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v37, 0LL) == -2147024809 )
            {
              DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v42, 0, &v36);
              v11 = DefaultRect;
              if ( DefaultRect < 0 )
              {
                v20 = 2177LL;
                goto LABEL_36;
              }
              v21 = DWORD2(v38);
              if ( v33 == 2 )
                v21 = 3;
              DWORD2(v38) = v21;
            }
            DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v13, &v36, (struct tagRECT *)&v39.bottom);
            v11 = DefaultRect;
            if ( DefaultRect < 0 )
            {
              v20 = 2187LL;
            }
            else
            {
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
              DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                              &v29,
                              &v38);
              v11 = DefaultRect;
              if ( DefaultRect >= 0 )
              {
                v9 = (__int64)v29;
                goto LABEL_12;
              }
              v20 = 2189LL;
            }
          }
        }
      }
    }
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      v28);
    goto LABEL_13;
  }
LABEL_12:
  v29 = 0LL;
  *a4 = v9;
  v11 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
LABEL_14:
  v8 = v11;
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  return v8;
}
