/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180081F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1800C6C9C (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIImmersiveApplicationWindow@@@WRL@Microsoft@@QEAAXPEAUIImmersiveApplicationWindow@@@Z @ 0x180303C5C (-Attach@-$ComPtr@UIImmersiveApplicationWindow@@@WRL@Microsoft@@QEAAXPEAUIImmersiveApplicationWin.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18030C3B8 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 CImmersiveApp::GetWindowsInternal(__int64 a1, unsigned int a2, _QWORD *a3, ...)
{
  unsigned __int64 v3; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r14d
  char v11; // di
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  LPUNKNOWN v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct ITaskWindow *v20; // rcx
  void *v21; // rcx
  char v23; // al
  HRESULT (__stdcall *v24)(IUnknown *, const IID *const, void **); // rcx
  struct ITaskWindow *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rdi
  LPUNKNOWN v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  struct ITaskWindow *v34; // rcx
  __int64 v35; // rax
  const struct _GUID *v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  const struct _GUID *v39; // rdx
  void *v40; // rdx
  char v41; // [rsp+20h] [rbp-59h]
  LPUNKNOWN v42; // [rsp+28h] [rbp-51h] BYREF
  struct ITaskWindow *v43; // [rsp+30h] [rbp-49h] BYREF
  __int64 v44; // [rsp+38h] [rbp-41h] BYREF
  void *v45; // [rsp+40h] [rbp-39h] BYREF
  void *v46; // [rsp+48h] [rbp-31h] BYREF
  __int64 v47; // [rsp+50h] [rbp-29h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+58h] [rbp-21h] BYREF
  __int64 v49; // [rsp+60h] [rbp-19h] BYREF
  __int64 v50; // [rsp+68h] [rbp-11h] BYREF
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // [rsp+70h] [rbp-9h]
  IUnknown *v52; // [rsp+78h] [rbp-1h] BYREF
  HRESULT (__stdcall *v53)(IUnknown *, const IID *const, void **); // [rsp+80h] [rbp+7h]
  __int64 v54; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v55; // [rsp+90h] [rbp+17h]
  LPUNKNOWN v56; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v57; // [rsp+A0h] [rbp+27h] BYREF
  char v58; // [rsp+A8h] [rbp+2Fh]
  unsigned __int64 v59; // [rsp+F8h] [rbp+7Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+7Fh]
  va_list va1; // [rsp+100h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v59 = va_arg(va1, _QWORD);
  v3 = v59;
  *(_QWORD *)v59 = 0LL;
  v45 = 0LL;
  v7 = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  v8 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v8 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v8 )
  {
    v9 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v9 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v9 )
    {
      v33 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v33 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v33 )
      {
        v10 = -2147467262;
        goto LABEL_41;
      }
      v10 = -2147019873;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) )
        v10 = 0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) || a2 == 5 )
    {
      v10 = 0;
    }
    else
    {
      v10 = -2147019873;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v45);
    v10 = CEnumerableObjectCollection::CreateInstance(v37, v36, &v45);
  }
  if ( v10 < 0 )
    goto LABEL_41;
  if ( a2 == 3 )
  {
    v11 = 0;
LABEL_91:
    v42 = *(LPUNKNOWN *)(a1 + 312);
    if ( v42 )
    {
      v38 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v38 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( !v38 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
        v56 = v42;
        v57 = 0LL;
        v58 = 0;
        CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
          (const struct CTaskWindowFinder *)&v56,
          &v43,
          (unsigned __int64 *)va);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
        goto LABEL_33;
      }
      v46 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
      v10 = CImmersiveApplicationWindow_CreateInstance((HWND)v42, v39, &v46);
      if ( v10 >= 0 )
      {
        v40 = v46;
        v46 = 0LL;
        Microsoft::WRL::ComPtr<IImmersiveApplicationWindow>::Attach(&v47, v40);
        v11 = 0;
        v7 = v47;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
    }
    goto LABEL_31;
  }
  v11 = 1;
  if ( a2 == 2 )
    goto LABEL_91;
  if ( a2 - 4 > 1 )
    goto LABEL_46;
  v11 = 0;
  v50 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 496LL))(a1, &v50);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v50 + 24LL))(v50, &v52);
    if ( v10 >= 0 )
    {
      v42 = v52;
      v49 = 0LL;
      v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = 0LL;
      if ( v12 )
      {
        *v12 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v12[3] = 0LL;
        ppunkMarshal = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
        if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
        {
          v14 = ppunkMarshal;
          QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
          v15 = v12 + 3;
          v16 = v12[3];
          if ( v16 )
          {
            *v15 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            v15 = v12 + 3;
          }
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
            v14,
            &GUID_00000003_0000_0000_c000_000000000046,
            v15);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
        *((_DWORD *)v12 + 11) = 1;
        *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v12[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v12 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v12[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v12[6] = v42;
        v13 = v12;
        v10 = ((__int64 (__fastcall *)(_QWORD *, GUID *, __int64 *))CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'})(
                v12,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &v49);
      }
      else
      {
        v10 = -2147024882;
      }
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      if ( v10 >= 0 )
      {
        v7 = v49;
        v49 = 0LL;
        v47 = v7;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
      v11 = 0;
    }
  }
  if ( a2 == 4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) && v10 < 0 )
  {
    v10 = 0;
    a2 = 0;
    v11 = 1;
  }
  v17 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_31:
  if ( !v11 )
    goto LABEL_32;
LABEL_46:
  v23 = 1;
  v55 = *(_QWORD *)(a1 + 352);
  v24 = 0LL;
  QueryInterface = 0LL;
  if ( !v55 )
    goto LABEL_32;
  while ( v23 )
  {
    v25 = *(struct ITaskWindow **)(*(_QWORD *)(a1 + 344) + 8LL * (_QWORD)v24);
    v41 = 1;
    if ( a2 > 2 )
    {
      v10 = -2147418113;
    }
    else
    {
      v26 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v26 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v26 )
      {
        v44 = 0LL;
        v54 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v25 + 32LL))(v25);
        v44 = 0LL;
        v27 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        v28 = 0LL;
        if ( v27 )
        {
          *v27 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v27[3] = 0LL;
          v42 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
          if ( CoCreateFreeThreadedMarshaler(0LL, &v42) >= 0 )
          {
            v29 = v42;
            v53 = v42->lpVtbl->QueryInterface;
            v30 = v27 + 3;
            v31 = v27[3];
            if ( v31 )
            {
              *v30 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v30 = v27 + 3;
            }
            ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v53)(
              v29,
              &GUID_00000003_0000_0000_c000_000000000046,
              v30);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
          *((_DWORD *)v27 + 11) = 1;
          *v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v27[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *v27 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v27[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v27[6] = v54;
          v28 = v27;
          v10 = ((__int64 (__fastcall *)(_QWORD *, GUID *, __int64 *))CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'})(
                  v27,
                  &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                  &v44);
        }
        else
        {
          v10 = -2147024882;
        }
        if ( v28 )
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
        if ( v10 >= 0 )
        {
          if ( v45 )
          {
            v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v45 + 40LL))(v45, v44);
          }
          else
          {
            v32 = v44;
            v44 = 0LL;
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
            v7 = v32;
            v47 = v32;
            v41 = 0;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
        if ( v41 && v10 >= 0 )
        {
          v23 = 1;
          goto LABEL_69;
        }
      }
      else if ( v43 != v25 )
      {
        if ( v25 )
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v25 + 8LL))(v25);
        v34 = v43;
        v43 = v25;
        if ( v34 )
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    v23 = 0;
LABEL_69:
    v24 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))((char *)QueryInterface + 1);
    QueryInterface = v24;
    if ( (unsigned __int64)v24 >= v55 )
      break;
  }
  v3 = v59;
LABEL_32:
  if ( v10 >= 0 )
  {
LABEL_33:
    v18 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
    if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
      v18 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
    if ( v18 )
    {
      v19 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
      if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
        v19 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
      if ( v19 )
      {
        v35 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
        if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
          v35 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
        if ( !v35 )
        {
          if ( !v43 )
            goto LABEL_111;
          v10 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, unsigned __int64))v43)(v43, a3, v3);
        }
      }
      else
      {
        if ( v7 )
        {
          v10 = (**(__int64 (__fastcall ***)(__int64, _QWORD *, unsigned __int64))v7)(v7, a3, v3);
          goto LABEL_41;
        }
LABEL_111:
        v10 = -2147019873;
      }
    }
    else
    {
      v10 = (**(__int64 (__fastcall ***)(void *, _QWORD *, unsigned __int64))v45)(v45, a3, v3);
    }
  }
LABEL_41:
  v20 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
  v21 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v10;
}
