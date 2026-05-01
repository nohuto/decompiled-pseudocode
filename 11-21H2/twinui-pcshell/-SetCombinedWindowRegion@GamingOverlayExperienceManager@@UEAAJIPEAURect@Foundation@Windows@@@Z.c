/*
 * XREFs of ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x1803392E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033AEF0 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::SetCombinedWindowRegion(
        GamingOverlayExperienceManager *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  HRGN RectRgn; // rax
  HRGN v16; // rbx
  unsigned int v17; // edi
  __m128 v18; // xmm2
  float v19; // xmm1_4
  HRGN v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int updated; // eax
  unsigned __int64 v24; // r9
  HWND hWnd; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HRGN hrgnSrc2; // [rsp+60h] [rbp+30h] BYREF
  HRGN hrgnDst; // [rsp+70h] [rbp+40h] BYREF
  __int64 v31; // [rsp+78h] [rbp+48h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v27 = v3;
  if ( a3 )
  {
    v9 = *((_QWORD *)this + 20);
    if ( !v9 )
    {
      v7 = -2147418113;
      v8 = 494LL;
      goto LABEL_5;
    }
    v31 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
    v11 = v10(v9, &v31);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 498LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)v12);
LABEL_30:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
      goto LABEL_31;
    }
    hWnd = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v31 + 24LL))(v31, &hWnd);
    v7 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 502LL;
      goto LABEL_12;
    }
    if ( !hWnd )
    {
      v7 = -2147418113;
      v13 = 503LL;
      v12 = 2147549183LL;
      goto LABEL_12;
    }
    hrgnDst = 0LL;
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v16 = hrgnDst;
    if ( hrgnDst )
    {
      v17 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v18 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          hrgnSrc2 = 0LL;
          v19 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
          v20 = CreateRectRgn(
                  (int)v18.m128_f32[0],
                  (int)v19,
                  (int)(float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] + v18.m128_f32[0]),
                  (int)(float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] + v19));
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
            (void **)&hrgnSrc2,
            v20);
          if ( !hrgnSrc2 )
            break;
          if ( !CombineRgn(v16, v16, hrgnSrc2, 2) )
          {
            v7 = -2147467259;
            v22 = 519LL;
            goto LABEL_22;
          }
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          ++v17;
          a3 = (struct Windows::Foundation::Rect *)((char *)a3 + 16);
          if ( v17 >= a2 )
            goto LABEL_18;
        }
        v7 = -2147024882;
        v22 = 515LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)v7);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
        goto LABEL_29;
      }
LABEL_18:
      if ( SetWindowRgn(hWnd, v16, 1) )
      {
        hrgnDst = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)((char *)this - 136),
                    0);
        v7 = updated;
        if ( updated >= 0 )
        {
          v7 = 0;
LABEL_29:
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
          goto LABEL_30;
        }
        v24 = (unsigned int)updated;
        v21 = 527LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)v24);
        goto LABEL_29;
      }
      v7 = -2147467259;
      v21 = 522LL;
    }
    else
    {
      v7 = -2147024882;
      v21 = 507LL;
    }
    v24 = v7;
    goto LABEL_28;
  }
  v7 = -2147467261;
  v8 = 493LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v7);
LABEL_31:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v27);
  return v7;
}
