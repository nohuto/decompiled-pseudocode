/*
 * XREFs of ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@0@Z @ 0x1800C7EA0
 * Callers:
 *     ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@PEAPEAU6345@1@Z @ 0x1800C7DA4 (-Split@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 * Callees:
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800C447C (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Split(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rbx

  *a2 = 0LL;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 109) )
  {
    v7 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Force(a1);
    if ( v7 >= 0 )
    {
      v7 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 72LL) + 12LL) )
      {
        v10 = *(_QWORD *)(a1 + 88);
        if ( v10 )
        {
          v11 = 0;
          if ( *(_BYTE *)(v10 + 109) )
          {
            v11 = *(_DWORD *)(v10 + 104);
          }
          else
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL, v8, v9);
          }
          v12 = v7;
          if ( v7 >= 0 )
          {
            if ( v11 )
            {
              v13 = *(_QWORD *)(a1 + 80);
              if ( v13 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(a1 + 80));
              *a2 = v13;
              v14 = *(_QWORD *)(a1 + 88);
              if ( v14 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(a1 + 88));
              *a3 = v14;
              return v12;
            }
          }
        }
      }
    }
  }
  else
  {
    v7 = -2147418113;
    RoOriginateError(2147549183LL, 0LL, a3, a4);
  }
  return (unsigned int)v7;
}
