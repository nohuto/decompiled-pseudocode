/*
 * XREFs of ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130
 * Callers:
 *     ?UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z @ 0x1800CB0F0 (-UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z.c)
 * Callees:
 *     _o_ceilf_0 @ 0x18000BFFC (_o_ceilf_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetSampleCount@Texture@Engine@Spectre@@QEBAIW4RenderDeviceID@23@@Z @ 0x18002C348 (-GetSampleCount@Texture@Engine@Spectre@@QEBAIW4RenderDeviceID@23@@Z.c)
 *     ?SetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEAAXH@Z @ 0x18002CB00 (-SetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEAAXH@Z.c)
 *     ?UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002D008 (-UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderOutput::UpdateRenderTarget(
        Spectre::Engine::RenderOutput *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  __int64 v6; // rax
  int v7; // edi
  int v8; // r14d
  int v9; // ebx
  int v10; // eax
  Spectre::Engine::ImageProcessingManager **v11; // rbx
  unsigned int ID; // eax
  __int64 v13; // rcx
  int SampleCount; // eax
  struct Spectre::Engine::RenderDevice *v15; // [rsp+28h] [rbp-41h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-39h]
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-29h]
  _DWORD v19[24]; // [rsp+48h] [rbp-21h] BYREF

  v6 = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, __int64 *))(*(_QWORD *)this + 376LL))(this, &v17);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v6, &v15);
  if ( v18 )
    std::_Ref_count_base::_Decwref(v18);
  if ( v15 )
  {
    v7 = *((_DWORD *)this + 41);
    v8 = *((_DWORD *)this + 42);
    v9 = (int)o_ceilf_0(a2 * a4);
    v10 = (int)o_ceilf_0(a3 * a5);
    if ( v9 < 1 )
      v9 = 1;
    *((_DWORD *)this + 41) = v9;
    if ( v10 < 1 )
      v10 = 1;
    *((_DWORD *)this + 42) = v10;
    if ( v7 != v9 || v8 != v10 )
      Spectre::Engine::RenderOutput::SetMustSetRTActiveSizeCounter(this, 3);
    *((float *)this + 46) = a4;
    *((float *)this + 47) = a5;
    *((float *)this + 44) = a2;
    *((float *)this + 45) = a3;
    if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 280LL))(this) )
    {
      v19[0] = *((_DWORD *)this + 41);
      v19[1] = *((_DWORD *)this + 42);
      v19[2] = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, _QWORD))(*(_QWORD *)this + 264LL))(this, 0LL);
      v19[3] = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, __int64))(*(_QWORD *)this + 264LL))(
                 this,
                 1LL);
      v19[4] = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, __int64))(*(_QWORD *)this + 264LL))(
                 this,
                 2LL);
      v19[5] = 0;
      v11 = (Spectre::Engine::ImageProcessingManager **)(*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 152LL))(this);
      Spectre::Engine::ImageProcessingManager::CreateBuffers(
        *v11,
        v15,
        (const struct Spectre::Engine::ImageProcessingConfiguration *)v19);
      Spectre::Engine::RenderOutput::UpdateImageProcessingActiveSize(this);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v17,
        (_QWORD *)*v11 + 57);
      ID = Spectre::Engine::RenderDevice::GetID((__int64)v15);
      v13 = *(_QWORD *)(v17 + 136);
      if ( v13 )
        SampleCount = Spectre::Engine::Texture::GetSampleCount(v13, ID);
      else
        SampleCount = 0;
      *((_DWORD *)this + 43) = SampleCount;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    else
    {
      *((_DWORD *)this + 43) = 1;
    }
  }
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
