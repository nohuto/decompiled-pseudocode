/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIInspectable@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE3C0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIInspectable@@@567@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE440 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_1800DE440.c)
 *     ?GetIids@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE540 (-GetIids@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Coll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::GetIids(
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
    *v6 = GUID_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
