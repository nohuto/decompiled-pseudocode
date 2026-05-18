/*
 * XREFs of ?ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x180059F50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetOutputMode@Camera@Engine@Spectre@@QEBA?AW4OutputMode@123@XZ @ 0x18005BA98 (-GetOutputMode@Camera@Engine@Spectre@@QEBA-AW4OutputMode@123@XZ.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Camera::ApplyOutputState(Spectre::Engine::Camera *this, _QWORD *a2)
{
  unsigned int OutputMode; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r8d
  const char *v9; // r9
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF

  OutputMode = Spectre::Engine::Camera::GetOutputMode();
  v7 = OutputMode;
  if ( OutputMode == 1 )
  {
    if ( (*(_DWORD *)(v6 + 440) & 0x100) != 0 )
      v7 = (unsigned int)((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 280LL))(*v5) != 0) + 2;
    if ( (*((_DWORD *)this + 110) & 0x200) != 0 )
    {
LABEL_13:
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 152LL))(*a2, v5, v7);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v14,
        v10);
      Spectre::Engine::ImageProcessingManager::GetOffscreenRenderBuffer(v14[0], v15, 2LL);
      Spectre::Engine::Camera::SetFrameBuffer(this);
      Spectre::Engine::ImageProcessingManager::GetOffscreenDepthBuffer(v14[0], v15, 2LL);
      Spectre::Engine::Camera::SetDepthBuffer(this);
      v11 = v14[1];
      goto LABEL_14;
    }
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v15);
    Spectre::Engine::Camera::SetFrameBuffer(this);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 40LL))(*a2, v15);
    Spectre::Engine::Camera::SetDepthBuffer(this);
    return;
  }
  v7 = (unsigned int)(v8 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( !*((_QWORD *)this + 17) && !*((_QWORD *)this + 19) )
      {
        v9 = (char *)this + 24;
        if ( *((_QWORD *)this + 6) >= 0x10uLL )
          v9 = *(const char **)v9;
        Trace::LevelSettingsWrapper::Output(
          &gTraceLevelsNativeRenderer_Camera,
          4,
          "Warning: camera '%s' not bound to any render target or depth buffer -- no pixels will be rendered",
          v9);
      }
      return;
    }
    goto LABEL_13;
  }
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v15, v12);
  v13 = v15[0];
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v14,
    (_QWORD *)(v15[0] + 456LL));
  Spectre::Engine::Camera::SetFrameBuffer(this);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v14,
    (_QWORD *)(v13 + 472));
  Spectre::Engine::Camera::SetDepthBuffer(this);
  v11 = (std::_Ref_count_base *)v15[1];
LABEL_14:
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
