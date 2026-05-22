/*
 * XREFs of ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x180059020
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?Top@?$DynStack@I$0A@@@QEBAAEAIXZ @ 0x180095578 (-Top@-$DynStack@I$0A@@@QEBAAEAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessEndPrecedenceToken(
        Windows::UI::Composition::ExpressionAnimationParser *this)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // zf
  const struct Windows::UI::Composition::ExpressionAnimationParser::Token *v7; // rdx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // esi
  int v11; // eax
  const struct Windows::UI::Composition::ExpressionAnimationParser::Token *v12; // rdx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // r8d
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  while ( *((_DWORD *)this + 20) )
  {
    if ( v2 )
      goto LABEL_10;
    v3 = *((_DWORD *)this + 20);
    if ( !v3 )
      ModuleFailFastForHRESULT(2147946717LL, retaddr);
    v4 = 3LL * (unsigned int)(v3 - 1);
    v5 = *((_QWORD *)this + 7);
    v6 = *(_DWORD *)(v5 + 4 * v4) == 11;
    v7 = (const struct Windows::UI::Composition::ExpressionAnimationParser::Token *)(v5 + 4 * v4);
    if ( v6 )
    {
      v2 = 1;
    }
    else
    {
      v13 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(this, v7, 0);
      v14 = v13;
      if ( v13 < 0 )
      {
        v19 = 1826;
        goto LABEL_28;
      }
    }
    v8 = *((_DWORD *)this + 20);
    if ( v8 )
      *((_DWORD *)this + 20) = v8 - 1;
    else
      DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  if ( !v2 )
  {
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 2LL);
    v14 = -2147467259;
    v18 = -2147467259;
    v19 = 1842;
    goto LABEL_30;
  }
LABEL_10:
  if ( !*((_DWORD *)this + 12) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  v9 = *((_DWORD *)this + 12);
  if ( !v9 )
    ModuleFailFastForHRESULT(2147946717LL, retaddr);
  v10 = *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (unsigned int)(v9 - 1));
  *((_DWORD *)this + 12) = v9 - 1;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_18;
  v11 = *((_DWORD *)this + 20);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147946717LL, retaddr);
  v12 = (const struct Windows::UI::Composition::ExpressionAnimationParser::Token *)(*((_QWORD *)this + 7)
                                                                                  + 12LL * (unsigned int)(v11 - 1));
  if ( (*(_DWORD *)v12 & 0xFFFFFF00) != 0x100 )
    goto LABEL_18;
  v13 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(this, v12, v10);
  v14 = v13;
  if ( v13 < 0 )
  {
    v19 = 1879;
LABEL_28:
    v18 = v13;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v18,
      v19,
      0LL);
    return v14;
  }
  v15 = *((_DWORD *)this + 20);
  if ( v15 )
    *((_DWORD *)this + 20) = v15 - 1;
  else
    DoStackCaptureDirect(-2147024809, 0x19Cu);
LABEL_18:
  if ( *((_DWORD *)this + 12) )
  {
    v17 = *((_DWORD *)this + 12);
    if ( !v17 )
      ModuleFailFastForHRESULT(2147946717LL, retaddr);
    if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (unsigned int)(v17 - 1)) )
      *(_DWORD *)DynStack<unsigned int,0>::Top((char *)this + 24) = 1;
  }
  ++*((_DWORD *)this + 4);
  return 0;
}
