/*
 * XREFs of ??$_Construct_in_place@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YAXAEAVRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK44AEBM@Z @ 0x180016CC8
 * Callers:
 *     ??$make_shared@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YA?AV?$shared_ptr@VRenderOutputDwm@@@0@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK33AEBM@Z @ 0x180017354 (--$make_shared@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV-$shared_ptr@VRenderD.c)
 * Callees:
 *     ??0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@IIIM@Z @ 0x180010E24 (--0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Construct_in_place<RenderOutputDwm,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int128 v13; // xmm1
  int v14; // r10d
  int v15; // r11d
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = *a7;
  v10 = *a4;
  *a4 = 0LL;
  v17[0] = v10;
  v11 = a4[1];
  a4[1] = 0LL;
  v17[1] = v11;
  v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v18,
          a3);
  v13 = a2[1];
  v19[0] = *a2;
  v19[1] = v13;
  return RenderOutputDwm::RenderOutputDwm(a1, v19, v12, v17, v14, v15, v9);
}
