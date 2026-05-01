/*
 * XREFs of ?SetDropShadowEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x18055551C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x18054EE44 (--0-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUI.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall VirtualDesktopGestureWindow::SetDropShadowEffect(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        const struct Geometry::CRect *a3)
{
  __m128 v4; // xmm8
  int v5; // r9d
  __m128 v6; // xmm9
  __m128 v7; // xmm6
  __int64 v8; // rdx
  __m128 v9; // xmm7
  __int64 v10; // rax
  __int64 *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64); // rsi
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v35; // [rsp+28h] [rbp-59h] BYREF
  __int64 *v36; // [rsp+30h] [rbp-51h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 **); // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v40; // [rsp+50h] [rbp-31h] BYREF
  __int64 v41[2]; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-19h] BYREF
  int v43; // [rsp+70h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 *v45; // [rsp+E8h] [rbp+67h] BYREF
  __int64 *v46; // [rsp+F8h] [rbp+77h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+100h] [rbp+7Fh] BYREF

  v4 = (__m128)COERCE_UNSIGNED_INT((float)(*((_DWORD *)a3 + 2) - *(_DWORD *)a3));
  v5 = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
  v6 = (__m128)COERCE_UNSIGNED_INT((float)v5);
  v7 = (__m128)COERCE_UNSIGNED_INT((float)((*((_DWORD *)a3 + 2) - *(_DWORD *)a3) / 2));
  v8 = (unsigned int)(v5 >> 31);
  LODWORD(v8) = v5 % 2;
  v9 = (__m128)COERCE_UNSIGNED_INT((float)(v5 / 2));
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), v8);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
    v41,
    v10);
  v40 = 0LL;
  v11 = (__int64 *)v41[0];
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v41[0])(
          v41[0],
          &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0,
          &v40);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v45 = 0LL;
    v14 = *v40;
    v45 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 80))(v40, &v45);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 911LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v15);
LABEL_45:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v45);
      goto LABEL_46;
    }
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v45 + 56))(v45);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 912LL;
      goto LABEL_11;
    }
    v17 = *v45;
    LODWORD(v42) = 0;
    *((float *)&v42 + 1) = FLOAT_28_0;
    v43 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(v17 + 104))(v45, &v42);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 913LL;
      goto LABEL_11;
    }
    v18 = (__int64)v45;
    v19 = *(__int64 (__fastcall **)(__int64))(*v45 + 120);
    ShouldSystemUseDarkMode();
    v15 = v19(v18);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 914LL;
      goto LABEL_11;
    }
    v39 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v45)(
            v45,
            &GUID_329e52e2_4335_49cc_b14a_37782d10f0c4,
            &v39);
    v13 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x394,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v20);
LABEL_44:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
      goto LABEL_45;
    }
    v47 = 0LL;
    v21 = *v11;
    v47 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v21 + 176))(
            v11,
            &v47);
    v13 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x397,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v22);
LABEL_43:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v47);
      goto LABEL_44;
    }
    v38 = 0LL;
    v23 = (**v47)(v47, &GUID_588c9664_997a_4850_91fe_53cb58f81ce9, &v38);
    v13 = v23;
    if ( v23 < 0 )
    {
      v24 = 921LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v23);
LABEL_42:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
      goto LABEL_43;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 56LL))(v38, v39);
    v13 = v23;
    if ( v23 < 0 )
    {
      v24 = 922LL;
      goto LABEL_20;
    }
    v46 = 0LL;
    v25 = (**v47)(v47, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, (__int64 *)&v46);
    v13 = v25;
    if ( v25 < 0 )
    {
      v26 = 926LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v25);
LABEL_41:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v46);
      goto LABEL_42;
    }
    v27 = *v46;
    v42 = _mm_unpacklo_ps(_mm_xor_ps(v7, (__m128)_xmm), _mm_xor_ps(v9, (__m128)_xmm)).m128_u64[0];
    v43 = 0;
    v25 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(v27 + 168))(v46, &v42);
    v13 = v25;
    if ( v25 < 0 )
    {
      v26 = 927LL;
      goto LABEL_27;
    }
    v25 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v46 + 288))(
            v46,
            _mm_unpacklo_ps(v4, v6).m128_u64[0]);
    v13 = v25;
    if ( v25 < 0 )
    {
      v26 = 928LL;
      goto LABEL_27;
    }
    v28 = *(_QWORD *)a2;
    v37 = 0LL;
    v29 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v28 + 104))(
            a2,
            &v37);
    v13 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A4,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v29);
LABEL_40:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v37);
      goto LABEL_41;
    }
    v36 = 0LL;
    v30 = (**v37)(v37, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v36);
    v13 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v30);
LABEL_39:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_40;
    }
    v35 = 0LL;
    v31 = *v36;
    v35 = 0LL;
    v32 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v31 + 360))(v36, &v35);
    v13 = v32;
    if ( v32 >= 0 )
    {
      v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 64LL))(v35, v46);
      v13 = v32;
      if ( v32 >= 0 )
      {
        v13 = 0;
        goto LABEL_38;
      }
      v33 = 937LL;
    }
    else
    {
      v33 = 936LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v32);
LABEL_38:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38C,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v12);
LABEL_46:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v41);
  return v13;
}
