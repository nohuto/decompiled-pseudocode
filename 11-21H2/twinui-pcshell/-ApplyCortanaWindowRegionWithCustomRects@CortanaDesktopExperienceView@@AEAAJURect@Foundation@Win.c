/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803A5D04
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AA2FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(__int64 a1, float *a2)
{
  __m128 v4; // xmm2
  float v5; // xmm1_4
  int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  HMONITOR v9; // r8
  int v10; // ebp
  unsigned int v11; // esi
  HMONITOR v12; // r8
  HMONITOR v13; // r8
  int v14; // ebx
  HMONITOR v15; // r8
  int v16; // eax
  HRGN RectRgn; // rax
  __int64 v18; // r8
  int v19; // eax
  int v21[2]; // [rsp+20h] [rbp-48h] BYREF
  RECT rc; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
  rc.left = (int)v4.m128_f32[0];
  v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  rc.top = (int)v5;
  rc.right = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5);
  v6 = (unsigned int)MonitorFromRect(&rc, 0);
  v7 = 0;
  *(_QWORD *)v21 = 0LL;
  v8 = (int)a2[1];
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v8 + (int)a2[3]), v6, v9);
  v11 = (int)*a2;
  LODWORD(a2) = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v11 + (int)a2[2]), v6, v12);
  v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, v6, v13);
  v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v11, v6, v15);
  RectRgn = CreateRectRgn(v16, v14, (int)a2, v10);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)v21,
    RectRgn);
  if ( *(_QWORD *)v21 )
  {
    LOBYTE(v18) = 1;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 168) + 144LL))(
            *(_QWORD *)(a1 + 168),
            *(_QWORD *)v21,
            v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7EC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v19);
  }
  else
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)v21);
  return v7;
}
