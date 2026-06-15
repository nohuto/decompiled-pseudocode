/*
 * XREFs of ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180134D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180020B20 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CommunicationsRemapPolicyRule::OnRuleOperation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct IUnknown *a5)
{
  struct IUnknown *v7; // r15
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, __int64, struct IUnknown **); // r14
  struct IUnknown *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edx
  struct IUnknown *v17; // rcx
  void *v18; // rcx
  unsigned __int16 *v19; // rax
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // edx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  LPVOID v25[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v27; // [rsp+80h] [rbp+30h] BYREF

  v7 = a5;
  LODWORD(a5->lpVtbl) = 1;
  if ( !a3 && (*(_BYTE *)(a1 + 80) & 1) != 0 && a4 == 1 )
  {
    a5 = 0LL;
    v23 = 0LL;
    pv = 0LL;
    v25[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 v25);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 112LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
        (const char *)(unsigned int)Instance);
      CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
      return v9;
    }
    v11 = v25[0];
    v12 = *(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)v25[0] + 40LL);
    if ( a5 )
      ((void (__fastcall *)(struct IUnknown *))a5->lpVtbl->Release)(a5);
    Instance = v12(v11, a2, &a5);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 115LL;
      goto LABEL_14;
    }
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a5->lpVtbl->QueryInterface)(
                 a5,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v23);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 116LL;
      goto LABEL_14;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v27);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 117LL;
      goto LABEL_14;
    }
    v14 = a5;
    a5 = 0LL;
    if ( v14 )
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    v15 = v23;
    v23 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = v27;
    if ( *(_DWORD *)(a1 + 68) != 2 && v27 != *(_DWORD *)(a1 + 68) )
      goto LABEL_30;
    v17 = a5;
    a5 = 0LL;
    if ( v17 )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v17->lpVtbl->Release)(v17, v27);
      v16 = v27;
    }
    if ( (int)CDefaultDeviceManager::GetDefaultEndpoint((__int64)v17, v16, *(_DWORD *)(a1 + 64), 0LL, &a5) >= 0
      && ((int (__fastcall *)(struct IUnknown *, LPVOID *))a5->lpVtbl[1].Release)(a5, &pv) >= 0 )
    {
      v18 = pv;
      v19 = (unsigned __int16 *)pv;
      v20 = a2 - (_QWORD)pv;
      do
      {
        v21 = *(unsigned __int16 *)((char *)v19 + v20);
        v22 = *v19 - v21;
        if ( v22 )
          break;
        ++v19;
      }
      while ( v21 );
      if ( !v22 )
      {
        *(_BYTE *)(a1 + 344) = 1;
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 64);
        LODWORD(v7->lpVtbl) = 4 - (*(_DWORD *)(a1 + 68) != 2);
      }
    }
    else
    {
LABEL_30:
      v18 = pv;
    }
    CoTaskMemFree(v18);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
  }
  return 0LL;
}
