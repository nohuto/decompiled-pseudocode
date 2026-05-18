/*
 * XREFs of ?AttachOutput@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800576E0
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ??$_Emplace_reallocate@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VIRenderOutput@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x180056D3C (--$_Emplace_reallocate@V-$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VI.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall Spectre::Engine::Display::AttachOutput(_QWORD *a1, std::_Ref_count_base **a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  _QWORD *v7; // rax
  bool v8; // r12
  volatile signed __int32 *v9; // rax
  std::_Ref_count_base *v10; // rcx
  volatile signed __int32 *v11; // r8
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-30h]
  struct _Mtx_internal_imp_t *v18; // [rsp+70h] [rbp+8h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 16));
  v5 = a1[8];
  v6 = a1[9];
  while ( v5 != v6 )
  {
    v7 = std::weak_ptr<Spectre::Engine::GpuProfiler>::lock(v5, &v16);
    v8 = std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v7, a2);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v8 )
      break;
    v5 += 16LL;
  }
  if ( v5 == a1[9] )
  {
    *(_OWORD *)v15 = 0LL;
    v9 = (volatile signed __int32 *)a2[1];
    v10 = 0LL;
    v11 = 0LL;
    if ( v9 )
    {
      v10 = *a2;
      v15[0] = *a2;
      v15[1] = (std::_Ref_count_base *)v9;
      _InterlockedIncrement(v9 + 3);
      v11 = v9;
      v4 = v18;
    }
    v12 = a1[9];
    if ( v12 == a1[10] )
    {
      std::vector<std::weak_ptr<Spectre::Engine::IRenderOutput>>::_Emplace_reallocate<std::weak_ptr<Spectre::Engine::IRenderOutput>>(
        a1 + 8,
        (char *)v12,
        v15);
      v13 = v15[1];
    }
    else
    {
      *(_QWORD *)v12 = v10;
      *(_QWORD *)(v12 + 8) = v11;
      v13 = 0LL;
      a1[9] += 16LL;
    }
    if ( v13 )
      std::_Ref_count_base::_Decwref(v13);
  }
  return _Mtx_unlock(v4);
}
