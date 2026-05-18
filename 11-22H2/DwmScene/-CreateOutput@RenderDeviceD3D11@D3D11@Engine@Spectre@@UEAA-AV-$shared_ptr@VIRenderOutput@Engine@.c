/*
 * XREFs of ?CreateOutput@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@UOutputDescription@34@@Z @ 0x1800C53F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3040 (--$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@E.c)
 *     ??$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C31E8 (--$CreateOutput@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3390 (--$CreateOutput@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@V-$shared_ptr@VR.c)
 *     ??$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3538 (--$CreateOutput@VRenderOutputD3D11Window@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engin.c)
 *     ??$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C36E0 (--$CreateOutput@VRenderOutputD3D11Xaml@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::CreateOutput(
        Spectre::Engine::RenderDevice *this,
        _OWORD *a2,
        __int128 *a3)
{
  __int64 v6; // rax
  std::_Ref_count_base **v7; // rax
  __int128 v8; // rdi
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rax
  std::_Ref_count_base **v11; // rax
  __int64 v12; // rax
  std::_Ref_count_base **v13; // rax
  __int64 v14; // rax
  std::_Ref_count_base **v15; // rax
  __int64 v16; // rax
  std::_Ref_count_base **v17; // rax
  std::_Ref_count_base *v19; // [rsp+50h] [rbp+Fh] BYREF
  std::_Ref_count_base *v20; // [rsp+58h] [rbp+17h]
  std::_Ref_count_base *v21; // [rsp+60h] [rbp+1Fh] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp+27h]
  __int128 v23; // [rsp+78h] [rbp+37h] BYREF
  __int128 v24; // [rsp+88h] [rbp+47h]

  switch ( *(_DWORD *)a3 )
  {
    case 0:
      v16 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v19);
      v23 = *a3;
      v24 = a3[1];
      v17 = Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::RenderOutputD3D11Window,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
              this,
              &v21,
              (__int64)&v23,
              v16,
              (__int64)this + 592);
      v8 = *(_OWORD *)v17;
      *v17 = 0LL;
      v17[1] = 0LL;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      goto LABEL_22;
    case 1:
      v14 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v19);
      v23 = *a3;
      v24 = a3[1];
      v15 = Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::RenderOutputD3D11Xaml,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
              this,
              &v21,
              (__int64)&v23,
              v14,
              (__int64)this + 592);
      v8 = *(_OWORD *)v15;
      *v15 = 0LL;
      v15[1] = 0LL;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      goto LABEL_22;
    case 2:
    case 3:
      v12 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v19);
      v23 = *a3;
      v24 = a3[1];
      v13 = Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::RenderOutputD3D11Gdi,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
              this,
              &v21,
              (__int64)&v23,
              v12,
              (__int64)this + 592);
      v8 = *(_OWORD *)v13;
      *v13 = 0LL;
      v13[1] = 0LL;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      goto LABEL_22;
    case 5:
      v10 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v19);
      v23 = *a3;
      v24 = a3[1];
      v11 = Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
              this,
              &v21,
              (__int64)&v23,
              v10,
              (__int64)this + 592);
      v8 = *(_OWORD *)v11;
      *v11 = 0LL;
      v11[1] = 0LL;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
LABEL_22:
      v9 = v20;
      goto LABEL_23;
  }
  if ( *(_DWORD *)a3 != 6 )
  {
    v8 = 0LL;
    goto LABEL_25;
  }
  v6 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v21);
  v23 = *a3;
  v24 = a3[1];
  v7 = Spectre::Engine::RenderDevice::CreateOutput<Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
         this,
         &v19,
         (__int64)&v23,
         v6,
         (__int64)this + 592);
  v8 = *(_OWORD *)v7;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v9 = v22;
LABEL_23:
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
LABEL_25:
  *a2 = v8;
  return a2;
}
