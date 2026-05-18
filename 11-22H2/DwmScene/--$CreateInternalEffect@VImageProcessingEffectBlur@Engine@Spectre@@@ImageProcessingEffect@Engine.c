/*
 * XREFs of ??$CreateInternalEffect@VImageProcessingEffectBlur@Engine@Spectre@@@ImageProcessingEffect@Engine@Spectre@@IEAA?AV?$shared_ptr@VImageProcessingEffectBlur@Engine@Spectre@@@std@@XZ @ 0x180093990
 * Callers:
 *     ?CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180093CF0 (-CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRender.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x180093A7C (--$_Emplace_reallocate@V-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@-$vector@V-$s.c)
 *     ??0ImageProcessingEffectBlur@Engine@Spectre@@QEAA@XZ @ 0x18009BE40 (--0ImageProcessingEffectBlur@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Spectre::Engine::ImageProcessingEffect::CreateInternalEffect<Spectre::Engine::ImageProcessingEffectBlur>(
        __int64 a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  _QWORD *v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+30h] [rbp-18h]

  v4 = operator new(0x190uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    Spectre::Engine::ImageProcessingEffectBlur::ImageProcessingEffectBlur((Spectre::Engine::ImageProcessingEffectBlur *)(v4 + 4));
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = (__int64)(v5 + 4);
  a2[1] = (__int64)v5;
  if ( v5 )
    _InterlockedIncrement(v5 + 2);
  v6 = *a2;
  v11 = *a2;
  v7 = (std::_Ref_count_base *)a2[1];
  v12 = v7;
  v8 = *(_QWORD **)(a1 + 160);
  if ( v8 == *(_QWORD **)(a1 + 168) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>(
      a1 + 152,
      v8,
      &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v6;
    v8[1] = v7;
    v9 = 0LL;
    *(_QWORD *)(a1 + 160) += 16LL;
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
