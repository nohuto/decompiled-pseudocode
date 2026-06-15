/*
 * XREFs of ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Z @ 0x1800FE34C
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E3A84 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VResourceGroupInstance@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Z @ 0x1800FE22C (--$Make@VResourceGroupInstance@@AEA_KAEAV-$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Details@WRL.c)
 */

// Hidden C++ exception states: #wind=1
ResourceGroupInstance **__fastcall wil::MakeOrThrow<ResourceGroupInstance,unsigned __int64 &,ATL::CComPtr<IKsControl> &,unsigned short (&)[257],unsigned long &>(
        ResourceGroupInstance **a1,
        unsigned __int64 *a2,
        struct IKsControl **a3,
        const unsigned __int16 *a4,
        unsigned int *a5)
{
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::WRL::Details::Make<ResourceGroupInstance,unsigned __int64 &,ATL::CComPtr<IKsControl> &,unsigned short (&)[257],unsigned long &>(
    a1,
    a2,
    a3,
    a4,
    a5);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      61LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
  return a1;
}
