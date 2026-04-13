/*
 * XREFs of ?NewNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJAEBW4WindowPosition@ContentManagement@@IIPEAPEAVCNode@12@@Z @ 0x1800C6BD0
 * Callers:
 *     ?SetAt@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@IPEAPEAUTXPOSITION@2@@Z @ 0x1800C7CE0 (-SetAt@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Con.c)
 * Callees:
 *     ?PickSize@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAI_K@Z @ 0x1800C6CEC (-PickSize@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@.c)
 *     ?Rehash@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJI@Z @ 0x1800C7400 (-Rehash@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Co.c)
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::NewNode(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v7; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // ecx
  _QWORD *i; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax

  v5 = *(_QWORD **)(a1 + 72);
  v7 = a3;
  if ( !v5 )
  {
    v10 = *(_DWORD *)(a1 + 60);
    v11 = 24LL * v10;
    if ( !is_mul_ok(v10, 0x18uLL) )
      return 2147942414LL;
    if ( v11 + 8 < v11 )
      return 2147942414LL;
    v12 = malloc(v11 + 8);
    if ( !v12 )
      return 2147942414LL;
    *v12 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v12;
    v13 = v10 - 1;
    for ( i = &v12[2 * v10 - 2 + v10]; v13 >= 0; --v13 )
    {
      v5 = i;
      i[1] = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = i;
      i -= 3;
    }
    if ( !v5 )
      return 2147549183LL;
  }
  *(_QWORD *)(a1 + 72) = v5[1];
  *(_DWORD *)v5 = *a2;
  *((_DWORD *)v5 + 4) = a4;
  ++*(_QWORD *)(a1 + 16);
  v5[1] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v5;
  v16 = *(_QWORD *)(a1 + 16);
  if ( v16 <= *(_QWORD *)(a1 + 40)
    || *(_DWORD *)(a1 + 56)
    || (v17 = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::PickSize(
                a1,
                v16),
        result = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::Rehash(
                   a1,
                   v17),
        (int)result >= 0) )
  {
    *a5 = v5;
    return 0LL;
  }
  return result;
}
