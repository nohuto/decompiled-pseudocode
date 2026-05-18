/*
 * XREFs of ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV-.c)
 *     ?Notify_RenderTargetChanged@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002C958 (-Notify_RenderTargetChanged@RenderOutput@Engine@Spectre@@IEAAXXZ.c)
 *     ?GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@XZ @ 0x1800C568C (-GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UIDXGIAdapter1@@@WRL@Microso.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C9D80 (-GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AW4DXGI_FORMAT@@XZ @ 0x1800C9DDC (-GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11::UpdateBackBufferTexture(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this,
        __int64 *a2)
{
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v4; // r13
  char *v5; // rsi
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, int, _DWORD); // rsi
  int DxgiFormat; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, GUID *, __int64 *); // rdi
  __int64 *v20; // rax
  void (__fastcall *v21)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64, _QWORD, _DWORD *, char *); // rbx
  _QWORD *Device; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v27; // [rsp+60h] [rbp-A0h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v28; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v29; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v31; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v32[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v33; // [rsp+1D0h] [rbp+D0h]
  int v34; // [rsp+1D8h] [rbp+D8h]
  int v35; // [rsp+1DCh] [rbp+DCh]
  int v36; // [rsp+1E0h] [rbp+E0h]
  int v37; // [rsp+1E4h] [rbp+E4h]
  __int64 v38; // [rsp+1E8h] [rbp+E8h]
  void *retaddr; // [rsp+238h] [rbp+138h]

  v25[0] = (__int64)a2;
  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11((__int64)this, &v28);
  v4 = v28;
  if ( !v28 )
    goto LABEL_23;
  v5 = (char *)this + 504;
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 63) )
  {
    v6 = *(_QWORD *)v5;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD))(**(_QWORD **)v5 + 104LL);
    DxgiFormat = Spectre::Engine::D3D11::RenderOutputD3D11::GetDxgiFormat(this);
    v9 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 88LL))(this);
    v10 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 80LL))(this);
    v11 = v7(v6, 2LL, v10, v9, DxgiFormat, 0);
    v12 = v11;
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v4, v11);
    if ( (v12 & 0x80000000) != 0LL )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v12;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *))(*(_QWORD *)v4 + 16LL))(v4) )
      Spectre::Engine::RenderOutput::Notify_RenderTargetChanged(this);
    v5 = (char *)this + 504;
  }
  else
  {
    v37 = 0;
    v38 = 3LL;
    v34 = 32;
    v35 = 2;
    v32[2] = Spectre::Engine::D3D11::RenderOutputD3D11::GetDxgiFormat(this);
    v32[1] = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 88LL))(this);
    v32[0] = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 80LL))(this);
    v33 = 1LL;
    v36 = 0;
    v32[3] = 0;
    v25[0] = 0LL;
    Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11((__int64)this, &v26);
    if ( v26 )
    {
      Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter(v26, &v24);
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      v18 = v24;
    }
    else
    {
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      v24 = 0LL;
      v18 = 0LL;
    }
    v19 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 48LL);
    v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>(v25);
    v19(v18, &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    v21 = *(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64, _QWORD, _DWORD *, char *))(*(_QWORD *)this + 408LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 63);
    Device = Spectre::Engine::D3D11::RenderOutputD3D11::GetDevice((__int64)this, &v24);
    v21(this, v25[0], *Device, v32, (char *)this + 504);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
  }
  if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 416LL))(this);
    v24 = 0LL;
    v13 = *(_QWORD *)v5;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v5 + 72LL);
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>(&v24);
    v16 = v14(v13, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset_0(&v31, 0, sizeof(v31));
      v31.ExceptionCode = -532265403;
      v31.ExceptionAddress = retaddr;
      v31.NumberParameters = 1;
      v31.ExceptionInformation[0] = v17;
      RaiseFailFastException(&v31, 0LL, 0);
    }
    *a2 = 0LL;
    if ( a2 != &v24 )
    {
      *a2 = v24;
      v24 = 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
  }
  else
  {
LABEL_23:
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    *a2 = 0LL;
  }
  return a2;
}
