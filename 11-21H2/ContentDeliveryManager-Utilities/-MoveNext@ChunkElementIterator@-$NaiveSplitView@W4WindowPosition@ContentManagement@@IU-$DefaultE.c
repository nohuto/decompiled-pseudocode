/*
 * XREFs of ?MoveNext@ChunkElementIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800C6980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkElementIterator::MoveNext(
        __int64 a1,
        bool *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // eax

  v4 = 0;
  *a2 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 >= *(_DWORD *)(v5 + 12) )
  {
    v4 = -2147483637;
    RoOriginateError(2147483659LL, 0LL, v5, a4);
  }
  else
  {
    v7 = v6 + 1;
    *(_DWORD *)(a1 + 72) = v7;
    *a2 = v7 < *(_DWORD *)(v5 + 12);
  }
  return v4;
}
