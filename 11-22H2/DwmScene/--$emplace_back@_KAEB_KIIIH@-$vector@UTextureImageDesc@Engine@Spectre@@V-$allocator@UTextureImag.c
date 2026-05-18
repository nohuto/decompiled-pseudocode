/*
 * XREFs of ??$emplace_back@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEA_KAEB_K$$QEAI22$$QEAH@Z @ 0x180054F34
 * Callers:
 *     ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230 (-CreateDefaultImageDescriptors@Engine@Spectre@@YA-AV-$vector@UTextureImageDesc@Engine@Spectre@@V.c)
 * Callees:
 *     ??$_Emplace_reallocate@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureImageDesc@Engine@Spectre@@QEAU234@$$QEA_KAEB_K$$QEAI33$$QEAH@Z @ 0x180054DA4 (--$_Emplace_reallocate@_KAEB_KIIIH@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UText.c)
 */

char *__fastcall std::vector<Spectre::Engine::TextureImageDesc>::emplace_back<unsigned __int64,unsigned __int64 const &,unsigned int,unsigned int,unsigned int,int>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7)
{
  __int64 v7; // r11
  int v10; // r10d
  int v11; // edx
  int v12; // r9d
  int v13; // r8d
  __int64 v14; // rax
  char *result; // rax

  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == *(_QWORD *)(a1 + 16) )
    return std::vector<Spectre::Engine::TextureImageDesc>::_Emplace_reallocate<unsigned __int64,unsigned __int64 const &,unsigned int,unsigned int,unsigned int,int>(
             (char **)a1,
             (char *)v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  v10 = *a7;
  v11 = *a4;
  v12 = *a6;
  v13 = *a5;
  v14 = *a2;
  *(_QWORD *)(v7 + 8) = *a3;
  *(_QWORD *)v7 = v14;
  *(_DWORD *)(v7 + 16) = v11;
  *(_DWORD *)(v7 + 20) = v13;
  *(_DWORD *)(v7 + 24) = v12;
  *(_DWORD *)(v7 + 28) = v10;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 32;
  return result;
}
