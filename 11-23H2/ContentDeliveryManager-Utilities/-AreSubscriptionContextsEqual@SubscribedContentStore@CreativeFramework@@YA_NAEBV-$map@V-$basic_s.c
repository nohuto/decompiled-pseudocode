/*
 * XREFs of ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x180068320
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C2C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x1800662EC (--$_Find_if@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$.c)
 *     ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x180066F54 (--0-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@AEBU0.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x1800673B8 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800676DC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  _QWORD v9[8]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v10[96]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v11; // [rsp+D0h] [rbp+67h] BYREF
  _QWORD *v12; // [rsp+D8h] [rbp+6Fh]
  __int64 v13; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 0;
  v3 = *(_QWORD **)a1;
  v4 = **(_QWORD ***)a1;
  v11 = v4;
  while ( v4 != v3 )
  {
    std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>((__int64)v9, (__int64)(v4 + 4));
    v12 = v9;
    v5 = *(__int64 **)a2;
    v6 = **(_QWORD **)a2;
    std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>((__int64)v10, (__int64)v9);
    v7 = *std::_Find_if<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
            &v13,
            v6,
            (__int64)v5,
            (__int64)v10);
    std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(v9);
    if ( v7 == *(_QWORD *)a2 )
      return 0;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>::operator++(&v11);
    v4 = v11;
  }
  return 1;
}
