/*
 * XREFs of ??$_Construct_n@$$V@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008EFD8
 * Callers:
 *     ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48 (-Generate@ColorTransform@Engine@Spectre@@QEAAX_KV-$function@$$A6A-AUColor@Math@Utils@Spectre@@U1.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18007CB54 (--1-$_Tidy_guard@V-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@Utils@Spectre@@@s.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUColor@Math@Utils@Spectre@@PEAU1234@_KAEAV?$allocator@UColor@Math@Utils@Spectre@@@0@@Z @ 0x18008F49C (--$_Uninitialized_value_construct_n@V-$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUCo.c)
 */

void __fastcall std::vector<Spectre::Utils::Math::Color>::_Construct_n<>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  size_of = std::_Get_size_of_n<16>(0x200uLL);
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v4;
  a1[2] = v4 + 0x2000;
  v5 = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Utils::Math::Color>>(v4, 512LL);
  v6 = 0LL;
  a1[1] = v5;
  std::_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>(&v6);
}
