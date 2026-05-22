/*
 * XREFs of ?GetView@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180173A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18014385C (-InternalRelease@-$ComPtr@V-$SimpleVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@.c)
 *     ??0?$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x180173144 (--0-$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVector@PEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::ICompositionColorGradientStopCollection>::GetView(
        __int64 a1,
        __int64 *a2)
{
  int v4; // ebx
  LPVOID v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(&v10);
  v10 = 0LL;
  v4 = 0;
  v11 = 0LL;
  v5 = DefaultHeap::Alloc(0x38uLL);
  if ( v5
    && (v6 = Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::SimpleVectorView<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>(
               (__int64)v5,
               a1),
        v11 = v6,
        (v7 = v6) != 0) )
  {
    v11 = 0LL;
    v10 = v6;
  }
  else
  {
    v4 = -2147024882;
    v7 = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(&v11);
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v4 = 0;
    *a2 = v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtImplementsIVector.inl",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(&v10);
  return (unsigned int)v4;
}
