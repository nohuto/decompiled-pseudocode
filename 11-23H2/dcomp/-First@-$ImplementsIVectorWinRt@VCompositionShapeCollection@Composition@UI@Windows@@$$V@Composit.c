/*
 * XREFs of ?First@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x1801A0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180143834 (-InternalRelease@-$ComPtr@V-$SimpleVectorIterator@MU-$IVector@M@Collections@Foundation@Windows@@.c)
 *     ?Make@?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x1801A137C (-Make@-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVComposi.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionShapeCollection,>::First(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(&v9);
  v4 = Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::Make(
         a1 - 8,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    v9 = 0LL;
    v5 = 0;
    *a2 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtImplementsIVector.inl",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(&v9);
  return v5;
}
