/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@M@std@@$0A@@?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E2EF0 (--$-4U-$default_delete@$$BY0A@M@std@@$0A@@-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800E34C4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v5; // esi
  unsigned int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int i; // r12d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int j; // ebx
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned __int64 v24; // rax
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r14
  int v33; // eax
  unsigned int v34; // esi
  int v35; // eax
  unsigned int v36; // esi
  _QWORD *v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // kr00_8
  void *v41; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v43; // rax
  void *v44; // rbx
  HANDLE v45; // rax
  unsigned __int64 v46; // rax
  void *v47; // rbx
  HANDLE v48; // rax
  __int64 v49; // rdx
  int v50[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v51; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+30h] [rbp-58h] BYREF
  LPVOID lpMem; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-48h]
  _BYTE v55[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = a3;
  v54 = a3;
  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 31) = 1;
  v7 = 0;
  v51 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  lpMem = v8;
  for ( i = 0; i < v5; ++i )
  {
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           v50) >= 0 )
    {
      v16 = *((_QWORD *)this + 21);
      v10 = *(_QWORD *)v50;
      *((_QWORD *)this + 21) = *(_QWORD *)v50;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v10 = *(_QWORD *)v50;
      }
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v10 = *(_QWORD *)v50;
      }
    }
    else
    {
      v10 = *(_QWORD *)v50;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           v50) >= 0 )
    {
      v17 = *((_QWORD *)this + 22);
      v11 = *(_QWORD *)v50;
      *((_QWORD *)this + 22) = *(_QWORD *)v50;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v11 = *(_QWORD *)v50;
      }
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v11 = *(_QWORD *)v50;
      }
    }
    else
    {
      v11 = *(_QWORD *)v50;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
           v50) >= 0 )
    {
      v26 = *((_QWORD *)this + 24);
      v12 = *(_QWORD *)v50;
      *((_QWORD *)this + 24) = *(_QWORD *)v50;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v12 = *(_QWORD *)v50;
      }
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        v12 = *(_QWORD *)v50;
      }
    }
    else
    {
      v12 = *(_QWORD *)v50;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
           v50) >= 0 )
    {
      v18 = *((_QWORD *)this + 23);
      v19 = *(_QWORD *)v50;
      *((_QWORD *)this + 23) = *(_QWORD *)v50;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
              *((_QWORD *)this + 23),
              (char *)this + 88);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x215,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20,
          v50[0]);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 392LL))(g_PolicyManager) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 40LL))(*((_QWORD *)this + 23), 1LL);
    }
    if ( *(_QWORD *)v50 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 16LL))(*(_QWORD *)v50);
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_dc493d8a_c0ca_481c_88af_f832a73aaa21,
           v50) >= 0 )
    {
      v27 = *((_QWORD *)this + 25);
      v28 = *(_QWORD *)v50;
      *((_QWORD *)this + 25) = *(_QWORD *)v50;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 32LL))(
              *((_QWORD *)this + 25),
              *((unsigned int *)this + 20));
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x223,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v29,
          v50[0]);
      v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 392LL))(
              *((_QWORD *)this + 9),
              &v52);
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 25) + 40LL))(
              *((_QWORD *)this + 25),
              v30,
              v52);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x227,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v31,
          v50[0]);
    }
    if ( *(_QWORD *)v50 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 16LL))(*(_QWORD *)v50);
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_8ab91395_f920_4132_873f_7a40607f7901,
           v50) >= 0 )
    {
      v32 = *((_QWORD *)this + 26);
      v13 = *(_QWORD *)v50;
      *((_QWORD *)this + 26) = *(_QWORD *)v50;
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v13 = *(_QWORD *)v50;
      }
      if ( v32 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v13 = *(_QWORD *)v50;
      }
    }
    else
    {
      v13 = *(_QWORD *)v50;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v51;
    v51 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
           &v51) >= 0 )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 9) + 536LL))(*((_QWORD *)this + 9), v55);
      v34 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v33,
          v50[0]);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpMem);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
        return v34;
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v51 + 24LL))(v51, v55);
      v36 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v35,
          v50[0]);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpMem);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
        return v36;
      }
    }
    if ( *((_QWORD *)this + 21)
      && *((_QWORD *)this + 22)
      && *((_QWORD *)this + 24)
      && *((_QWORD *)this + 23)
      && *((_QWORD *)this + 25)
      && v51 )
    {
      v5 = v54;
      break;
    }
    v5 = v54;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  for ( j = 0; j < v5; ++j )
  {
    *(_QWORD *)v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))a4[j]->lpVtbl->QueryInterface)(
           a4[j],
           &GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c,
           v50) >= 0 )
    {
      v37 = (_QWORD *)*((_QWORD *)this + 28);
      if ( v37 == *((_QWORD **)this + 29) )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          (char *)this + 216,
          v37,
          v50);
      }
      else
      {
        v38 = *(_QWORD *)v50;
        *v37 = *(_QWORD *)v50;
        if ( v38 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 8LL))(*(_QWORD *)v50);
        *((_QWORD *)this + 28) += 8LL;
      }
      v5 = v54;
    }
    if ( *(_QWORD *)v50 )
      (*(void (**)(void))(**(_QWORD **)v50 + 16LL))();
  }
  if ( *((_BYTE *)this + 41) )
    goto LABEL_66;
  v21 = *((_QWORD *)this + 21);
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL,
      v50[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    return 2147500034LL;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL,
      v50[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    return 2147500034LL;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v52);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v22,
      v50[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    return v23;
  }
  v24 = v52;
  if ( *((_DWORD *)this + 21) == v52 )
    goto LABEL_66;
  *((_DWORD *)this + 21) = v52;
  v40 = v24;
  v39 = 4 * v24;
  if ( !is_mul_ok(v40, 4uLL) )
    v39 = -1LL;
  lpMem = operator new[](v39, (const struct std::nothrow_t *)&std::nothrow);
  std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 504, &lpMem);
  v41 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v41);
  }
  if ( !*((_QWORD *)this + 63) )
  {
    v49 = 190LL;
    goto LABEL_125;
  }
  v43 = 4LL * *((unsigned int *)this + 21);
  if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
    v43 = -1LL;
  lpMem = operator new[](v43, (const struct std::nothrow_t *)&std::nothrow);
  std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 104, &lpMem);
  v44 = lpMem;
  if ( lpMem )
  {
    v45 = GetProcessHeap();
    HeapFree(v45, 0, v44);
  }
  if ( !*((_QWORD *)this + 13) )
  {
    v49 = 192LL;
    goto LABEL_125;
  }
  v46 = 4LL * *((unsigned int *)this + 21);
  if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
    v46 = -1LL;
  lpMem = operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
  std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 112, &lpMem);
  v47 = lpMem;
  if ( lpMem )
  {
    v48 = GetProcessHeap();
    HeapFree(v48, 0, v47);
  }
  if ( !*((_QWORD *)this + 14) )
  {
    v49 = 194LL;
LABEL_125:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v50[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v50[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    return 2147942414LL;
  }
  if ( *((_DWORD *)this + 21) )
  {
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 63) + 4LL * v7) = 1065353216;
      *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * v7++) = 1065353216;
    }
    while ( v7 < *((_DWORD *)this + 21) );
  }
LABEL_66:
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  return 0LL;
}
