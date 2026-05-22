/*
 * XREFs of ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Top@?$DynStack@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEBAAEAUToken@ExpressionAnimationParser@Composition@UI@Windows@@XZ @ 0x18003D074 (-Top@-$DynStack@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEBAAEAUToken@Exp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z @ 0x180058C48 (-GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEAAJPEFBUToken@ExpressionAnimationParser@Composition@UI@Windows@@I@Z @ 0x180073264 (-AddMultipleAndSet@-$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEA.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessComparisonToken(
        Windows::UI::Composition::ExpressionAnimationParser *this)
{
  __int64 v1; // r8
  unsigned __int64 v3; // r9
  __int16 v4; // dx
  __int16 v5; // ax
  Windows::UI::Composition::ExpressionAnimationParser *v6; // rcx
  enum TOKEN_TYPE v7; // edx
  unsigned int Precedence; // r14d
  int v9; // eax
  unsigned int v10; // edi
  Windows::UI::Composition::ExpressionAnimationParser *v12; // rax
  const struct Windows::UI::Composition::ExpressionAnimationParser::Token *v13; // rcx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  _DWORD v17[4]; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]

  v1 = *((unsigned int *)this + 4);
  v17[0] = 0;
  v17[1] = v1;
  v3 = (unsigned int)(v1 + 1);
  if ( v3 >= *((_QWORD *)this + 1) )
  {
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 8LL);
    v16 = 1319;
    goto LABEL_39;
  }
  v6 = *(Windows::UI::Composition::ExpressionAnimationParser **)this;
  v4 = *((_WORD *)v6 + v1);
  v5 = *((_WORD *)v6 + v3);
  LOWORD(v6) = 61;
  switch ( v4 )
  {
    case '=':
      if ( v5 != 61 )
        goto LABEL_29;
      v7 = 20;
      goto LABEL_16;
    case '!':
      if ( v5 != 61 )
        goto LABEL_29;
      v7 = 21;
      goto LABEL_16;
    case '<':
      if ( v5 != 61 )
      {
        v7 = 22;
        goto LABEL_7;
      }
      v7 = 23;
      goto LABEL_16;
  }
  if ( v4 != 62 )
  {
    if ( v4 == 38 )
    {
      if ( v5 == 38 )
      {
        v7 = 307;
        goto LABEL_16;
      }
      goto LABEL_29;
    }
    if ( v4 != 124 || v5 != 124 )
    {
LABEL_29:
      LODWORD(v3) = v1 + 1;
      if ( v4 == 33 )
      {
        v7 = 309;
        goto LABEL_7;
      }
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 4LL);
      v16 = 1373;
LABEL_39:
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147467259,
        v16,
        0LL);
      return v10;
    }
    v7 = 308;
LABEL_16:
    LODWORD(v3) = v1 + 2;
    goto LABEL_7;
  }
  if ( v5 == 61 )
  {
    v7 = 25;
    goto LABEL_16;
  }
  v7 = 24;
LABEL_7:
  v17[0] = v7;
  *((_DWORD *)this + 4) = v3;
  v17[2] = v3;
  Precedence = Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(v6, v7);
  while ( *((_DWORD *)this + 20) )
  {
    v12 = (Windows::UI::Composition::ExpressionAnimationParser *)DynStack<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::Top((char *)this + 56);
    if ( Precedence > Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(v12, *(enum TOKEN_TYPE *)v12) )
      break;
    v14 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(this, v13, 0);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v14,
        0x575u,
        0LL);
      return v10;
    }
    v15 = *((_DWORD *)this + 20);
    if ( v15 )
      *((_DWORD *)this + 20) = v15 - 1;
    else
      DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  v9 = DynArray<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::AddMultipleAndSet((char *)this + 56, v17);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
  return 0;
}
