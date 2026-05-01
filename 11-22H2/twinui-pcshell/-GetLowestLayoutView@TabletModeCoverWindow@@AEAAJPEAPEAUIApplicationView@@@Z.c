/*
 * XREFs of ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805D9B30
 * Callers:
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E6766 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeCoverWindow::GetLowestLayoutView(
        TabletModeCoverWindow *this,
        struct IApplicationView **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, GUID *, struct IUnknown **); // rdi
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, __int64, GUID *, int *); // rdi
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, GUID *, struct IUnknown **); // rdi
  int v28; // eax
  struct IApplicationView *v30; // rax
  struct IUnknown *v31; // [rsp+30h] [rbp-10h] BYREF
  int v32[2]; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v34; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v35; // [rsp+88h] [rbp+48h] BYREF
  __int64 v36; // [rsp+90h] [rbp+50h] BYREF
  __int64 v37; // [rsp+98h] [rbp+58h] BYREF

  *a2 = 0LL;
  v37 = 0LL;
  v4 = *((_QWORD *)this + 18);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
  v6 = v5(v4, &v37);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 80LL))(v37, 1LL);
    v9 = v8;
    if ( v8 == 1 )
    {
      v34 = 0LL;
      v10 = v37;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v37 + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
      v12 = v11(v10, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v34);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IApplicationView **))(*(_QWORD *)v34 + 48LL))(
                v34,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                a2);
        v7 = v12;
        if ( v12 >= 0 )
        {
LABEL_9:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
          goto LABEL_27;
        }
        v13 = 349LL;
      }
      else
      {
        v13 = 348LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_9;
    }
    if ( v8 > 1 )
    {
      v36 = 0LL;
      v14 = *((_QWORD *)this + 19);
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
      v16 = v15(v14, &v36);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 355LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v16);
LABEL_33:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
        goto LABEL_27;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 24LL))(v36, &v34);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 357LL;
        goto LABEL_15;
      }
      v18 = v34;
      if ( (_DWORD)v34 )
      {
        while ( 1 )
        {
          v35 = 0LL;
          v19 = v36;
          v20 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v36 + 32LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v35);
          v21 = v20(v19, (unsigned int)(v18 - 1), &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v35);
          if ( v21 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x169,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)v21);
LABEL_24:
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v35);
          if ( !--v18 )
            goto LABEL_25;
        }
        v22 = 0;
        while ( 1 )
        {
          *(_QWORD *)v32 = 0LL;
          v23 = v37;
          v24 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v37 + 104LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
          v25 = v24(v23, v22, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v32);
          v7 = v25;
          if ( v25 < 0 )
            break;
          v31 = 0LL;
          v26 = *(_QWORD *)v32;
          v27 = *(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(**(_QWORD **)v32 + 48LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
          v28 = v27(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v31);
          v7 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x170,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)v28);
            goto LABEL_30;
          }
          if ( (unsigned int)SHIsSameObject(v31, v35) )
          {
            v30 = (struct IApplicationView *)v35;
            v35 = 0LL;
            *a2 = v30;
            v7 = 0;
LABEL_30:
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
            goto LABEL_32;
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
          if ( ++v22 >= v9 )
            goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16E,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v25);
LABEL_32:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v35);
        goto LABEL_33;
      }
LABEL_25:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    }
    v7 = -2147467259;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x157,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v6);
LABEL_27:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
  return v7;
}
