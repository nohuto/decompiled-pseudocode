/*
 * XREFs of ??$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUTextureImageDesc@Engine@Spectre@@1@Z @ 0x1800CC498
 * Callers:
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180055694 (--1-$_Tidy_guard@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engi.c)
 *     ?_Buy_nonzero@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180056A68 (-_Buy_nonzero@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engine@S.c)
 */

void __fastcall std::vector<Spectre::Engine::TextureImageDesc>::_Construct_n<Spectre::Engine::TextureImageDesc const *,Spectre::Engine::TextureImageDesc const *>(
        _QWORD *a1,
        unsigned __int64 a2,
        _OWORD **a3,
        _QWORD *a4)
{
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  _OWORD *i; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<Spectre::Engine::TextureImageDesc>::_Buy_nonzero(a1, a2);
    v7 = (_OWORD *)*a4;
    v8 = (_OWORD *)*a1;
    for ( i = *a3; i != v7; i += 2 )
    {
      *v8 = *i;
      v8[1] = i[1];
      v8 += 2;
    }
    v10 = 0LL;
    a1[1] = v8;
    std::_Tidy_guard<std::vector<Spectre::Engine::TextureImageDesc>>::~_Tidy_guard<std::vector<Spectre::Engine::TextureImageDesc>>(&v10);
  }
}
