/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEAAJPEFBUToken@ExpressionAnimationParser@Composition@UI@Windows@@I@Z @ 0x180073264
 * Callers:
 *     ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003CF94 (-ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 *     ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z @ 0x18005A068 (-ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@.c)
 *     ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18007B700 (-ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::AddMultipleAndSet(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  int v16; // ecx
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 6);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    v15 = 181;
    v16 = -2147024362;
    goto LABEL_9;
  }
  v6 = 0;
  if ( v5 > *((_DWORD *)a1 + 5) )
  {
    v17 = a2;
    v11 = DynArrayImpl<0>::Grow((_DWORD)a1, 12, 1, 0, (__int64)&v17);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v12 = *a1;
      v13 = v17;
      v14 = (unsigned int)(12 * *((_DWORD *)a1 + 6));
      *(_QWORD *)(v14 + v12) = *v17;
      *(_DWORD *)(v14 + v12 + 8) = *((_DWORD *)v13 + 2);
      ++*((_DWORD *)a1 + 6);
      return v6;
    }
    v15 = 192;
    v16 = v11;
LABEL_9:
    DoStackCaptureDirect(v16, v15);
    return v6;
  }
  v7 = *a2;
  v8 = 3 * v2;
  v9 = *a1;
  *(_QWORD *)(v9 + 4 * v8) = v7;
  *(_DWORD *)(v9 + 4 * v8 + 8) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 6) = v5;
  return v6;
}
