/*
 * XREFs of ?EnsureForced@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800C4044
 * Callers:
 *     ?MoveNext@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800C6AC0 (-MoveNext@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEquality.c)
 *     ?get_Current@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x1800C8450 (-get_Current@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqual.c)
 *     ?get_HasCurrent@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800C8550 (-get_HasCurrent@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEq.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008EF10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_18008EF10.c)
 *     ?First@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@456@@Z @ 0x1800C4380 (-First@ChunkView@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredica.c)
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800C447C (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::EnsureForced(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  volatile signed __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = 0LL;
  v2 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 80) )
    {
      v2 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Force();
      if ( v2 >= 0 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 80LL);
        v4 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::First(
               v3 + 16,
               &v17);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, &v16);
          if ( v2 >= 0 )
          {
            if ( v16 )
            {
              v5 = *(_QWORD *)(a1 + 88);
              *(_QWORD *)(a1 + 88) = v17;
              v17 = v5;
              v6 = *(_QWORD *)(a1 + 80);
              v7 = *(_QWORD *)(v6 + 88);
              if ( v6 != v7 )
              {
                if ( v7 )
                {
                  v8 = *(_QWORD *)(v7 + 64);
                  while ( v8 >= 0 )
                  {
                    if ( (_DWORD)v8 != 0x7FFFFFFF )
                    {
                      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
                      v9 = v8 == v10;
                      v8 = v10;
                      if ( !v9 )
                        continue;
                    }
                    goto LABEL_18;
                  }
                  do
                    v11 = *(_DWORD *)(2 * v8 + 0x10);
                  while ( v11 != 0x7FFFFFFF
                       && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v8 + 16), v11 + 1, v11) );
                }
LABEL_18:
                v12 = *(volatile signed __int64 **)(a1 + 80);
                *(_QWORD *)(a1 + 80) = v7;
                if ( v12 )
                  goto LABEL_24;
              }
            }
            else
            {
              v13 = *(_QWORD *)(a1 + 88);
              if ( v13 )
              {
                *(_QWORD *)(a1 + 88) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
              }
              v12 = *(volatile signed __int64 **)(a1 + 80);
              if ( v12 )
              {
                *(_QWORD *)(a1 + 80) = 0LL;
LABEL_24:
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Microsoft::WRL::FtmBase>::Release(v12);
              }
            }
          }
        }
      }
    }
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v2;
}
