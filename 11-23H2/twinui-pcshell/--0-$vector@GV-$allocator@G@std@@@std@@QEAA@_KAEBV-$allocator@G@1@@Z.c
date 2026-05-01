/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1803E5878
 * Callers:
 *     _anonymous_namespace_::GetRegistrySettingString @ 0x18023C948 (_anonymous_namespace_--GetRegistrySettingString.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall std::vector<unsigned short>::vector<unsigned short>(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  size_t v6; // rbx
  char *v7; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<2>(a2);
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v6 = 2 * a2;
    *a1 = v5;
    v7 = v5;
    a1[2] = &v5[v6];
    memset_0(v5, 0, v6);
    a1[1] = &v7[v6];
  }
  return a1;
}
