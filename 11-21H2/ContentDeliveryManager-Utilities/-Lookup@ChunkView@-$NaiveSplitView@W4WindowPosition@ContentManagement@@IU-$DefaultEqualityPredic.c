/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x1800C6410
 * Callers:
 *     ?Lookup@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x1800C6310 (-Lookup@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  __int64 v8; // rsi
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v7 )
    {
      result = 2147483659LL;
      goto LABEL_9;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v6 + 16);
    v10 = 0;
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v10);
    if ( (int)result < 0 )
      goto LABEL_9;
    if ( a2 == v10 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  result = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 56LL))(v8, a3);
  if ( (int)result >= 0 )
    return result;
LABEL_9:
  *a3 = 0;
  return result;
}
