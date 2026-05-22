/*
 * XREFs of ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8
 * Callers:
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Try_emplace@_J$$V@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@$$QEA_J@Z @ 0x1800A47BC (--$_Try_emplace@_J$$V@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Compo.c)
 *     ??$make_unique@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@PEAVSharedD3DDevicePool@2345@AEAU_LUID@@PEAUID3D11Device4@@$0A@@std@@YA?AV?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@0@$$QEAPEAVSharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAU_LUID@@$$QEAPEAUID3D11Device4@@@Z @ 0x1800A4C04 (--$make_unique@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@PEAVSharedD3DDevicePool@234.c)
 *     ??1?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4FA8 (--1-$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U-$default_delete@VDeviceR.c)
 *     ??R?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@QEBAXPEAVDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@Z @ 0x1800A52B4 (--R-$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@QEBAXPEAVDeviceR.c)
 *     ?AdapterFromLUID@@YAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800A543C (-AdapterFromLUID@@YAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?Initialize@DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x1800A5FC8 (-Initialize@DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::CreateNewDevice(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct _LUID a2,
        PVOID **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  HRESULT v8; // eax
  __int64 v9; // rdx
  Windows::UI::Composition::Internal::DeviceRemovedWaiter *v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  ID3D11Device *v13; // rax
  PVOID *v14; // rbx
  PVOID v15; // rcx
  Windows::UI::Composition::Internal::DeviceRemovedWaiter **v16; // rax
  Windows::UI::Composition::Internal::DeviceRemovedWaiter *v17; // rdx
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+60h] [rbp+7h] BYREF
  PVOID pv; // [rsp+68h] [rbp+Fh] BYREF
  IDXGIAdapter *pAdapter; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v25[6]; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _LUID v27; // [rsp+C8h] [rbp+6Fh] BYREF
  ID3D11Device *ppDevice; // [rsp+D8h] [rbp+7Fh] BYREF

  v27 = a2;
  pAdapter = 0LL;
  v6 = AdapterFromLUID(a2, (struct IDXGIAdapter1 **)&pAdapter);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_23;
  }
  ppDevice = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  ppImmediateContext = 0LL;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)&ppDevice);
  v8 = D3D11CreateDevice(pAdapter, D3D_DRIVER_TYPE_UNKNOWN, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, 0LL, &ppImmediateContext);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 311LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&ppImmediateContext);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&ppDevice);
    goto LABEL_23;
  }
  v8 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, GUID *, __int64 *))ppImmediateContext->lpVtbl->QueryInterface)(
         ppImmediateContext,
         &GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0,
         &v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 313LL;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 40LL))(v19, 1LL);
  v8 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64, const char *))ppDevice->lpVtbl->SetPrivateData)(
         ppDevice,
         &WKPDID_SharedCompositionD3DDevice,
         30LL,
         "Shared Composition D3D Device");
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 319LL;
    goto LABEL_5;
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v8 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
         ppDevice,
         &GUID_8992ab71_02e6_4b8d_ba48_b056dcda42c4,
         &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 321LL;
    goto LABEL_5;
  }
  v24 = v20;
  v25[0] = (__int64)this;
  std::make_unique<Windows::UI::Composition::Internal::DeviceRemovedWaiter,Windows::UI::Composition::Internal::SharedD3DDevicePool *,_LUID &,ID3D11Device4 *,0>(
    &pv,
    v25,
    &v27,
    &v24);
  v10 = (Windows::UI::Composition::Internal::DeviceRemovedWaiter *)pv;
  v11 = Windows::UI::Composition::Internal::DeviceRemovedWaiter::Initialize(pv);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
      (const char *)(unsigned int)v11);
    std::unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::~unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>(&pv);
    goto LABEL_6;
  }
  v27 = a2;
  v12 = *(_QWORD *)std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::_Try_emplace<__int64,>(
                     (float *)this,
                     (__int64)v25,
                     (unsigned __int8 *)&v27);
  v13 = ppDevice;
  v14 = (PVOID *)(v12 + 24);
  ppDevice = 0LL;
  v15 = *v14;
  *v14 = v13;
  if ( v15 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (Windows::UI::Composition::Internal::DeviceRemovedWaiter **)(v14 + 1);
  if ( v14 + 1 != &pv )
  {
    v17 = *v16;
    pv = 0LL;
    *v16 = v10;
    if ( v17 )
      std::default_delete<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::operator()((__int64)&pv, v17);
  }
  *a3 = v14;
  std::unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::~unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>(&pv);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&ppImmediateContext);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&ppDevice);
  v7 = 0;
LABEL_23:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&pAdapter);
  return v7;
}
