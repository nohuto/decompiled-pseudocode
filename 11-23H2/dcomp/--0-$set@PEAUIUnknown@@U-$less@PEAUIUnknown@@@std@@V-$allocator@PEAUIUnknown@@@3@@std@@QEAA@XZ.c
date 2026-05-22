/*
 * XREFs of ??0?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7294
 * Callers:
 *     ??0CPresentationManager@@AEAA@XZ @ 0x1801ACE58 (--0CPresentationManager@@AEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180068B10 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

__int64 *__fastcall std::set<IUnknown *>::set<IUnknown *>(__int64 *a1)
{
  SIZE_T size_of; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
