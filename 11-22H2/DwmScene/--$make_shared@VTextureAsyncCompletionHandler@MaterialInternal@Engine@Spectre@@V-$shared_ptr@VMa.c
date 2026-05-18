/*
 * XREFs of ??$make_shared@VTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@V?$shared_ptr@VMaterial@Engine@Spectre@@@std@@AEAW4ShaderProperty@34@AEA_K@std@@YA?AV?$shared_ptr@VTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VMaterial@Engine@Spectre@@@0@AEAW4ShaderProperty@Engine@Spectre@@AEA_K@Z @ 0x180043828
 * Callers:
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z @ 0x18004499C (-SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler,std::shared_ptr<Spectre::Engine::Material>,enum Spectre::Engine::ShaderProperty &,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int16 v8; // r8
  __int64 v9; // r9
  std::_Ref_count_base *v10; // rcx
  _QWORD *result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    v6 = std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v12, a2);
    *((_QWORD *)v5 + 2) = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
    *((_QWORD *)v5 + 3) = v7;
    *((_QWORD *)v5 + 4) = v7;
    *((_QWORD *)v5 + 3) = *v6;
    *((_QWORD *)v5 + 4) = v6[1];
    v6[1] = v7;
    *v6 = v7;
    *((_WORD *)v5 + 20) = v8;
    *((_QWORD *)v5 + 6) = v9;
    v10 = (std::_Ref_count_base *)v6[1];
    if ( v10 )
      std::_Ref_count_base::_Decwref(v10);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  result = a1;
  a1[1] = v5;
  return result;
}
