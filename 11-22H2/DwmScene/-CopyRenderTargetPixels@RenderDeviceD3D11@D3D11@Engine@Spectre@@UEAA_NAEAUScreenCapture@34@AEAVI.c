/*
 * XREFs of ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameBuffer@23@_K@Z @ 0x180026F00 (-PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameB.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ??$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spectre@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@3@@Z @ 0x1800C40AC (--$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spec.c)
 *     ?GetTextureStaging@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x1800C5A5C (-GetTextureStaging@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::CopyRenderTargetPixels(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        void **a2,
        struct Spectre::Engine::IRenderOutput *a3,
        struct Spectre::Engine::FrameBuffer *a4)
{
  int ID; // eax
  int v8; // eax
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD *Texture; // rax
  int (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **); // rdi
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // r9
  float v18; // xmm1_4
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // rsi
  size_t v23; // rdi
  __int64 v24; // r12
  char *v25; // r14
  unsigned __int8 *i; // r15
  void (__fastcall *v27)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v28; // rax
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v37; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  std::_Ref_count_base *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  std::_Ref_count_base *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  std::_Ref_count_base *v45; // [rsp+C0h] [rbp-40h]
  _BYTE v46[24]; // [rsp+C8h] [rbp-38h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+E0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  (*(void (__fastcall **)(struct Spectre::Engine::IRenderOutput *, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v46);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v36,
    (_QWORD *)this + 34);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>((__int64)&v44);
  Spectre::Engine::D3D11::CommandListD3D11::GetContext(v44, &v33);
  Spectre::Engine::FrameBuffer::GetTexture((__int64)a4, &v36);
  Spectre::Engine::FrameBuffer::GetTextureStaging(a4, &v42);
  ID = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Spectre::Engine::Texture::GetDeviceTexture(v36, &v34, ID);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v40);
  v8 = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Spectre::Engine::Texture::GetDeviceTexture(v42, &v32, v8);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v34);
  v9 = v33;
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 376LL);
  v11 = *(_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v40, &v30);
  v12 = v34;
  v32 = v34;
  Texture = (_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v34, &v31);
  v10(v9, *Texture, v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  v14 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v9 + 112LL);
  v15 = (_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v12, &v30);
  v16 = v14(v9, *v15, 0LL, 1LL, 0, &Src);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  if ( (v16 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v16;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  Spectre::Engine::FrameBuffer::GetActiveSize((__int64)a4, &v31);
  v17 = 0LL;
  v18 = *(float *)&v31;
  if ( *(float *)&v31 >= 9.223372e18 )
  {
    v18 = *(float *)&v31 - 9.223372e18;
    if ( (float)(*(float *)&v31 - 9.223372e18) < 9.223372e18 )
      v17 = 0x8000000000000000uLL;
  }
  v19 = v17 + (unsigned int)(int)v18;
  v20 = 0LL;
  v21 = *((float *)&v31 + 1);
  if ( *((float *)&v31 + 1) >= 9.223372e18 )
  {
    v21 = *((float *)&v31 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v31 + 1) - 9.223372e18) < 9.223372e18 )
      v20 = 0x8000000000000000uLL;
  }
  v22 = v20 + (unsigned int)(int)v21;
  v23 = 16 * v19;
  v24 = v39;
  v25 = (char *)Src;
  for ( i = Spectre::Engine::RenderDevice::PrepareScreenCaptureBuffer(
              (Spectre::Engine::RenderDevice *)0x8000000000000000LL,
              a2,
              a4,
              v22 * v23); v22; --v22 )
  {
    memcpy_0(i, v25, v23);
    v25 += v24;
    i += v23;
  }
  *((_DWORD *)a2 + 5) = 1;
  v27 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 120LL);
  v28 = (_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v32, &v30);
  v27(v9, *v28, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  if ( v41 )
    std::_Ref_count_base::_Decref(v41);
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v46);
  return 1;
}
