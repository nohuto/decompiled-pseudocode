/*
 * XREFs of ?CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800D9200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$As@UIDXGIDevice3@@@?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice3@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2FE4 (--$As@UIDXGIDevice3@@@-$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIDXG.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?CreateDeviceIndependentResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D912C (-CreateDeviceIndependentResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@.c)
 *     ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750 (-GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA-AV-$shared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::CreateHolographicResources(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  int v2; // eax
  ULONG_PTR v3; // rbx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, char *); // rbx
  int v6; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, char *); // rdi
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-C8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD v17; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD v18; // [rsp+180h] [rbp+80h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::CreateDeviceIndependentResources(this);
  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 67) )
  {
    Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetRendererD3D11(this, &v14);
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(v14, &v13);
    v12 = 0LL;
    v2 = Microsoft::WRL::ComPtr<ID3D11Device1>::As<IDXGIDevice3>(&v13, &v12);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v4 = *((_QWORD *)this + 64);
    v5 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v4 + 216LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 65);
    v6 = v5(v4, v12, (char *)this + 520);
    v7 = v6;
    if ( v6 < 0 )
    {
      memset_0(&v17, 0, sizeof(v17));
      v17.ExceptionCode = -532265403;
      v17.ExceptionAddress = retaddr;
      v17.NumberParameters = 1;
      v17.ExceptionInformation[0] = v7;
      RaiseFailFastException(&v17, 0LL, 0);
    }
    v8 = *((_QWORD *)this + 65);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 66);
    v10 = v9(v8, 0LL, (char *)this + 528);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset_0(&v18, 0, sizeof(v18));
      v18.ExceptionCode = -532265403;
      v18.ExceptionAddress = retaddr;
      v18.NumberParameters = 1;
      v18.ExceptionInformation[0] = v11;
      RaiseFailFastException(&v18, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *))(**((_QWORD **)this + 67) + 8LL))(
      *((_QWORD *)this + 67),
      this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
}
