/*
 * XREFs of ?ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@@Z @ 0x180059F44
 * Callers:
 *     ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560 (-Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV-$basic_string_view@GU-$char_tra.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ParseInternal(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  void *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  signed int v11; // eax
  unsigned int v12; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 12);
  v7 = *(void **)(v3 + 1016);
  *(_QWORD *)(v3 + 1000) = 0LL;
  *(_DWORD *)(v3 + 1008) = 0;
  if ( v7 )
  {
    operator delete(v7);
    *(_QWORD *)(v3 + 1016) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  v8 = *a2;
  *(_QWORD *)this = *a2;
  if ( v8 )
  {
    v9 = a2[1];
    v10 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 1) = v9;
    if ( v9 >= *(unsigned int *)(v10 + 992) )
    {
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 9LL);
      v12 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        0x80004005,
        0xE2u,
        0LL);
    }
    else if ( v9 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationParser::ParseAndProcessTokens(this, a3);
      v12 = v11;
      if ( v11 < 0 )
      {
        v18 = 245;
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v11,
          v18,
          0LL);
      }
      else
      {
        while ( *((_DWORD *)this + 20) )
        {
          v14 = *((_DWORD *)this + 20);
          if ( !v14 )
            ModuleFailFastForHRESULT(2147946717LL, retaddr);
          v15 = 3LL * (unsigned int)(v14 - 1);
          v16 = *((_QWORD *)this + 7);
          if ( *(_DWORD *)(v16 + 4 * v15) == 11 )
          {
            Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 3LL);
            v12 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              4u,
              &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
              2u,
              0x80004005,
              0x10Au,
              0LL);
            return v12;
          }
          v11 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(
                  (Windows::UI::Composition::ExpressionAnimationBuilder **)this,
                  (const struct Windows::UI::Composition::ExpressionAnimationParser::Token *)(v16 + 4 * v15),
                  0);
          v12 = v11;
          if ( v11 < 0 )
          {
            v18 = 269;
            goto LABEL_24;
          }
          v17 = *((_DWORD *)this + 20);
          if ( v17 )
            *((_DWORD *)this + 20) = v17 - 1;
          else
            DoStackCaptureDirect(-2147024809, 0x19Cu);
        }
        if ( **((_DWORD **)this + 11) != 1 )
        {
          Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 1LL);
          v12 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            4u,
            &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            0x80004005,
            0x11Au,
            0LL);
        }
      }
    }
    else
    {
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 10LL);
      v12 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        0x80004005,
        0xEDu,
        0LL);
    }
  }
  else
  {
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 10LL);
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      0x80004005,
      0xD5u,
      0LL);
  }
  return v12;
}
