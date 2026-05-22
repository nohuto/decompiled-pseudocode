/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180173790
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B1060 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_801d95c7_7ce2_55d7_a62f_2ff94c544034;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_0f2cfac1_cdbc_5c4e_a7d2_a3914fb63426;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
