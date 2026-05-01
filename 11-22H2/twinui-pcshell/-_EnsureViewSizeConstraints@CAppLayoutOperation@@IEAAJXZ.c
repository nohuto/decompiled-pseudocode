/*
 * XREFs of ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x180792D98
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805CA804 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1807940F4 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureViewSizeConstraints(CAppLayoutOperation *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 (__fastcall *v5)(__int64, __int64, __int64 *, _QWORD); // rsi
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *, __int64 *); // rsi
  __int64 *v11; // rdi
  int v12; // eax
  __int64 **v13; // rax
  int v14; // eax
  __int64 v15; // r14
  int (__fastcall *v16)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *); // rsi
  __int64 *v17; // rdi
  __int64 v18; // r14
  __int64 (__fastcall *v19)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *); // rsi
  __int64 *v20; // rdi
  int ViewFullScreen; // eax
  __int64 v22; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v23; // rdx
  enum DEVICE_SCALE_FACTOR v24; // r8d
  int v25; // r14d
  int v26; // esi
  int v27; // r13d
  int v28; // r12d
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, GUID *, __int64 *); // rsi
  __int64 *v32; // rdi
  int v33; // eax
  __int64 v34; // [rsp+48h] [rbp-59h] BYREF
  __int64 v35; // [rsp+50h] [rbp-51h] BYREF
  __int64 v36; // [rsp+58h] [rbp-49h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-41h] BYREF
  __int64 v38; // [rsp+68h] [rbp-39h] BYREF
  __int128 v39; // [rsp+70h] [rbp-31h] BYREF
  __int128 v40; // [rsp+80h] [rbp-21h] BYREF
  __int128 v41; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v42[10]; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5))
    && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5)) )
  {
    v2 = (__int64 *)((char *)this + 64);
    v3 = 0LL;
    v38 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v38, v2);
      v3 = v38;
    }
    else
    {
      v9 = *((_QWORD *)this + 5);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 104LL);
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v2, &v35);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
      v12 = v10(v9, 0LL, 1LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v11);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x185,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v12);
LABEL_21:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v38);
        return v8;
      }
    }
    v4 = *((_QWORD *)this + 5);
    v37 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 152LL);
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v37, &v35);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
    v7 = v5(v4, v3, v6, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v7);
LABEL_20:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
      goto LABEL_21;
    }
    v36 = 0LL;
    v13 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v36, &v35);
    v14 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v37, *v13);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v14);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
      goto LABEL_20;
    }
    v15 = *((_QWORD *)this + 5);
    v34 = 0LL;
    v16 = *(int (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 120LL);
    v17 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v34, &v35);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
    if ( v16(v15, v37, 1LL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v17) < 0 )
    {
      v18 = *((_QWORD *)this + 5);
      v19 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 120LL);
      v20 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v34, &v35);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
      ViewFullScreen = v19(v18, v37, 0xFFFFFFFFLL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v20);
      v8 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v22 = 402LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)ViewFullScreen);
        goto LABEL_18;
      }
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v42);
    v25 = v42[2] - v42[0];
    v26 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v42, v23, v24);
    v27 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v36 + 80LL))(
            v36,
            v42,
            (unsigned int)(v25 - v26));
    v28 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v34 + 80LL))(
            v34,
            v42,
            (unsigned int)(v25 - v26));
    if ( v26 + v28 + v27 > v25 )
    {
      ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(this, v3, 5LL);
      v8 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v22 = 458LL;
        goto LABEL_31;
      }
LABEL_17:
      v8 = 0;
LABEL_18:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
      goto LABEL_19;
    }
    v40 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v36 + 56LL))(v36, 0LL, &v40);
    v39 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v34 + 56LL))(v34, 0LL, &v39);
    if ( DWORD2(v40) - (int)v40 < v27 )
    {
      DWORD2(v40) = v40 + v27;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v36 + 104LL))(v36, 0LL, &v40);
      v41 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v34 + 104LL))(v34, 0LL, &v41);
      CAppLayoutOperation::_FinalizeLayout(this, 1LL);
      goto LABEL_17;
    }
    if ( DWORD2(v39) - (int)v39 >= v28 )
      goto LABEL_17;
    v35 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34) == 1 )
    {
      v30 = v34;
      v31 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v34 + 48LL);
      v32 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v35, &v41);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v32);
      v33 = v31(v30, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v32);
      if ( v33 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B9,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v33);
LABEL_28:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
        goto LABEL_17;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 184LL))(
             *((_QWORD *)this + 4),
             v35) )
      {
        goto LABEL_28;
      }
    }
    DWORD2(v39) = v28 + v39;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v34 + 104LL))(v34, 0LL, &v39);
    v41 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v36 + 104LL))(v36, 0LL, &v41);
    CAppLayoutOperation::_FinalizeLayout(this, 1LL);
    goto LABEL_28;
  }
  return 0LL;
}
