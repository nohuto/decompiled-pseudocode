/*
 * XREFs of _lambda_703197410533bd8a2dcb4add4cb7fb52_::operator() @ 0x180065738
 * Callers:
 *     wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___ @ 0x180065580 (wil--details--lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___--_lambda_call__lambda_dce0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_8a8478e7f2fdf23ca34b28f28af595b8___ @ 0x180065358 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180065358.c)
 *     ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x180065CE0 (-ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800C6874 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_703197410533bd8a2dcb4add4cb7fb52_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // r9d
  int *v7; // r14
  __int64 v8; // r8
  int *v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // ebx
  int v14; // [rsp+28h] [rbp-49h]
  __int64 v15[2]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v16; // [rsp+68h] [rbp-9h] BYREF
  __int64 v17; // [rsp+78h] [rbp+7h] BYREF
  __int128 v18; // [rsp+80h] [rbp+Fh]
  char v19; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 v20; // [rsp+98h] [rbp+27h] BYREF
  int v21; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v15[0] = 0LL;
  v2 = *a1;
  v21 = **a1;
  v20 = 0LL;
  v3 = a1[1];
  v4 = (__int64 *)*((_QWORD *)v3 + 6);
  v5 = *v4;
  v6 = *v2;
  v7 = a1[3];
  v8 = *(_QWORD *)v7;
  v9 = a1[2];
  v16 = *(_OWORD *)(*(_QWORD *)v7 + 48LL);
  v14 = v6;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))(v5 + 56))(
          v4,
          *(_QWORD *)v9,
          &v16,
          *(unsigned int *)(v8 + 8));
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v16 = &v20;
    *((_QWORD *)&v16 + 1) = v3;
    v18 = v16;
    v19 = 1;
    v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, unsigned __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            *(_QWORD *)v9,
            *(_QWORD *)v7,
            2LL,
            0,
            &v20,
            0LL,
            0LL,
            v15);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
        (unsigned int)v12);
    }
    if ( v12 >= 0 )
    {
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(&v17, v15);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_8a8478e7f2fdf23ca34b28f28af595b8___(
        (__int64)&v16,
        *(_QWORD **)a1[4],
        *((_QWORD **)a1[4] + 1),
        &v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    }
    v11 = 0;
    if ( v20 )
    {
      CAudioResourceManager::ReleaseSaDeviceResource((CAudioResourceManager *)(v3 + 2), &v20);
      v20 = 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10,
      v14);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v11;
}
