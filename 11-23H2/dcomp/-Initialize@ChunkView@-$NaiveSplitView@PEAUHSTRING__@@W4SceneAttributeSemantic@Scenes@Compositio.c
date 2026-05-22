/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@456@@Z @ 0x18014C170
 * Callers:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18014B464 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$.c)
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18018D654 (-Force@-$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddPair@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@456@@Z @ 0x18014ADF4 (-AddPair@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Wind.c)
 *     ?InternalRelease@?$ComPtr@VChunk@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C328 (-InternalRelease@-$ComPtr@VChunk@-$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r15d
  int v8; // edi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rdi
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  char v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>::InternalRelease(&v15);
  v4 = DefaultHeap::Alloc(0x90uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v4[3] = 0;
    *(_QWORD *)v4 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
    v4[2] = 1;
    v6 = *a2;
    v15 = v5;
    v7 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64 *, char *))(v6 + 56))(a2, &v14);
    if ( v8 >= 0 )
    {
      while ( v14 )
      {
        if ( v7 < 0x10 )
        {
          v9 = *a2;
          v12 = 0LL;
          v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48);
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
          v8 = v10(a2, &v12);
          if ( v8 >= 0 )
          {
            v8 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::AddPair(
                   v5,
                   v12);
            if ( v8 >= 0 )
              v8 = (*(__int64 (__fastcall **)(__int64 *, char *))(*a2 + 64))(a2, &v14);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
          ++v7;
          if ( v8 >= 0 )
            continue;
        }
        if ( v8 < 0 )
          goto LABEL_15;
        break;
      }
      if ( *(_QWORD *)(a1 + 72) != v5 )
      {
        if ( v5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
          v5 = v15;
        }
        v13 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v5;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>::InternalRelease(&v13);
      }
    }
  }
  else
  {
    v15 = 0LL;
    v8 = -2147024882;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>::InternalRelease(&v15);
  return (unsigned int)v8;
}
