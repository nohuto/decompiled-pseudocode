/*
 * XREFs of ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290
 * Callers:
 *     ?Present@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA4F0 (-Present@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?lock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x1800279C0 (-lock@-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ.c)
 *     ?unlock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x180027A80 (-unlock@-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     ?ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA1B8 (-ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecordPresent@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXUPresentData@1234@@Z @ 0x1800CA80C (-RecordPresent@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXUPresentData@1234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::Present(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // ebx
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v12; // [rsp+20h] [rbp-79h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-71h]
  __int128 v14; // [rsp+30h] [rbp-69h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-59h] BYREF
  LARGE_INTEGER v16[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-39h]
  _OWORD v18[3]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+7h]
  char v20; // [rsp+100h] [rbp+67h]
  char v21; // [rsp+108h] [rbp+6Fh]
  __int64 v22; // [rsp+110h] [rbp+77h] BYREF
  __int64 v23; // [rsp+118h] [rbp+7Fh] BYREF

  v21 = *(_BYTE *)(a2 + 8);
  if ( v21 )
    std::unique_lock<Spectre::Engine::Mutex>::unlock(a2);
  v8 = *(_BYTE *)(a3 + 8);
  if ( v8 )
    std::unique_lock<Spectre::Engine::Mutex>::unlock(a3);
  v20 = *(_BYTE *)(a4 + 8);
  if ( v20 )
    std::unique_lock<Spectre::Engine::Mutex>::unlock(a4);
  v9 = *((_DWORD *)this + 128);
  v10 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 312LL))(this);
  *((_QWORD *)&v14 + 1) = __PAIR64__(v9, v10);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v17) = 0;
  *(_QWORD *)&v14 = *((_QWORD *)this + 60);
  std::chrono::steady_clock::now(&v23);
  QueryPerformanceCounter(&PerformanceCount[1]);
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, Spectre::Engine::D3D11::RenderDeviceD3D11 **))(*(_QWORD *)this + 320LL))(
    this,
    &v12);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 63) + 64LL))(
          *((_QWORD *)this + 63),
          v10,
          v9);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)&v12);
  std::chrono::steady_clock::now(&v22);
  QueryPerformanceCounter(v16);
  if ( v11 == -2005270523 )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsRenderOutputD3D11NativeRenderer_,
      3,
      "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v11 == -2005270521 )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsRenderOutputD3D11NativeRenderer_,
      3,
      "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v11 < 0 )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsRenderOutputD3D11NativeRenderer_,
      3,
      "Present() returned error %08x",
      v11);
  }
  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11((__int64)this, &v12);
  if ( v12 )
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v12, v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**((_QWORD **)this + 63) + 136LL))(
    *((_QWORD *)this + 63),
    PerformanceCount);
  v18[0] = v14;
  v18[1] = *(_OWORD *)&PerformanceCount[0].LowPart;
  v18[2] = *(_OWORD *)&v16[0].LowPart;
  v19 = v17;
  Spectre::Engine::D3D11::RenderOutputD3D11::RecordPresent(this, v18);
  Spectre::Engine::D3D11::RenderOutputD3D11::ObtainLatestFrameStats(this);
  Spectre::Engine::D3D11::RenderOutputD3D11::ReconcileFrameStats(this);
  if ( v20 )
    std::unique_lock<Spectre::Engine::Mutex>::lock(a4);
  if ( v8 )
    std::unique_lock<Spectre::Engine::Mutex>::lock(a3);
  if ( v21 )
    std::unique_lock<Spectre::Engine::Mutex>::lock(a2);
  Spectre::Engine::RenderOutput::SetFramePresentStatistics(this, v23, v22, v22 - v23);
}
