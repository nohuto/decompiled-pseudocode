/*
 * XREFs of ?RenderCamera@Camera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BE8C
 * Callers:
 *     ?RenderCameras@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067A60 (-RenderCameras@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$vector@V-$shared_ptr@VCamera@Engine@Spect.c)
 * Callees:
 *     ?GetOutputMode@Camera@Engine@Spectre@@QEBA?AW4OutputMode@123@XZ @ 0x18005BA98 (-GetOutputMode@Camera@Engine@Spectre@@QEBA-AW4OutputMode@123@XZ.c)
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::Camera::RenderCamera(Spectre::Engine::Camera *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  Spectre::Engine::Camera *v7; // rcx

  (*(void (__fastcall **)(Spectre::Engine::Camera *, __int64))(*(_QWORD *)this + 176LL))(this, a3);
  (*(void (__fastcall **)(Spectre::Engine::Camera *, __int64, __int64))(*(_QWORD *)this + 184LL))(this, a2, a3);
  Spectre::Engine::Camera::RenderEffects(this, a2, a3);
  result = Spectre::Engine::Camera::GetOutputMode((__int64)this);
  if ( (_DWORD)result )
  {
    Spectre::Engine::Camera::SetFrameBuffer(v7);
    return Spectre::Engine::Camera::SetDepthBuffer(this);
  }
  return result;
}
