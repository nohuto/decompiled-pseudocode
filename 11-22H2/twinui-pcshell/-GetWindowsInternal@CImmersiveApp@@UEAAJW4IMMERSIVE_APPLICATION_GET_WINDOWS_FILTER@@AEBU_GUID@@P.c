/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180014BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18001EB7C (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     _lambda_f70600182f61e42d33a098fa6c0f9983_::operator() @ 0x180025670 (_lambda_f70600182f61e42d33a098fa6c0f9983_--operator().c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800257A8 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIImmersiveApplicationWindow@@@WRL@Microsoft@@QEAAXPEAUIImmersiveApplicationWindow@@@Z @ 0x1803C01F4 (-Attach@-$ComPtr@UIImmersiveApplicationWindow@@@WRL@Microsoft@@QEAAXPEAUIImmersiveApplicationWin.c)
 */

// Hidden C++ exception states: #wind=10
__int64 CImmersiveApp::GetWindowsInternal(_QWORD *a1, int a2, _QWORD *a3, ...)
{
  void *v3; // rdi
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // rax
  int v10; // ecx
  char v11; // bl
  __int64 v12; // r14
  _QWORD *v13; // rdi
  LPUNKNOWN v14; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r14
  int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  struct ITaskWindow *v22; // rcx
  void *v23; // rcx
  char v25; // al
  unsigned __int64 v26; // r14
  unsigned __int64 i; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  HWND v30; // r14
  char v31; // al
  const struct _GUID *v32; // rdx
  int v33; // ecx
  __int64 v34; // rax
  const struct _GUID *v35; // rdx
  void *v36; // rdx
  int Instance; // [rsp+20h] [rbp-49h] BYREF
  char v38; // [rsp+24h] [rbp-45h]
  struct ITaskWindow *v39; // [rsp+28h] [rbp-41h] BYREF
  __int64 v40; // [rsp+30h] [rbp-39h] BYREF
  void *v41; // [rsp+38h] [rbp-31h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-29h] BYREF
  __int64 v43; // [rsp+48h] [rbp-21h] BYREF
  __int64 v44; // [rsp+50h] [rbp-19h] BYREF
  __int64 v45; // [rsp+58h] [rbp-11h] BYREF
  __int64 v46; // [rsp+60h] [rbp-9h]
  HWND v47; // [rsp+68h] [rbp-1h] BYREF
  void **v48; // [rsp+70h] [rbp+7h] BYREF
  __int64 *v49; // [rsp+78h] [rbp+Fh]
  _QWORD *v50; // [rsp+80h] [rbp+17h]
  struct ITaskWindow **v51; // [rsp+88h] [rbp+1Fh]
  int *v52; // [rsp+90h] [rbp+27h]
  void *v53; // [rsp+E8h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh]
  va_list va1; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v53 = va_arg(va1, void *);
  v3 = v53;
  *(_QWORD *)v53 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v7 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v7 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  v8 = -2147019873;
  if ( v7 )
  {
    v9 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v9 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v9 )
    {
      v28 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v28 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v28 )
      {
        Instance = -2147467262;
        goto LABEL_42;
      }
      v31 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1);
      v10 = -2147019873;
      if ( v31 )
        v10 = 0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) || a2 == 5 )
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
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v41);
    v10 = CEnumerableObjectCollection::CreateInstance(v33, v32, &v41);
  }
  Instance = v10;
  if ( v10 < 0 )
    goto LABEL_42;
  if ( a2 == 3 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a2 != 2 )
    {
      if ( (unsigned int)(a2 - 4) > 1 )
        goto LABEL_47;
      v11 = 0;
      v38 = 0;
      v44 = 0LL;
      Instance = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 496LL))(a1, &v44);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 24LL))(v44, &v45);
        if ( Instance >= 0 )
        {
          v12 = v45;
          v46 = v45;
          v43 = 0LL;
          v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v13 )
          {
            *v13 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
            v13[3] = 0LL;
            ppunkMarshal = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
            if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
            {
              v14 = ppunkMarshal;
              QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13 + 3);
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
                v14,
                &GUID_00000003_0000_0000_c000_000000000046,
                v13 + 3);
              v11 = v38;
              v12 = v46;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
            *((_DWORD *)v13 + 11) = 1;
            *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v13[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *v13 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v13[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v13[6] = v12;
            v16 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v13)(
                    v13,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v43);
          }
          else
          {
            v13 = 0LL;
            v16 = -2147024882;
          }
          if ( v13 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          Instance = v16;
          if ( v16 >= 0 )
          {
            v17 = v43;
            v43 = 0LL;
            if ( v40 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            v40 = v17;
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
          v3 = v53;
        }
      }
      if ( a2 == 4 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && Instance < 0 )
      {
        Instance = 0;
        a2 = 0;
        v11 = 1;
      }
      v18 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
LABEL_31:
      if ( !v11 )
        goto LABEL_32;
LABEL_47:
      LODWORD(v47) = a2;
      v48 = &v41;
      v49 = &v40;
      v50 = a3;
      v51 = &v39;
      v52 = &Instance;
      v25 = 1;
      v26 = a1[44];
      for ( i = 0LL;
            i < v26;
            v25 = lambda_f70600182f61e42d33a098fa6c0f9983_::operator()(&v47, *(_QWORD *)(a1[43] + 8 * i++)) )
      {
        if ( !v25 )
          break;
      }
      goto LABEL_32;
    }
  }
  v30 = (HWND)a1[39];
  if ( !v30 )
    goto LABEL_31;
  v34 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v34 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( v34 )
  {
    v53 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((void **)va);
    Instance = CImmersiveApplicationWindow_CreateInstance(v30, v35, (void **)va);
    if ( Instance >= 0 )
    {
      v36 = v53;
      v53 = 0LL;
      Microsoft::WRL::ComPtr<IImmersiveApplicationWindow>::Attach(&v40, v36);
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((void **)va);
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
  v47 = v30;
  v48 = 0LL;
  LOBYTE(v49) = 0;
  CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 22),
    (const struct CTaskWindowFinder *)&v47,
    &v39,
    (unsigned __int64 *)va);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v48);
LABEL_32:
  if ( Instance >= 0 )
  {
    v19 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
    if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
      v19 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
    if ( v19 )
    {
      v20 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
      if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
        v20 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
      if ( v20 )
      {
        v29 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
        if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
          v29 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
        if ( !v29 )
        {
          if ( v39 )
            v8 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, void *))v39)(v39, a3, v3);
          Instance = v8;
        }
      }
      else
      {
        if ( v40 )
          v8 = (**(__int64 (__fastcall ***)(__int64, _QWORD *, void *))v40)(v40, a3, v3);
        Instance = v8;
      }
    }
    else
    {
      Instance = (**(__int64 (__fastcall ***)(void *, _QWORD *, void *))v41)(v41, a3, v3);
    }
  }
LABEL_42:
  v21 = Instance;
  v22 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
  v23 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v21;
}
