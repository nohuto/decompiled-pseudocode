/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@V12@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180073C7C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180073F44 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180073F44.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::equal_range(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r11
  _QWORD *v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r13
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _WORD *v19; // r9
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  int v22; // ecx
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r9
  _WORD *v28; // r11
  int v29; // ecx

  v6 = a3[2];
  v7 = 2 * v6;
  if ( a3[3] < 8uLL )
    v8 = a3;
  else
    v8 = (_QWORD *)*a3;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v7; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)v8 + i) ^ v9);
  v11 = (HIDWORD(v9) ^ v9) & a1[5];
  if ( a1[6] <= v11 )
    v11 += -1LL - ((unsigned __int64)a1[5] >> 1);
  v12 = 2 * v11;
  v13 = a1[2];
  v14 = *(_QWORD **)(v13 + 8 * v12);
  v15 = *a1;
  while ( 1 )
  {
    v16 = v14;
    v17 = *(_QWORD *)(v13 + 8 * v12) == v15 ? (_QWORD *)v15 : **(_QWORD ***)(v13 + 8 * v12 + 8);
    if ( v14 == v17 )
      break;
    v18 = v14 + 2;
    if ( a3[3] < 8uLL )
      v19 = a3;
    else
      v19 = (_WORD *)*a3;
    v20 = v14[4];
    v21 = v6;
    if ( v20 < v6 )
      v21 = v14[4];
    if ( v14[5] >= 8uLL )
      v18 = (_QWORD *)*v18;
    if ( v21 )
    {
      while ( *(_WORD *)v18 == *v19 )
      {
        v18 = (_QWORD *)((char *)v18 + 2);
        ++v19;
        if ( !--v21 )
          goto LABEL_23;
      }
      v22 = *(_WORD *)v18 < *v19 ? -1 : 1;
    }
    else
    {
LABEL_23:
      if ( v20 >= v6 )
        v22 = v20 != v6;
      else
        v22 = -1;
    }
    if ( !v22 )
    {
      v23 = v14;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v13 + 8 * v12) == v15 ? (_QWORD *)v15 : **(_QWORD ***)(v13 + 8 * v12 + 8);
        if ( v14 == v24 )
          break;
        v25 = v14 + 2;
        v26 = v14[4];
        if ( v14[5] >= 8uLL )
          v25 = (_QWORD *)*v25;
        v27 = v14[4];
        if ( v6 < v26 )
          v27 = v6;
        v28 = a3[3] < 8uLL ? a3 : (_WORD *)*a3;
        if ( v27 )
        {
          while ( *v28 == *(_WORD *)v25 )
          {
            ++v28;
            v25 = (_QWORD *)((char *)v25 + 2);
            if ( !--v27 )
              goto LABEL_44;
          }
          v29 = *v28 < *(_WORD *)v25 ? -1 : 1;
        }
        else
        {
LABEL_44:
          v29 = v6 >= v26 ? v6 != v26 : -1;
        }
        if ( v29 )
          break;
        v14 = (_QWORD *)*v14;
      }
      if ( v16 != v14 )
      {
        *a2 = v23;
        a2[1] = v14;
        return a2;
      }
      break;
    }
    v14 = (_QWORD *)*v14;
  }
  *a2 = v15;
  a2[1] = v15;
  return a2;
}
