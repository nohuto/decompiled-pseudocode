/*
 * XREFs of ??1RenderOutput@Engine@Spectre@@MEAA@XZ @ 0x18002B928
 * Callers:
 *     ??_ERenderOutput@Engine@Spectre@@MEAAPEAXI@Z @ 0x18002BBE0 (--_ERenderOutput@Engine@Spectre@@MEAAPEAXI@Z.c)
 *     ??1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ @ 0x1800C8FA0 (--1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ.c)
 *     ??1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D8DF8 (--1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11_::_1_::dtor$4 @ 0x1800F17C6 (_Spectre--Engine--D3D11--RenderOutputD3D11--RenderOutputD3D11_--_1_--dtor$4.c)
 *     _Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::RenderOutputD3D11Holographic_::_1_::dtor$4 @ 0x1800F1B59 (_Spectre--Engine--D3D11--Holographic--RenderOutputD3D11Holographic--RenderOutputD3D_ea_1800F1B59.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXXZ @ 0x180027784 (-_Tidy@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@AEAAXX.c)
 *     ??1?$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VGpuProfileStatsRenderer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18002B888 (--1-$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U-$default_delete@VGpuProfileStatsRende.c)
 *     ?_Tidy@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18002D504 (-_Tidy@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@E.c)
 */

void __fastcall Spectre::Engine::RenderOutput::~RenderOutput(Spectre::Engine::RenderOutput *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v10 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 26, (__int64 *)v10);
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 62);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::unique_ptr<Spectre::Engine::GpuProfileStatsRenderer>::~unique_ptr<Spectre::Engine::GpuProfileStatsRenderer>((Spectre::Engine::GpuProfileStatsRenderer **)this + 59);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 56);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Tidy((char *)this + 416);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 49);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  _Mtx_destroy_in_situ((Spectre::Engine::RenderOutput *)((char *)this + 304));
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 31);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 27);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::vector<std::function<void (void)>>::_Tidy((__int64)this + 128);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v9 )
    std::_Ref_count_base::_Decwref(v9);
  Spectre::Engine::IRenderOutput::~IRenderOutput(this);
}
