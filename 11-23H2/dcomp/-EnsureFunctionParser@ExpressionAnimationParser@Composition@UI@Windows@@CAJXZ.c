/*
 * XREFs of ?EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ @ 0x18003D640
 * Callers:
 *     ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560 (-Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV-$basic_string_view@GU-$char_tra.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Flush@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ @ 0x18003CD70 (-Flush@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unlock@?$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXXZ @ 0x18009590C (-Unlock@-$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Windows::UI::Composition::ExpressionAnimationParser::EnsureFunctionParser(void)
{
  unsigned int v0; // edi
  _QWORD *v2; // rbx
  wchar_t **v3; // rsi
  unsigned int i; // edi
  void *v5; // rcx

  if ( !Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser )
  {
    v2 = DefaultHeap::Alloc(0x40uLL);
    if ( !v2 )
    {
      v0 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147024882,
        0xE19u,
        0LL);
      return v0;
    }
    v2[1] = 0LL;
    *v2 = &CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::`vftable';
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *((_DWORD *)v2 + 10) = 0;
    CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::Flush((__int64)v2);
    *((_DWORD *)v2 + 14) = 1;
    v3 = &off_1801B8920;
    for ( i = 0; i < 0x5F; ++i )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, wchar_t *, char *))(*v2 + 8LL))(
              v2,
              *v3,
              (char *)&unk_1801B8928 + 16 * i) )
      {
        v0 = -2147467259;
        DoStackCaptureDirect(-2147467259, 0x33u);
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2147467259,
          0xE1Bu,
          0LL);
        Windows::UI::Composition::IdentifierParser<1,enum Windows::UI::Composition::TOKEN_TYPE>::Unlock(v2);
        return v0;
      }
      v3 += 2;
    }
    v5 = Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser;
    Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser = v2;
    if ( v5 )
      Windows::UI::Composition::IdentifierParser<1,enum Windows::UI::Composition::TOKEN_TYPE>::Unlock(v5);
  }
  return 0;
}
