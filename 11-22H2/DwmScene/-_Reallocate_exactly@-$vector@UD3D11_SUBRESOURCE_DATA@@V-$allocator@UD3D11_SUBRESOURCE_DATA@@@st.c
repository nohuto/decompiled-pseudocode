/*
 * XREFs of ?_Reallocate_exactly@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@AEAAX_K@Z @ 0x1800CF46C
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@YAPEAUD3D11_SUBRESOURCE_DATA@@QEAU1@0PEAU1@AEAV?$allocator@UD3D11_SUBRESOURCE_DATA@@@0@@Z @ 0x1800CC6F4 (--$_Uninitialized_move@PEAUD3D11_SUBRESOURCE_DATA@@V-$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@.c)
 */

void __fastcall std::vector<D3D11_SUBRESOURCE_DATA>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<D3D11_SUBRESOURCE_DATA *>(*(void **)a1, *(_QWORD *)(a1 + 8), v6);
  std::vector<D3D11_SUBRESOURCE_DATA>::_Change_array(a1, (__int64)v6, v4, a2);
}
