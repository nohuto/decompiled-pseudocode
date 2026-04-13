/*
 * XREFs of ?GetNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAJAEBW4WindowPosition@ContentManagement@@AEAI1AEAPEAVCNode@12@PEAPEAV512@@Z @ 0x1800B2E1C
 * Callers:
 *     ?Lookup@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@PEAPEAVCPair@12@@Z @ 0x1800B40F8 (-Lookup@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Co.c)
 *     ?SetAt@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@IPEAPEAUTXPOSITION@2@@Z @ 0x1800B5328 (-SetAt@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Con.c)
 * Callees:
 *     ?Fnv1a@XWinRT@@YAIPEBE_K@Z @ 0x1800A30AC (-Fnv1a@XWinRT@@YAIPEBE_K@Z.c)
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNode(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // esi
  unsigned int v8; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned int *v11; // r10
  __int64 v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v18 = *a2;
  v8 = XWinRT::Fnv1a((XWinRT *)&v18, (const unsigned __int8 *)4);
  v10 = *(_QWORD *)(v9 + 8);
  HIDWORD(v12) = 0;
  *v11 = v8;
  LODWORD(v12) = v8 % *(_DWORD *)(v9 + 24);
  *a3 = v12;
  if ( v10 )
  {
    v13 = a5;
    v14 = 0LL;
    v15 = *(_QWORD *)(v10 + 8 * v12);
    *a5 = 0LL;
    while ( v15 )
    {
      if ( *(_DWORD *)(v15 + 16) == v8 && *(_DWORD *)v15 == v6 )
      {
        v16 = a6;
        *v13 = v14;
        *v16 = v15;
        return 0LL;
      }
      v14 = v15;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
