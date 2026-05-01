/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0A94 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F15EC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1804FB0B0 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FD118 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003AD20 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003ADC4 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180056600 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F00B8 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1800F12CC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1590 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804FA524 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1804FA524.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(CDesktopPositioner *a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  unsigned int v8; // edi
  int fixed; // eax
  int v10; // ebx
  void *v11; // rax
  __int64 v13; // rbx
  int DefaultRect; // eax
  CDesktopPositioner *v15; // rcx
  CDesktopPositioner *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  CDesktopPositioner *v20; // rcx
  void *v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[44]; // [rsp+60h] [rbp-A0h]
  struct tagRECT v28; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v29; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v31; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  struct tagRECT v34; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v35; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v36; // [rsp+100h] [rbp+0h] BYREF
  __int64 v37; // [rsp+110h] [rbp+10h]
  __m128i v38; // [rsp+118h] [rbp+18h]
  struct tagRECT v39; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v8 = 0;
  v21 = 0LL;
  *a4 = 0LL;
  v26 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
  v23 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(&v26, &v23) >= 0 )
  {
    v13 = v23;
    v24 = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
    if ( a2 )
    {
LABEL_18:
      v24 = 0LL;
      *a4 = v13;
      v10 = 0;
LABEL_19:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
LABEL_20:
      v8 = v10;
      goto LABEL_7;
    }
    DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 32LL))(v23, &v25);
    v10 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v17 = 1742LL;
    }
    else
    {
      DefaultRect = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 72LL))(v23, &v36);
      v10 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v17 = 1747LL;
      }
      else
      {
        *(_DWORD *)v27 = 44;
        *(_OWORD *)&v27[4] = v36;
        *(_QWORD *)&v27[20] = v37;
        *(__m128i *)&v27[28] = v38;
        v30 = *(_OWORD *)v27;
        v31 = *(struct tagRECT *)&v27[16];
        v32 = *(__int64 *)((char *)v38.m128i_i64 + 4);
        v33 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
        if ( v25 == 1 )
        {
          DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 64LL))(v23, &v22);
          v10 = DefaultRect;
          if ( DefaultRect < 0 )
          {
            v17 = 1755LL;
            goto LABEL_36;
          }
          DWORD2(v30) = (v22 != 1) + 3;
        }
        DefaultRect = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v23 + 56LL))(v23, &v34);
        v10 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v17 = 1763LL;
        }
        else
        {
          DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v15, &v34, &v29);
          v10 = DefaultRect;
          if ( DefaultRect < 0 )
          {
            v17 = 1767LL;
          }
          else
          {
            if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v29, 0LL, &v28) == -2147024809 )
            {
              DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v34, 0, &v28);
              v10 = DefaultRect;
              if ( DefaultRect < 0 )
              {
                v17 = 1775LL;
                goto LABEL_36;
              }
              v18 = DWORD2(v30);
              if ( v25 == 2 )
                v18 = 3;
              DWORD2(v30) = v18;
            }
            DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v16, &v28, (struct tagRECT *)&v31.bottom);
            v10 = DefaultRect;
            if ( DefaultRect < 0 )
            {
              v17 = 1785LL;
            }
            else
            {
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
              DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                              &v24,
                              &v30);
              v10 = DefaultRect;
              if ( DefaultRect >= 0 )
              {
                v13 = v24;
                goto LABEL_18;
              }
              v17 = 1787LL;
            }
          }
        }
      }
    }
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect);
    goto LABEL_19;
  }
  if ( !*((_DWORD *)a1 + 126) )
  {
    v10 = 0;
    goto LABEL_20;
  }
  fixed = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)a3 + 24LL))(a3, &v35);
  v10 = fixed;
  if ( fixed < 0 )
  {
    v19 = 1809LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)fixed);
    goto LABEL_20;
  }
  fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, &v35, 0LL, &v39);
  v10 = fixed;
  if ( fixed < 0 )
  {
    if ( fixed == -2147024809 )
    {
      fixed = CDesktopPositioner::_GetDefaultRect(a1, &v35, 0, &v28);
      v10 = fixed;
      if ( fixed >= 0 )
      {
        if ( a2 == 4 )
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
          fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                    &v21,
                    &v28);
          v10 = fixed;
          if ( fixed >= 0 )
            goto LABEL_6;
          v19 = 1828LL;
        }
        else
        {
          fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v20, &v28, &v29);
          v10 = fixed;
          if ( fixed >= 0 )
          {
            v22 = 3;
            fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                      &v21,
                      &v22,
                      &v29);
            v10 = fixed;
            if ( fixed >= 0 )
              goto LABEL_6;
            v19 = 1835LL;
          }
          else
          {
            v19 = 1834LL;
          }
        }
      }
      else
      {
        v19 = 1822LL;
      }
    }
    else
    {
      v19 = 1840LL;
    }
    goto LABEL_50;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v21,
            &v39);
  v10 = fixed;
  if ( fixed < 0 )
  {
    v19 = 1815LL;
    goto LABEL_50;
  }
LABEL_6:
  v11 = v21;
  v21 = 0LL;
  *a4 = (__int64)v11;
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  return v8;
}
