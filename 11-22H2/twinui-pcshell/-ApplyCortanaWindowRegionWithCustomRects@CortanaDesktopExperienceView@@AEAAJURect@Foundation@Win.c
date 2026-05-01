/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x180481118
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048570C (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(__int64 a1, float *a2)
{
  __m128 v4; // xmm2
  float v5; // xmm1_4
  int v6; // r14d
  unsigned int v7; // ebx
  HMONITOR v8; // r8
  int v9; // ebp
  unsigned int v10; // esi
  HMONITOR v11; // r8
  HMONITOR v12; // r8
  int v13; // ebx
  HMONITOR v14; // r8
  int v15; // eax
  HRGN RectRgn; // rax
  __int64 v17; // r8
  HGDIOBJ v18; // rbx
  unsigned int v19; // edi
  int v20; // eax
  HGDIOBJ ho; // [rsp+20h] [rbp-48h] BYREF
  RECT rc; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
  rc.left = (int)v4.m128_f32[0];
  v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  rc.top = (int)v5;
  rc.right = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5);
  v6 = (unsigned int)MonitorFromRect(&rc, 0);
  ho = 0LL;
  v7 = (int)a2[1];
  v9 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v7 + (int)a2[3]), v6, v8);
  v10 = (int)*a2;
  LODWORD(a2) = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v10 + (int)a2[2]), v6, v11);
  v13 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v7, v6, v12);
  v15 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v10, v6, v14);
  RectRgn = CreateRectRgn(v15, v13, (int)a2, v9);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    &ho,
    RectRgn);
  v18 = ho;
  if ( ho )
  {
    LOBYTE(v17) = 1;
    v20 = (*(__int64 (__fastcall **)(_QWORD, HGDIOBJ, __int64))(**(_QWORD **)(a1 + 168) + 144LL))(
            *(_QWORD *)(a1 + 168),
            ho,
            v17);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7EB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v20);
    v19 = 0;
  }
  else
  {
    v19 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  if ( v18 )
    DeleteObject(v18);
  return v19;
}
