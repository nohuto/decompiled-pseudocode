/*
 * XREFs of ?GetIids@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801A0E00
 * Callers:
 *     ?GetIids@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B1520 (-GetIids@-$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVComposit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetIids(
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
    *v6 = GUID_e7e27ef4_4ec6_5b8a_a858_561b9534a885;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_1135adf5_db12_55e8_ae0f_bd8d914bd399;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
