/*
 * XREFs of ?Render@ImageProcessingEffectBloom@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x180096350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::ImageProcessingEffectBloom::Render(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD *, __int64); // r11
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v13);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v15, a5);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v16,
         &v13);
  v11(a1, a3, a4, v9, v10);
  Spectre::Engine::FrameBuffer::GetTexture(*(_QWORD *)(a1 + 232), a2);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return a2;
}
