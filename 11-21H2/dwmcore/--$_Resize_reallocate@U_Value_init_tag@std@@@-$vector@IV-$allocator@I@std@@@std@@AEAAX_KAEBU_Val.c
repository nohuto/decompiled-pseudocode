/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18022C8AC
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x18022E834 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18019AC28 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801BB0EC (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<KernelTap>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<float>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<unsigned int>::_Change_array((__int64)a1, (__int64)v7, a2, v5);
}
