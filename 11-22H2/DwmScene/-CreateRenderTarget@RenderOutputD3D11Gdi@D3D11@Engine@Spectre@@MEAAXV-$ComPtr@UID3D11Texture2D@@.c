/*
 * XREFs of ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV-.c)
 *     ??$As@UIDXGISurface1@@@?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGISurface1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C8738 (--$As@UIDXGISurface1@@@-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 *     ?D3D11_SetDebugName@@YAXPEAUIDXGIObject@@PEBD@Z @ 0x1800C9CF4 (-D3D11_SetDebugName@@YAXPEAUIDXGIObject@@PEBD@Z.c)
 *     ?GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AW4DXGI_FORMAT@@XZ @ 0x1800C9DDC (-GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AW4DXGI_FORMAT@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::CreateRenderTarget(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this,
        __int64 *a2)
{
  struct IDXGIObject **v4; // r15
  int v5; // eax
  ULONG_PTR v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, struct IDXGIObject *, int *, char *); // rdi
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD v15; // [rsp+E0h] [rbp-20h] BYREF
  int v16; // [rsp+180h] [rbp+80h] BYREF
  __int64 v17; // [rsp+184h] [rbp+84h]
  int v18; // [rsp+18Ch] [rbp+8Ch]
  int v19; // [rsp+190h] [rbp+90h]
  int v20; // [rsp+194h] [rbp+94h]
  int v21; // [rsp+198h] [rbp+98h]
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v13[1] = (__int64)a2;
  v13[0] = *a2;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(v13);
  Spectre::Engine::D3D11::RenderOutputD3D11::CreateRenderTarget((__int64)this, v13);
  v4 = (struct IDXGIObject **)((char *)this + 1704);
  v5 = Microsoft::WRL::ComPtr<ID3D11Texture2D>::As<IDXGISurface1>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
         (__int64 *)this + 213);
  v6 = v5;
  if ( v5 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v6;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  D3D11_SetDebugName(*v4, "BackBufferSurface");
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>((__int64 *)this + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &GUID_06152247_6f50_465a_9245_118bfd3b6007, 0LL, (void **)v7);
  v13[0] = (unsigned int)Spectre::Engine::D3D11::RenderOutputD3D11::GetDxgiFormat(this) | 0x100000000LL;
  v16 = 0;
  v17 = v13[0];
  v18 = 0;
  v19 = 0;
  v20 = 2;
  v21 = 0;
  v8 = *((_QWORD *)this + 215);
  v9 = *(__int64 (__fastcall **)(__int64, struct IDXGIObject *, int *, char *))(*(_QWORD *)v8 + 120LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 214);
  v10 = v9(v8, *v4, &v16, (char *)this + 1712);
  v11 = v10;
  if ( v10 < 0 )
  {
    memset_0(&v15, 0, sizeof(v15));
    v15.ExceptionCode = -532265403;
    v15.ExceptionAddress = retaddr;
    v15.NumberParameters = 1;
    v15.ExceptionInformation[0] = v11;
    RaiseFailFastException(&v15, 0LL, 0);
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
}
