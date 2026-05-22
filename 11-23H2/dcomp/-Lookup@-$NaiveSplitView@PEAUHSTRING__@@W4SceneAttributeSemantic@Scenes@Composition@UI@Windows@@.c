/*
 * XREFs of ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAW4SceneAttributeSemantic@Scenes@Composition@UI@5@@Z @ 0x18018E800
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureInitialized@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18014B008 (-EnsureInitialized@-$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@U.c)
 *     ??$IterateOnChunks@V_lambda_ab855a4a11227e8205b903f2f13b357b_@@V_lambda_af62152381c8ffbd0a550174e52717f9_@@@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_ab855a4a11227e8205b903f2f13b357b_@@V_lambda_af62152381c8ffbd0a550174e52717f9_@@@Z @ 0x18018C2B8 (--$IterateOnChunks@V_lambda_ab855a4a11227e8205b903f2f13b357b_@@V_lambda_af62152381c8ffbd0a550174.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  int v5; // edx
  int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  v10 = 0;
  v5 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::EnsureInitialized(a1);
  if ( v5 < 0
    || (v8[0] = &v9,
        v8[1] = &v10,
        v5 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::IterateOnChunks<_lambda_ab855a4a11227e8205b903f2f13b357b_,_lambda_af62152381c8ffbd0a550174e52717f9_>(
               a1,
               (__int64)v8),
        v5 < 0) )
  {
    v6 = 0;
  }
  else
  {
    v6 = v10;
  }
  *a3 = v6;
  return (unsigned int)v5;
}
