/*
 * XREFs of ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028B1C (-SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::SetAntialiasingQuality(
        Spectre::Engine::RenderDevice *a1,
        int a2)
{
  int v3; // edi
  unsigned int OutputCount; // r12d
  unsigned int v5; // r14d
  std::_Ref_count_base *v6; // r15
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  _QWORD *ActiveSize; // rax
  __int64 v13; // rax
  void (__fastcall *v14)(__int64 *); // rbx
  __int64 v15; // [rsp+38h] [rbp-79h] BYREF
  std::_Ref_count_base *v16; // [rsp+40h] [rbp-71h]
  __int64 *v17; // [rsp+48h] [rbp-69h] BYREF
  std::_Ref_count_base *v18; // [rsp+50h] [rbp-61h]
  std::_Ref_count_base *v19[2]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v20; // [rsp+68h] [rbp-49h] BYREF
  std::_Ref_count_base *v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h] BYREF
  std::_Ref_count_base *v23; // [rsp+80h] [rbp-31h]
  _BYTE v24[96]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v25; // [rsp+118h] [rbp+67h] BYREF
  int v26; // [rsp+120h] [rbp+6Fh]

  v3 = 0;
  v26 = 0;
  *((_DWORD *)a1 + 104) = a2;
  OutputCount = Spectre::Engine::RenderDevice::GetOutputCount(a1);
  v5 = 0;
  if ( OutputCount )
  {
    v6 = v19[1];
    do
    {
      Spectre::Engine::RenderDevice::GetOutput((__int64)a1, &v17, v5);
      v7 = v17;
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v17 + 1), (__int64)v24);
      (*(void (__fastcall **)(__int64 *))(*v7 + 112))(v7);
      (*(void (__fastcall **)(__int64 *))(*v7 + 120))(v7);
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(*v7 + 152))(v7);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v20,
        v8);
      if ( v20 )
      {
        v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
               &v22,
               (_QWORD *)(v20 + 456));
        v3 |= 1u;
      }
      else
      {
        *(_OWORD *)v19 = 0LL;
        v9 = v19;
        v3 |= 2u;
        v6 = 0LL;
      }
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v15,
        v9);
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
      }
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
      }
      v10 = 0LL;
      v11 = 0LL;
      if ( v15 )
      {
        ActiveSize = Spectre::Engine::FrameBuffer::GetActiveSize(v15, &v25);
        v10 = (__m128)*(unsigned int *)ActiveSize;
        v11 = (__m128)*((unsigned int *)ActiveSize + 1);
      }
      v13 = *v7;
      v14 = *(void (__fastcall **)(__int64 *))(*v7 + 56);
      (*(void (__fastcall **)(__int64 *))(v13 + 104))(v17);
      (*(void (__fastcall **)(__int64 *))(*v17 + 96))(v17);
      v14(v17);
      if ( v15 )
        Spectre::Engine::FrameBuffer::SetActiveSize(v15, _mm_unpacklo_ps(v10, v11).m128_i64[0]);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v24);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      ++v5;
    }
    while ( v5 < OutputCount );
  }
}
