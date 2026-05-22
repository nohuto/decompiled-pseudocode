/*
 * XREFs of ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178
 * Callers:
 *     ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94 (-ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 *     ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x180059020 (-ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@@Z @ 0x180059F44 (-ParseInternal@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBV-$basic_string_view@GU.c)
 *     ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z @ 0x18005A068 (-ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@.c)
 *     ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18007B700 (-ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(
        Windows::UI::Composition::ExpressionAnimationBuilder **this,
        const struct Windows::UI::Composition::ExpressionAnimationParser::Token *a2,
        unsigned int a3)
{
  int v3; // r9d
  int v4; // esi
  int v5; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  signed int v11; // ebx
  int v13; // ecx
  signed int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _DWORD *i; // rcx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v7 = *(_DWORD *)a2;
  if ( *(int *)a2 > 256 )
  {
    switch ( v7 )
    {
      case 257:
        goto LABEL_27;
      case 258:
        goto LABEL_21;
      case 259:
        goto LABEL_8;
      case 260:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 62, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2519;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 261:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 63, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2523;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 262:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 64, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2527;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 263:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 65, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2531;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 264:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 66, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2535;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 265:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 67, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2539;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 266:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 68, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2543;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 267:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 69, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2547;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 268:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 11, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2379;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 269:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 17, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2399;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 270:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 18, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2383;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 271:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 19, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2387;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 272:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 20, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2391;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 273:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 21, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2395;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 274:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 22, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2403;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 275:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 23, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2407;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 276:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 24, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2411;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 277:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 25, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2415;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 278:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 26, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2419;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 279:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 27, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2423;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 280:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 28, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2427;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 281:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 29, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2431;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 282:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 30, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2435;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 283:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 31, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2439;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 284:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 32, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2443;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 285:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 33, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2447;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 286:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 34, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2451;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 287:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 71, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2559;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 288:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 72, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2567;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 289:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 73, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2551;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 290:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 70, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2571;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 291:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 74, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2563;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 292:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 75, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2555;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 293:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 76, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2575;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 294:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 77, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2579;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 295:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 78, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2583;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 296:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 79, a3);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2587;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 297:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 80, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2591;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 298:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 81, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2595;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 299:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 82, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2599;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 300:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 83, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2603;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 301:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 84, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2607;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 302:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 85, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2611;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 303:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 86, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2615;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 304:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 87, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2619;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 305:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 88, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2623;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 307:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 59, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2367;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 308:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 60, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2371;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 309:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 61, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2375;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 310:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 35, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2455;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 311:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 36, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2459;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 312:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 37, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2463;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 313:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 38, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2467;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 314:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 39, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2471;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 315:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 40, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2475;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 316:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 41, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2479;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 317:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 42, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2483;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 318:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 43, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2487;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 319:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 44, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2491;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 320:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 45, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2495;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 321:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 46, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2499;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 322:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 47, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2503;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 323:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 48, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2507;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 324:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 49, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2511;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 325:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 50, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2515;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 326:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 89, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2627;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 327:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 90, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2631;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 328:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 91, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2635;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 329:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 92, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2639;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 330:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 93, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2643;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 331:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 94, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2647;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 332:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 95, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2651;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 333:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 96, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2655;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 334:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 97, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2659;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 335:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 98, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2663;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 336:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 99, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2667;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      case 337:
        v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 100, 0);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        v21 = 2671;
        *((_DWORD *)this[12] + 251) = v4;
        *((_DWORD *)this[12] + 252) = v5;
        break;
      default:
        goto LABEL_193;
    }
    goto LABEL_198;
  }
  if ( v3 == 256 )
    goto LABEL_25;
  if ( v7 > 20 )
  {
    v15 = v7 - 21;
    if ( !v15 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 54, 0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v21 = 2347;
      *((_DWORD *)this[12] + 251) = v4;
      *((_DWORD *)this[12] + 252) = v5;
      goto LABEL_198;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 55, 0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v21 = 2351;
      *((_DWORD *)this[12] + 251) = v4;
      *((_DWORD *)this[12] + 252) = v5;
      goto LABEL_198;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 56, 0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v21 = 2355;
      *((_DWORD *)this[12] + 251) = v4;
      *((_DWORD *)this[12] + 252) = v5;
      goto LABEL_198;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 57, 0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v21 = 2359;
      *((_DWORD *)this[12] + 251) = v4;
      *((_DWORD *)this[12] + 252) = v5;
      goto LABEL_198;
    }
    if ( v18 == 1 )
    {
      v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 58, 0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v21 = 2363;
      *((_DWORD *)this[12] + 251) = v4;
      *((_DWORD *)this[12] + 252) = v5;
      goto LABEL_198;
    }
    goto LABEL_193;
  }
  if ( v7 == 20 )
  {
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 53, 0);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    v21 = 2343;
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
    goto LABEL_198;
  }
  v8 = v7 - 14;
  if ( !v8 )
  {
LABEL_25:
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 13, 0);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    v21 = 2324;
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
    goto LABEL_198;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_27:
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 14, 0);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    v21 = 2329;
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
    goto LABEL_198;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_8:
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 15, 0);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    v21 = 2334;
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
LABEL_198:
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      v21,
      0LL);
    return (unsigned int)v11;
  }
  v13 = v10 - 1;
  if ( !v13 )
  {
LABEL_21:
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 16, 0);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    v21 = 2339;
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
    goto LABEL_198;
  }
  if ( v13 != 2 )
  {
LABEL_193:
    v19 = 0;
    for ( i = &unk_1801B8928; *i != v3; i += 4 )
    {
      if ( (unsigned int)++v19 >= 0x5F )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
    }
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 5LL);
    v11 = -2147467259;
    v21 = 2680;
    goto LABEL_198;
  }
  v14 = Windows::UI::Composition::ExpressionAnimationBuilder::ApplySimpleOperation(this[11], 12, 0);
  v11 = v14;
  if ( v14 < 0 )
  {
    *((_DWORD *)this[12] + 251) = v4;
    *((_DWORD *)this[12] + 252) = v5;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v14,
      0x90Fu,
      0LL);
  }
  return (unsigned int)v11;
}
