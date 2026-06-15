/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180029910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000A48C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000C968 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMeter@@@Z @ 0x1800298C8 (--$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessi.c)
 *     ??$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAPOWrapperSrv@@@Z @ 0x18002AF20 (--$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProce.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int i; // r15d
  struct IAudioProcessingObject **v9; // r14
  __int64 v10; // rcx
  unsigned int j; // ebx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // esi
  int v38; // eax
  __int64 v39; // rcx
  int v40[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v41; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+38h] [rbp-40h]
  _BYTE v44[8]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 35) = 1;
  v41 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v43 = v7;
  for ( i = 0; i < a3; ++i )
  {
    *(_QWORD *)v40 = 0LL;
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v40);
    v9 = &a4[i];
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           v40) >= 0 )
    {
      v12 = *((_QWORD *)this + 23);
      v13 = *(_QWORD *)v40;
      *((_QWORD *)this + 23) = *(_QWORD *)v40;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)v40);
    *(_QWORD *)v40 = 0LL;
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v40);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           v40) >= 0 )
    {
      v14 = *((_QWORD *)this + 24);
      v15 = *(_QWORD *)v40;
      *((_QWORD *)this + 24) = *(_QWORD *)v40;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)v40);
    *(_QWORD *)v40 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
           v40) >= 0 )
    {
      v25 = *((_QWORD *)this + 26);
      v26 = *(_QWORD *)v40;
      *((_QWORD *)this + 26) = *(_QWORD *)v40;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)v40);
    *(_QWORD *)v40 = 0LL;
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v40);
    if ( wil::try_com_query_to<IAudioMeter,IAudioProcessingObject * &>(v9, (__int64)v40) )
    {
      v16 = *((_QWORD *)this + 25);
      v17 = *(_QWORD *)v40;
      *((_QWORD *)this + 25) = *(_QWORD *)v40;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v18 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 32LL))(
              *((_QWORD *)this + 25),
              (char *)this + 100);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x26D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v18);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25), 1LL);
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)v40);
    *(_QWORD *)v40 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_5849e670_4969_44de_8904_75ed892b627e,
           v40) >= 0 )
    {
      v28 = *((_QWORD *)this + 27);
      v29 = *(_QWORD *)v40;
      *((_QWORD *)this + 27) = *(_QWORD *)v40;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(
              *((_QWORD *)this + 27),
              *((unsigned int *)this + 20));
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v30);
      v31 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 392LL))(
              *((_QWORD *)this + 9),
              &v42);
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 27) + 48LL))(
              *((_QWORD *)this + 27),
              v31,
              v42);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v32);
      v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 40LL))(
              *((_QWORD *)this + 27),
              *((_QWORD *)this + 11));
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x281,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v33);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v40);
    *(_QWORD *)v40 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_8ab91395_f920_4132_873f_7a40607f7901,
           v40) >= 0 )
    {
      v34 = *((_QWORD *)this + 28);
      v35 = *(_QWORD *)v40;
      *((_QWORD *)this + 28) = *(_QWORD *)v40;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v40);
    v10 = v41;
    v41 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))(*v9)->lpVtbl->QueryInterface)(
           *v9,
           &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
           &v41) >= 0 )
    {
      v36 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 9) + 536LL))(*((_QWORD *)this + 9), v44);
      v37 = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x295,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v36,
          v40[0]);
        if ( v7 )
          LeaveCriticalSection(v7);
        goto LABEL_76;
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v41 + 24LL))(v41, v44);
      v37 = v38;
      if ( v38 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x296,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v38,
          v40[0]);
        if ( v7 )
          LeaveCriticalSection(v7);
LABEL_76:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        return v37;
      }
    }
    if ( *((_QWORD *)this + 23)
      && *((_QWORD *)this + 24)
      && *((_QWORD *)this + 26)
      && *((_QWORD *)this + 25)
      && *((_QWORD *)this + 27)
      && v41 )
    {
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  for ( j = 0; j < a3; ++j )
  {
    *(_QWORD *)v40 = 0LL;
    if ( (unsigned __int8)wil::try_com_query_to<IAPOWrapperSrv,IAudioProcessingObject * &>(&a4[j], v40) )
    {
      v27 = (_QWORD *)*((_QWORD *)this + 30);
      if ( v27 == *((_QWORD **)this + 31) )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          (__int64 *)this + 29,
          (__int64)v27,
          (__int64 *)v40);
      }
      else
      {
        v39 = *(_QWORD *)v40;
        *v27 = *(_QWORD *)v40;
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        *((_QWORD *)this + 30) += 8LL;
      }
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)v40);
  }
  if ( *((_BYTE *)this + 41) )
    goto LABEL_50;
  v19 = *((_QWORD *)this + 23);
  if ( !v19 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL,
      v40[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    return 2147500034LL;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL,
      v40[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    return 2147500034LL;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v42);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v20,
      v40[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    return v21;
  }
  v22 = CAudioStream::InitializeVolumeCoefficientCount(this, v42);
  v23 = v22;
  if ( v22 >= 0 )
  {
LABEL_50:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B7,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v22,
    v40[0]);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
  return v23;
}
