/*
 * XREFs of ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180406EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180408E14 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::SetCombinedWindowRegion(
        GamingOverlayExperienceManager *this,
        unsigned int a2,
        const __m128i *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  HRGN RectRgn; // rax
  HRGN v15; // rbx
  unsigned int v16; // esi
  __m128 v17; // xmm2
  float v18; // xmm1_4
  HRGN v19; // rax
  HRGN v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r9
  int updated; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v27; // [rsp+70h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+80h] [rbp+50h] BYREF
  HRGN hrgnDst; // [rsp+88h] [rbp+58h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 514LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_31;
  }
  v8 = *((_QWORD *)this + 25);
  if ( !v8 )
  {
    v6 = -2147418113;
    v7 = 515LL;
    goto LABEL_5;
  }
  v27 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
  v10 = v9(v8, &v27);
  v6 = v10;
  if ( v10 >= 0 )
  {
    hWnd = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v27 + 24LL))(v27, &hWnd);
    v6 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 523LL;
      goto LABEL_29;
    }
    if ( !hWnd )
    {
      v6 = -2147418113;
      v12 = 524LL;
LABEL_28:
      v11 = v6;
      goto LABEL_29;
    }
    hrgnDst = 0LL;
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v15 = hrgnDst;
    if ( !hrgnDst )
    {
      v6 = -2147024882;
      v12 = 528LL;
      goto LABEL_28;
    }
    v16 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v17 = (__m128)_mm_loadu_si128(a3);
        hrgnDst = 0LL;
        v18 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
        v19 = CreateRectRgn(
                (int)v17.m128_f32[0],
                (int)v18,
                (int)(float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] + v17.m128_f32[0]),
                (int)(float)(_mm_shuffle_ps(v17, v17, 255).m128_f32[0] + v18));
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&hrgnDst,
          v19);
        v20 = hrgnDst;
        if ( !hrgnDst )
          break;
        if ( !CombineRgn(v15, v15, hrgnDst, 2) )
        {
          v6 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x21C,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)0x80004005LL);
          DeleteObject(v20);
          goto LABEL_25;
        }
        DeleteObject(v20);
        ++v16;
        ++a3;
        if ( v16 >= a2 )
          goto LABEL_17;
      }
      v6 = -2147024882;
      v21 = 536LL;
      v22 = 2147942414LL;
    }
    else
    {
LABEL_17:
      if ( SetWindowRgn(hWnd, v15, 1) )
      {
        v15 = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)((char *)this - 136),
                    0);
        v6 = updated;
        if ( updated >= 0 )
        {
          v6 = 0;
LABEL_25:
          if ( v15 )
            DeleteObject(v15);
          goto LABEL_30;
        }
        v22 = (unsigned int)updated;
        v21 = 548LL;
      }
      else
      {
        v6 = -2147467259;
        v21 = 543LL;
        v22 = 2147500037LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v22);
    goto LABEL_25;
  }
  v11 = (unsigned int)v10;
  v12 = 519LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v11);
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
LABEL_31:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
