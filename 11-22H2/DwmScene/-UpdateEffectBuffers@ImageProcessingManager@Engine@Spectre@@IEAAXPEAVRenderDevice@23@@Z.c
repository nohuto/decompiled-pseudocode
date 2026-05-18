/*
 * XREFs of ?UpdateEffectBuffers@ImageProcessingManager@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180073BA8
 * Callers:
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073ACC (-SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV-$shared_ptr@VImageProcessingEf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ImageProcessingManager::UpdateEffectBuffers(
        Spectre::Engine::ImageProcessingManager *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rsi
  __int64 *v6; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 5);
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v2 != v4 )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v7,
           v2);
    Spectre::Engine::ImageProcessingManager::SetEffectResources(this, v6);
    (*(void (__fastcall **)(_QWORD, struct Spectre::Engine::RenderDevice *, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v2 + 8LL))(
      *v2,
      a2,
      *((unsigned int *)this + 2),
      *((unsigned int *)this + 3),
      *((_DWORD *)this + 5),
      *((_DWORD *)this + 7));
    v2 += 2;
  }
}
