/*
 * XREFs of ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameBuffer@23@_K@Z @ 0x180026F00 (-PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameB.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ??$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spectre@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@3@@Z @ 0x1800C40AC (--$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spec.c)
 *     ?GetTextureStaging@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x1800C5A5C (-GetTextureStaging@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::CopyBackBufferPixels(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        void **a2,
        struct Spectre::Engine::IRenderOutput *a3)
{
  int ID; // eax
  int v7; // eax
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, _QWORD, __int64); // rsi
  __int64 v10; // rdi
  _QWORD *Texture; // rax
  __int64 v12; // rdi
  int v13; // eax
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // r9
  float v16; // xmm1_4
  Spectre::Engine::RenderDevice *v17; // rcx
  unsigned __int64 v18; // rax
  float v19; // xmm1_4
  unsigned __int64 v20; // rsi
  size_t v21; // r12
  __int64 v22; // r13
  char *v23; // r14
  unsigned __int8 *i; // r15
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  struct Spectre::Engine::FrameBuffer *v29; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v36; // [rsp+98h] [rbp-68h]
  void *Src; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v42; // [rsp+C8h] [rbp-38h]
  _BYTE v43[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v44[16]; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  Spectre::Engine::Lockable::GetExclusiveLock(
    (Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 24),
    (__int64)v44);
  (*(void (__fastcall **)(struct Spectre::Engine::IRenderOutput *, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v43);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v33,
    (_QWORD *)this + 34);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>((__int64)&v41);
  Spectre::Engine::D3D11::CommandListD3D11::GetContext(v41, &v28);
  (*(void (__fastcall **)(struct Spectre::Engine::IRenderOutput *, struct Spectre::Engine::FrameBuffer **))(*(_QWORD *)a3 + 32LL))(
    a3,
    &v29);
  Spectre::Engine::FrameBuffer::GetTexture((__int64)v29, &v33);
  ID = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Spectre::Engine::Texture::GetDeviceTexture(v33, &v31, ID);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v39);
  Spectre::Engine::FrameBuffer::GetTextureStaging(v29, &v31);
  v7 = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Spectre::Engine::Texture::GetDeviceTexture(v31, v27, v7);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v35);
  v8 = v28;
  v9 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 376LL);
  v10 = *(_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v39, &v26);
  Texture = (_QWORD *)Spectre::Engine::D3D11::TextureD3D11::GetTexture(v35, v27);
  v9(v8, *Texture, v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Spectre::Engine::D3D11::TextureD3D11::GetTexture(v35, v27);
  v12 = v27[0];
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v8 + 112LL))(
          v8,
          v27[0],
          0LL,
          1LL,
          0,
          &Src);
  v14 = v13;
  if ( v13 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  Spectre::Engine::FrameBuffer::GetActiveSize((__int64)v29, &v26);
  v15 = 0LL;
  v16 = *(float *)&v26;
  if ( *(float *)&v26 >= 9.223372e18 )
  {
    v16 = *(float *)&v26 - 9.223372e18;
    if ( (float)(*(float *)&v26 - 9.223372e18) < 9.223372e18 )
      v15 = 0x8000000000000000uLL;
  }
  v17 = (Spectre::Engine::RenderDevice *)(v15 + (unsigned int)(int)v16);
  v18 = 0LL;
  v19 = *((float *)&v26 + 1);
  if ( *((float *)&v26 + 1) >= 9.223372e18 )
  {
    v19 = *((float *)&v26 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v26 + 1) - 9.223372e18) < 9.223372e18 )
      v18 = 0x8000000000000000uLL;
  }
  v20 = v18 + (unsigned int)(int)v19;
  v21 = 4LL * (_QWORD)v17;
  v22 = v38;
  v23 = (char *)Src;
  for ( i = Spectre::Engine::RenderDevice::PrepareScreenCaptureBuffer(v17, a2, v29, v20 * 4LL * (_QWORD)v17); v20; --v20 )
  {
    memcpy_0(i, v23, v21);
    v23 += v22;
    i += v21;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, v12, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  if ( v40 )
    std::_Ref_count_base::_Decref(v40);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v43);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v44);
  return 1;
}
