/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800741A8
 * Callers:
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006E700 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180071740 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  _QWORD *v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v10; // r10
  int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r13
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _WORD *v18; // rsi
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // r12
  int v22; // eax
  _QWORD *v23; // r9
  __int64 v24; // rax
  _QWORD *result; // rax

  v5 = a3[2];
  v6 = 2 * v5;
  if ( a3[3] < 8uLL )
    v7 = a3;
  else
    v7 = (_QWORD *)*a3;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v6; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ v8);
  v10 = (HIDWORD(v8) ^ v8) & a1[5];
  v11 = -1;
  if ( a1[6] <= v10 )
    v10 += -1LL - (a1[5] >> 1);
  v12 = 2 * v10;
  v13 = a1[2];
  v14 = *(_QWORD **)(v13 + 8 * v12);
  v15 = (_QWORD *)*a1;
  while ( 1 )
  {
    v16 = *(_QWORD **)(v13 + 8 * v12) == v15 ? v15 : **(_QWORD ***)(v13 + 8 * v12 + 8);
    if ( v14 == v16 )
      break;
    v17 = v14 + 2;
    if ( a3[3] < 8uLL )
      v18 = a3;
    else
      v18 = (_WORD *)*a3;
    v19 = v14[4];
    v20 = a3[2];
    if ( v19 < v5 )
      v20 = v14[4];
    v21 = v14[5];
    if ( v21 >= 8 )
      v17 = (_QWORD *)*v17;
    if ( v20 )
    {
      while ( *(_WORD *)v17 == *v18 )
      {
        v17 = (_QWORD *)((char *)v17 + 2);
        ++v18;
        if ( !--v20 )
          goto LABEL_23;
      }
      v22 = *(_WORD *)v17 < *v18 ? -1 : 1;
    }
    else
    {
LABEL_23:
      if ( v19 >= v5 )
        v22 = v19 != v5;
      else
        v22 = -1;
    }
    if ( !v22 )
    {
      v23 = v14 + 2;
      if ( v21 >= 8 )
        v23 = (_QWORD *)*v23;
      v24 = v14[4];
      if ( v5 < v19 )
        v24 = a3[2];
      if ( a3[3] >= 8uLL )
        a3 = (_QWORD *)*a3;
      if ( v24 )
      {
        while ( *(_WORD *)a3 == *(_WORD *)v23 )
        {
          a3 = (_QWORD *)((char *)a3 + 2);
          v23 = (_QWORD *)((char *)v23 + 2);
          if ( !--v24 )
            goto LABEL_38;
        }
        v11 = *(_WORD *)a3 < *(_WORD *)v23 ? -1 : 1;
      }
      else
      {
LABEL_38:
        if ( v5 >= v19 )
          v11 = v5 != v19;
      }
      if ( !v11 )
        v15 = v14;
      break;
    }
    v14 = (_QWORD *)*v14;
  }
  result = a2;
  *a2 = v15;
  return result;
}
