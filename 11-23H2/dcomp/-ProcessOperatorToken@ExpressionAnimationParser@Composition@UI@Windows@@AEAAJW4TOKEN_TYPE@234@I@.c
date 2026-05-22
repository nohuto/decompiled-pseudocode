/*
 * XREFs of ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z @ 0x18005A068
 * Callers:
 *     ?ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z @ 0x18003CDAC (-ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z @ 0x180058C48 (-GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEAAJPEFBUToken@ExpressionAnimationParser@Composition@UI@Windows@@I@Z @ 0x180073264 (-AddMultipleAndSet@-$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEA.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessOperatorToken(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        int a2,
        int a3)
{
  unsigned int Precedence; // r14d
  int v6; // eax
  Windows::UI::Composition::ExpressionAnimationParser *v7; // rcx
  const struct Windows::UI::Composition::ExpressionAnimationParser::Token *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  signed int v13; // eax
  int v14; // ecx
  _DWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v15[0] = a2;
  v15[2] = a3 + 1;
  v15[1] = a3;
  Precedence = Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(this, a2);
  while ( *((_DWORD *)this + 20) )
  {
    v6 = *((_DWORD *)this + 20);
    if ( !v6 )
      ModuleFailFastForHRESULT(2147946717LL, retaddr);
    v7 = (Windows::UI::Composition::ExpressionAnimationParser *)(*((_QWORD *)this + 7) + 12LL * (unsigned int)(v6 - 1));
    if ( Precedence > (unsigned int)Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(
                                      v7,
                                      *(_DWORD *)v7) )
      break;
    v13 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(
            (Windows::UI::Composition::ExpressionAnimationBuilder **)this,
            v8,
            0);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v13,
        0x4EAu,
        0LL);
      return v11;
    }
    v14 = *((_DWORD *)this + 20);
    if ( v14 )
      *((_DWORD *)this + 20) = v14 - 1;
    else
      DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  v9 = DynArray<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::AddMultipleAndSet((char *)this + 56, v15);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
  v10 = *((_DWORD *)this + 4);
  if ( a3 == v10 )
    *((_DWORD *)this + 4) = v10 + 1;
  return 0;
}
