/*
 * XREFs of ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z @ 0x180058C48
 * Callers:
 *     ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94 (-ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 *     ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z @ 0x18005A068 (-ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  if ( a2 == 22 )
    return 3LL;
  if ( a2 <= 22 )
  {
    v2 = a2 - 11;
    if ( !v2 )
      return 0LL;
    v3 = v2 - 3;
    if ( !v3 )
      return 4LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 4LL;
    v5 = v4 - 1;
    if ( v5 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( !v8 )
          return 6LL;
        if ( (unsigned int)(v8 - 1) >= 2 )
          return 0LL;
        return 3LL;
      }
    }
    return 5LL;
  }
  v9 = a2 - 23;
  if ( !v9 )
    return 3LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 3LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 3LL;
  v12 = v11 - 244;
  if ( !v12 )
    return 5LL;
  v13 = v12 - 37;
  if ( !v13 )
    return 1LL;
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        return 6LL;
      return 0LL;
    }
  }
  return 2LL;
}
