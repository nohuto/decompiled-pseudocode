/*
 * XREFs of _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18027D294
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Do_call @ 0x18027F660 (std--_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice-_ea_18027F660.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801A80DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4R.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall anonymous_namespace_::CreateD3D12ResourcesInternal(IUnknown **a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v7; // rcx
  HRESULT v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  bool v12; // al
  __int64 v13; // rcx
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, __int128 *, GUID *, __int64 *); // rdi
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, void *, __int64, __int64 *); // rbx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void *ppDevice; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-28h] BYREF
  int v29; // [rsp+50h] [rbp-20h]
  __int128 v30; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v3 = 0;
  ppDevice = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&ppDevice);
  v8 = D3D12CreateDevice(*a1, D3D_FEATURE_LEVEL_12_0, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &ppDevice);
  if ( v8 == -2005270524 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0q_EventWriteTransfer(v7, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 6LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3 + 1);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3 + 2);
    goto LABEL_23;
  }
  if ( v8 < 0 )
  {
    v11 = 3388LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)v8);
    v3 = v8;
    goto LABEL_23;
  }
  v30 = 0LL;
  LODWORD(v30) = 2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  v12 = IsVailContainer();
  v29 = 0;
  v28[0] = v30;
  DWORD1(v30) = v12 ? 100 : 10000;
  v28[1] = DWORD1(v30);
  v8 = (*(__int64 (__fastcall **)(void *, __int64, _DWORD *, __int64))(*(_QWORD *)ppDevice + 104LL))(
         ppDevice,
         20LL,
         v28,
         12LL);
  if ( v8 < 0 )
  {
    v11 = 3424LL;
    goto LABEL_7;
  }
  if ( v29 )
  {
    v14 = ppDevice;
    v15 = *(__int64 (__fastcall **)(void *, __int128 *, GUID *, __int64 *))(*(_QWORD *)ppDevice + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v26);
    v8 = v15(v14, &v30, &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed, &v26);
    if ( v8 < 0 )
    {
      v11 = 3429LL;
      goto LABEL_7;
    }
    v16 = *a2;
    v17 = *(__int64 (__fastcall **)(__int64, void *, __int64, __int64 *))(*(_QWORD *)*a2 + 32LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
    v8 = v17(v16, ppDevice, v26, &v27);
    if ( v8 < 0 )
    {
      v11 = 3434LL;
      goto LABEL_7;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
  {
    McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 2LL);
  }
  v18 = *a3;
  v19 = ppDevice;
  ppDevice = 0LL;
  *a3 = (__int64)v19;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v20 = a3[1];
  v21 = v26;
  v26 = 0LL;
  a3[1] = v21;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v22 = a3[2];
  v23 = v27;
  v27 = 0LL;
  a3[2] = v23;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_23:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppDevice);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)a1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2);
  return v3;
}
