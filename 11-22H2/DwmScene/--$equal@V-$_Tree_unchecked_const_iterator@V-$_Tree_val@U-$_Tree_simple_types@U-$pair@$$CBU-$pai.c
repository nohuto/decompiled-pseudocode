/*
 * XREFs of ??$equal@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@0@00U?$equal_to@X@0@@Z @ 0x180059040
 * Callers:
 *     ??$?8U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@1@@std@@YA_NAEBV?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@0@0@Z @ 0x180058610 (--$-8U-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@UVector4@Math@.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 */

char __fastcall std::equal<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>>,std::_Iterator_base0>,std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>>,std::_Iterator_base0>,std::equal_to<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  size_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v10 = a1;
  v11 = a3;
  v5 = a1;
  while ( v5 != a2 )
  {
    if ( *(_DWORD *)(v5 + 32) != *(_DWORD *)(v3 + 32) )
      return 0;
    v6 = (_QWORD *)(v3 + 40);
    v7 = (_QWORD *)(v5 + 40);
    if ( *(_QWORD *)(v3 + 64) >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    v8 = *(_QWORD *)(v5 + 56);
    if ( *(_QWORD *)(v5 + 64) >= 0x10uLL )
      v7 = (_QWORD *)*v7;
    if ( v8 != *(_QWORD *)(v3 + 56)
      || memcmp_0(v7, v6, v8)
      || _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(v3 + 72), *(__m128 *)(v5 + 72))) != 15 )
    {
      return 0;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v10);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v11);
    v5 = v10;
    v3 = v11;
  }
  return 1;
}
