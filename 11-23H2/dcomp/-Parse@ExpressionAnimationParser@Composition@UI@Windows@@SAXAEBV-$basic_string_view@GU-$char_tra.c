/*
 * XREFs of ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560
 * Callers:
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 * Callees:
 *     ?EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ @ 0x18003D640 (-EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@@Z @ 0x180059F44 (-ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV-$basic_string_view@GU.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::Parse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        Windows::UI::Composition::ExpressionAnimationBuilder *a6)
{
  int v9; // eax
  int v10; // eax
  unsigned int v12; // r9d
  _QWORD v13[2]; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+48h] [rbp-39h]
  _QWORD v15[3]; // [rsp+50h] [rbp-31h] BYREF
  int v16; // [rsp+68h] [rbp-19h]
  _QWORD v17[3]; // [rsp+70h] [rbp-11h] BYREF
  int v18; // [rsp+88h] [rbp+7h]
  Windows::UI::Composition::ExpressionAnimationBuilder *v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]

  v13[0] = 0LL;
  v13[1] = 0LL;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  memset(v17, 0, sizeof(v17));
  v18 = 0;
  v9 = Windows::UI::Composition::ExpressionAnimationParser::EnsureFunctionParser();
  if ( v9 < 0 )
  {
    v12 = 89;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v9,
      v12,
      0LL);
    if ( !*(_DWORD *)(a2 + 1000) )
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(v13, 1LL);
    goto LABEL_4;
  }
  v19 = a6;
  v10 = Windows::UI::Composition::ExpressionAnimationBuilder::Reset(a6);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v10,
      0xA1u,
      0LL);
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v23 = *(_QWORD *)(a3 + 24);
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v9 = Windows::UI::Composition::ExpressionAnimationParser::ParseInternal((Windows::UI::Composition::ExpressionAnimationParser *)v13);
  if ( v9 < 0 )
  {
    v12 = 93;
    goto LABEL_8;
  }
LABEL_4:
  DynArrayImpl<0>::~DynArrayImpl<0>(v17);
  return DynArrayImpl<0>::~DynArrayImpl<0>(v15);
}
