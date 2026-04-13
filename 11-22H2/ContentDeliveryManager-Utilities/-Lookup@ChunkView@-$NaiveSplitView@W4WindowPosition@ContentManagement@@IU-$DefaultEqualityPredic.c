/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x1800B4140
 * Callers:
 *     ?Lookup@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x1800B4050 (-Lookup@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  int v3; // r9d
  char v4; // di
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( v3 >= 0 )
  {
    if ( (unsigned int)v8 >= v9 )
      goto LABEL_9;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    v14 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v14);
    v3 = v11;
    if ( v11 >= 0 )
    {
      if ( a2 == v14 )
      {
        v4 = 1;
        v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v10 + 56LL))(
               v10,
               a3,
               v12,
               (unsigned int)v11);
        if ( v3 < 0 )
          break;
LABEL_9:
        if ( v4 )
          return (unsigned int)v3;
        v3 = -2147483637;
        break;
      }
      v4 = 0;
      v3 = 0;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  *a3 = 0;
  return (unsigned int)v3;
}
