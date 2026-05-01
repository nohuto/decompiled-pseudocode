/*
 * XREFs of ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x180614B9C
 * Callers:
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x180513A90 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615920 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180512354 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615050 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictAllItems(__int64 a1, struct IUnknown *a2, unsigned int a3, char *a4)
{
  int v7; // eax
  char v8; // r15
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rsi
  __int64 *v16; // rdi
  int v17; // eax
  __int64 **v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v23; // [rsp+30h] [rbp-49h]
  struct IUnknown *v24; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  struct IUnknown *v27; // [rsp+50h] [rbp-29h]
  __int64 v28; // [rsp+58h] [rbp-21h] BYREF
  __int64 v29; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h] BYREF
  __int128 v31; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v27 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a3 > 0xA || (v7 = 1470, !_bittest(&v7, a3)) )
  {
    v13 = -2147024809;
    v20 = 314LL;
    goto LABEL_31;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 264LL))(*(_QWORD *)(a1 + 40), 6LL);
  v8 = 0;
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
  if ( !v23 )
    goto LABEL_16;
  do
  {
    v9 = *(_QWORD *)(a1 + 40);
    v25 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 96LL);
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v28);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    v12 = v10(v9, (unsigned int)(v23 - 1), &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_24;
    }
    v14 = v25;
    v24 = 0LL;
    v15 = (*v25)[6];
    v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v29);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v16);
    v17 = v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16);
    v13 = v17;
    if ( v17 < 0 )
    {
      v21 = 326LL;
      goto LABEL_21;
    }
    if ( !v8 && v27 && (unsigned int)SHIsSameObject(v24, v27) )
    {
      v26 = 0LL;
      v8 = 1;
      v18 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v30);
      v19 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v25, *v18);
      v13 = v19;
      if ( v19 >= 0 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v26 + 104LL))(v26, 0LL, &v31);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
        goto LABEL_14;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14F,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
LABEL_22:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
LABEL_24:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
      return (unsigned int)v13;
    }
    v17 = CAppLayoutOperation::_EvictView(a1, v24, a3);
    v13 = v17;
    if ( v17 < 0 )
    {
      v21 = 341LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_22;
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
    --v23;
  }
  while ( v23 );
  if ( v8 )
    goto LABEL_25;
LABEL_16:
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 240LL))(
          *(_QWORD *)(a1 + 40),
          0LL,
          0LL,
          0LL);
  if ( v13 >= 0 )
  {
LABEL_25:
    v13 = CAppLayoutOperation::_FinalizeLayout(a1, 1LL);
    if ( v13 < 0 )
    {
      v20 = 352LL;
      goto LABEL_31;
    }
    if ( a4 )
      *a4 = v8;
    return 0LL;
  }
  else
  {
    v20 = 349LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
}
