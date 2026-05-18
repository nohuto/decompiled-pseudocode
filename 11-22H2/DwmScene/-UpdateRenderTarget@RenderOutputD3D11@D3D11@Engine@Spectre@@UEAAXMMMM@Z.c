/*
 * XREFs of ?UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z @ 0x1800CB0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130 (-UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::UpdateRenderTarget(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  double v6; // xmm8_8
  int v7; // ebp
  double v8; // xmm7_8
  double v9; // xmm6_8
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm6_8
  float v16; // xmm0_4
  void (__fastcall *v17)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64 *); // rbx
  __int64 v18; // rdx
  __int64 v19; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v21[72]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+8h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
    (Spectre::Engine::D3D11::RenderOutputD3D11 *)((char *)this + 8),
    (__int64)v21);
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, _BYTE *))(*(_QWORD *)this + 320LL))(this, v20);
  Spectre::Engine::RenderOutput::UpdateRenderTarget(this, a2, a3, a4, a5);
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 336LL))(this);
  v6 = (float)((*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 112LL))(this)
             * 100.0);
  v7 = (int)(float)((*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 112LL))(this)
                  * 96.0);
  v8 = (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 104LL))(this);
  v9 = (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 96LL))(this);
  v10 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 144LL))(this);
  v11 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 88LL))(this);
  v12 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 80LL))(this);
  v13 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 368LL))(this);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsRenderOutputD3D11NativeRenderer_,
    3,
    "Render Output Resolution: handle=%016llx -- physical window-space %dx%d pixels (%dxMSAA) - logical display-space %.2"
    "fx%.2f dips at %d ppi (scale %.0f%%)",
    v13,
    v12,
    v11,
    v10,
    v9,
    v8,
    v7,
    v6);
  v14 = (*(double (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 112LL))(this);
  if ( *(float *)&v14 != (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 120LL))(this) )
  {
    v15 = (float)((*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 120LL))(this)
                * 100.0);
    v16 = (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 112LL))(this);
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsRenderOutputD3D11NativeRenderer_,
      3,
      "  non-uniform scale factors: x=%.0f%% y=%.0f%%",
      (float)(v16 * 100.0),
      v15);
  }
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64 *))(*(_QWORD *)this + 400LL))(this, &v19);
  v17 = *(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64 *))(*(_QWORD *)this + 384LL);
  v22 = v19;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v22);
  v17(this, &v22);
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 392LL))(this);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64))(*(_QWORD *)this + 360LL))(this, v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v20);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v21);
}
