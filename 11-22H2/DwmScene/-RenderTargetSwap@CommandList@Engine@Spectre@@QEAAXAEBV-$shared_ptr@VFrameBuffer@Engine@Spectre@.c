/*
 * XREFs of ?RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180039474
 * Callers:
 *     ?RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180097BD0 (-RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?SetShaderTexture@TextureState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x18009E278 (-SetShaderTexture@TextureState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VTexture@E.c)
 *     ?SetRenderTarget@RenderTargetState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009F258 (-SetRenderTarget@RenderTargetState@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::CommandList::RenderTargetSwap(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned int i; // edi
  unsigned int v10; // eax
  __int64 result; // rax
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, v12);
  (*(void (__fastcall **)(std::_Ref_count_base *, unsigned int *))(*(_QWORD *)v12[0] + 200LL))(v12[0], &v13);
  v8 = 0;
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  *(_OWORD *)v12 = 0LL;
  Spectre::Engine::RenderTargetState::SetRenderTarget(*(_QWORD *)(a1 + 96) + 9256LL, v12);
  for ( i = 0; i < 6; ++i )
  {
    v10 = v13;
    if ( _bittest((const int *)&v10, i) )
    {
      *(_OWORD *)v12 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, std::_Ref_count_base **, _QWORD))Spectre::Engine::TextureState::SetShaderTexture)(
        *(_QWORD *)(a1 + 96) + 4632LL,
        i,
        v12,
        0LL);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  result = Spectre::Engine::RenderTargetState::SetRenderTarget(*(_QWORD *)(a1 + 96) + 9256LL, a2);
  if ( a4 != -1 )
  {
    do
    {
      result = v13;
      if ( _bittest((const int *)&result, v8) )
        result = Spectre::Engine::TextureState::SetShaderTexture(
                   *(_QWORD *)(a1 + 96) + 4632LL,
                   v8,
                   a3,
                   a4,
                   v12[0],
                   v12[1]);
      ++v8;
    }
    while ( v8 < 6 );
  }
  return result;
}
