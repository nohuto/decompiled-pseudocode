/*
 * XREFs of ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04
 * Callers:
 *     ?CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A27E0 (-CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D.c)
 *     ?CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A2830 (-CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@.c)
 *     ?CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A28B0 (-CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4600 (--$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@-$vector@V-$com_ptr.c)
 *     ??$construct@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4960 (--$construct@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@1@AEB_J@Z @ 0x1800A4AAC (--$find@X@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Wi.c)
 *     ??1?$out_param_t@V?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800A4F58 (--1-$out_param_t@V-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ??4?$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800A521C (--4-$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5588 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::CreateSharedDevice(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct IUnknown *a2,
        struct _LUID a3,
        struct ID3D11Device **a4)
{
  unsigned int v6; // edi
  struct ID3D11Device *lpVtbl; // r15
  int NewDevice; // eax
  int v11; // esi
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rdx
  struct ID3D11Device *v15; // rcx
  struct IUnknownVtbl *v17; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v18; // [rsp+28h] [rbp-28h] BYREF
  char v19[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IUnknown *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF
  struct _LUID v26; // [rsp+A0h] [rbp+50h]

  v26 = a3;
  v24 = a2;
  v6 = 0;
  v25 = 0LL;
  wil::srwlock::lock_exclusive((char *)this + 64, v19);
  lpVtbl = (struct ID3D11Device *)a2[2].lpVtbl;
  if ( lpVtbl )
  {
    v17 = a2[3].lpVtbl;
    std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::find<void>(
      this,
      &v18,
      (const unsigned __int8 *)&v17);
    if ( a2[3].lpVtbl == (struct IUnknownVtbl *)__PAIR64__(v26.HighPart, a3.LowPart) )
    {
      ((void (__fastcall *)(struct ID3D11Device *))lpVtbl->lpVtbl->AddRef)(lpVtbl);
      *a4 = lpVtbl;
      goto LABEL_16;
    }
    v20 = &v25;
    v21 = 0LL;
    v22 = 1;
    Windows::UI::Composition::Internal::SharedD3DDevicePool::RemoveSharedDeviceClient(this, v18, a2, &v21);
    wil::details::out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>::~out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>(&v20);
  }
  v18 = (struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *)a3;
  std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::find<void>(
    this,
    &v17,
    (const unsigned __int8 *)&v18);
  if ( v17 == *((struct IUnknownVtbl **)this + 1) )
  {
    NewDevice = Windows::UI::Composition::Internal::SharedD3DDevicePool::CreateNewDevice(this, a3, (PVOID **)&v18);
    v11 = NewDevice;
    if ( NewDevice < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
        (const char *)(unsigned int)NewDevice);
      v6 = v11;
      goto LABEL_16;
    }
    v12 = v18;
  }
  else
  {
    v12 = (struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *)&v17[1];
  }
  a2[3].lpVtbl = (struct IUnknownVtbl *)a3;
  wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::operator=((__int64 *)&a2[2], (__int64 *)v12);
  v14 = (__int64 *)*((_QWORD *)v12 + 3);
  if ( v14 == *((__int64 **)v12 + 4) )
  {
    std::vector<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>::_Emplace_reallocate<Windows::UI::Composition::Internal::DeviceClient * &>(
      (const char *)v12 + 16,
      (__int64)v14,
      (__int64)&v24);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>,Windows::UI::Composition::Internal::DeviceClient * &>(
      v13,
      v14,
      (__int64 *)&v24);
    *((_QWORD *)v12 + 3) += 8LL;
  }
  v15 = *(struct ID3D11Device **)v12;
  if ( *(_QWORD *)v12 )
  {
    *a4 = v15;
    ((void (__fastcall *)(struct ID3D11Device *))v15->lpVtbl->AddRef)(v15);
  }
  else
  {
    *a4 = 0LL;
  }
LABEL_16:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v19);
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v25);
  return v6;
}
