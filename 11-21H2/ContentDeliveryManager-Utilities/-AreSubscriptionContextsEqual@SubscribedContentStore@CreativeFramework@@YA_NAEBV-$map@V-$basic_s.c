/*
 * XREFs of ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18006F6A0
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006EE8C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$find_if@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x18006D794 (--$find_if@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(void ****a1, void ****a2)
{
  void ***v3; // r14
  void **v4; // rbx
  char result; // al
  void ***v6; // rax
  void **j; // rcx
  void **i; // rax
  void *v9[4]; // [rsp+20h] [rbp-40h] BYREF
  void *v10[4]; // [rsp+40h] [rbp-20h] BYREF
  void **v11; // [rsp+98h] [rbp+38h] BYREF

  if ( a1[1] != a2[1] )
    return 0;
  v3 = *a1;
  v4 = **a1;
  while ( 1 )
  {
    result = 1;
    if ( v4 == (void **)v3 )
      break;
    v9[3] = (void *)7;
    v9[2] = 0LL;
    LOWORD(v9[0]) = 0;
    std::wstring::assign(v9, v4 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v10[3] = (void *)7;
    v10[2] = 0LL;
    LOWORD(v10[0]) = 0;
    std::wstring::assign(v10, v4 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( *std::find_if<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
            &v11,
            **a2,
            (__int64 *)*a2,
            v9) == (void **)*a2 )
      return 0;
    if ( !*((_BYTE *)v4 + 25) )
    {
      v6 = (void ***)v4[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = (void **)v4[1]; !*((_BYTE *)i + 25) && v4 == i[2]; i = (void **)i[1] )
          v4 = i;
        v4 = i;
      }
      else
      {
        v4 = (void **)v4[2];
        for ( j = *v6; !*((_BYTE *)j + 25); j = (void **)*j )
          v4 = j;
      }
    }
  }
  return result;
}
