/*
 * XREFs of ?Rehash@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJI@Z @ 0x1800C7400
 * Callers:
 *     ?FreeNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x1800C4770 (-FreeNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@.c)
 *     ?NewNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJAEBW4WindowPosition@ContentManagement@@IIPEAPEAVCNode@12@@Z @ 0x1800C6BD0 (-NewNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800221C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?PickSize@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAI_K@Z @ 0x1800C6CEC (-PickSize@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@.c)
 *     ?UpdateRehashThresholds@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAXXZ @ 0x1800C802C (-UpdateRehashThresholds@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4W.c)
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  size_t v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 16));
  if ( v2 == *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 24) = v2;
    XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::UpdateRehashThresholds(a1);
    return 0LL;
  }
  v5 = 8LL * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( v2 <= 0x1FFFFFFF )
  {
    memset_0(v6, 0, 8LL * v2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
      if ( v9 )
      {
        do
        {
          v10 = *(_QWORD *)(v9 + 8);
          v11 = *(_DWORD *)(v9 + 16) % v2;
          *(_QWORD *)(v9 + 8) = v7[v11];
          v7[(unsigned int)v11] = v9;
          v9 = v10;
        }
        while ( v10 );
      }
    }
    operator delete[](*(void **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
    goto LABEL_6;
  }
  return 2147549183LL;
}
