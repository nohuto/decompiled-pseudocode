/*
 * XREFs of ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Top@?$DynStack@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEBAAEAUToken@ExpressionAnimationParser@Composition@UI@Windows@@XZ @ 0x18003D074 (-Top@-$DynStack@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEBAAEAUToken@Exp.c)
 *     ??$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAnimation@234@@wil@@YA?AV?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@AEAPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003D434 (--$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAni.c)
 *     ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560 (-Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV-$basic_string_view@GU-$char_tra.c)
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z @ 0x180058C48 (-GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ??1?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@QEAA@XZ @ 0x180197470 (--1-$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U-$default_delete@VExpressio.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessConditionalToken(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        __int64 a2)
{
  int v2; // r13d
  unsigned int Precedence; // r12d
  unsigned int v5; // edi
  __int64 v6; // r11
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r10d
  int v10; // ecx
  unsigned int v11; // r9d
  int v12; // r14d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  char *v15; // r14
  __int64 v16; // rcx
  Windows::UI::Composition::ExpressionAnimationBuilder *v17; // r15
  __int64 v18; // r12
  Windows::UI::Composition::ExpressionAnimationBuilder *v19; // r15
  Windows::UI::Composition::ExpressionAnimationBuilder *v20; // rcx
  int v21; // r12d
  int v22; // eax
  Windows::UI::Composition::ExpressionAnimationParser *v24; // rax
  const struct Windows::UI::Composition::ExpressionAnimationParser::Token *v25; // rcx
  int v26; // eax
  unsigned int v27; // r14d
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  Windows::UI::Composition::ExpressionAnimationBuilder *v35; // [rsp+90h] [rbp+40h] BYREF
  __int64 v36; // [rsp+98h] [rbp+48h]
  struct Windows::UI::Composition::ExpressionAnimationBuilder *v37; // [rsp+A0h] [rbp+50h] BYREF
  struct Windows::UI::Composition::ExpressionAnimationBuilder *v38; // [rsp+A8h] [rbp+58h]

  v36 = a2;
  v2 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v2 + 1;
  if ( (unsigned __int64)(unsigned int)(v2 + 1) >= *((_QWORD *)this + 1) )
  {
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 8LL);
    v29 = 1564LL;
    v5 = -2147024809;
    goto LABEL_37;
  }
  Precedence = Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(this, (enum TOKEN_TYPE)306);
  v5 = -2147024809;
  while ( *((_DWORD *)this + 20) )
  {
    v24 = (Windows::UI::Composition::ExpressionAnimationParser *)DynStack<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::Top((__int64)this + 56);
    if ( Precedence > Windows::UI::Composition::ExpressionAnimationParser::GetPrecedence(v24, *(enum TOKEN_TYPE *)v24) )
      break;
    v26 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(this, v25, 0);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x632,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimationparser.cpp",
        (const char *)(unsigned int)v26);
      return v27;
    }
    v28 = *((_DWORD *)this + 20);
    if ( v28 )
      *((_DWORD *)this + 20) = v28 - 1;
    else
      DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  v6 = *((unsigned int *)this + 4);
  v7 = 1;
  v8 = *((_DWORD *)this + 4);
  do
  {
    if ( (unsigned __int64)v8 >= *((_QWORD *)this + 1) )
    {
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 8LL);
      v29 = 1635LL;
      goto LABEL_37;
    }
    if ( *(_WORD *)(*(_QWORD *)this + 2LL * v8) == 58 )
    {
      --v7;
    }
    else if ( *(_WORD *)(*(_QWORD *)this + 2LL * v8) == 63 )
    {
      ++v7;
    }
    *((_DWORD *)this + 4) = ++v8;
    v9 = v8;
  }
  while ( v7 > 0 );
  v10 = 1;
  v11 = v8;
  do
  {
    v12 = v10;
    v13 = v11;
    if ( (unsigned __int64)v11 >= *((_QWORD *)this + 1) )
      break;
    switch ( *(_WORD *)(*(_QWORD *)this + 2LL * v11) )
    {
      case '(':
        goto LABEL_30;
      case ')':
        goto LABEL_29;
      case ',':
        v10 = 0;
        if ( v12 != 1 )
          v10 = v12;
        break;
      case ':':
LABEL_29:
        --v10;
        break;
      case '?':
LABEL_30:
        ++v10;
        break;
    }
    *((_DWORD *)this + 4) = ++v11;
    v13 = v11;
  }
  while ( v10 > 0 );
  if ( !v10 )
  {
    *((_DWORD *)this + 4) = --v13;
LABEL_20:
    v14 = *(_QWORD *)this;
    v15 = (char *)this + 96;
    v16 = *(_QWORD *)this + 2 * v6;
    v32[1] = v9 - (unsigned int)v6 - 1;
    v32[0] = v16;
    v33[0] = v14 + 2LL * v9;
    v33[1] = v13 - v9;
    wil::make_unique_failfast<Windows::UI::Composition::ExpressionAnimationBuilder,Windows::UI::Composition::ExpressionAnimation * &>(
      &v35,
      (char *)this + 96);
    v17 = v35;
    v38 = v35;
    Windows::UI::Composition::ExpressionAnimationBuilder::Reset(v35);
    v18 = v36;
    Windows::UI::Composition::ExpressionAnimationParser::Parse(
      (unsigned int)v32,
      *((_QWORD *)this + 12),
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 14),
      v36,
      v17);
    if ( *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6BE,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimationparser.cpp",
        (const char *)0x80070057LL);
    }
    else
    {
      wil::make_unique_failfast<Windows::UI::Composition::ExpressionAnimationBuilder,Windows::UI::Composition::ExpressionAnimation * &>(
        &v37,
        (char *)this + 96);
      v19 = v37;
      Windows::UI::Composition::ExpressionAnimationBuilder::Reset(v37);
      Windows::UI::Composition::ExpressionAnimationParser::Parse(
        (unsigned int)v33,
        *(_QWORD *)v15,
        *((_QWORD *)this + 13),
        *((_QWORD *)this + 14),
        v18,
        v19);
      if ( *(_DWORD *)(*(_QWORD *)v15 + 1000LL) )
      {
        v30 = 2147942487LL;
        v31 = 1737LL;
      }
      else
      {
        v20 = (Windows::UI::Composition::ExpressionAnimationBuilder *)*((_QWORD *)this + 11);
        v21 = *((_DWORD *)this + 4);
        v37 = 0LL;
        v35 = 0LL;
        v22 = Windows::UI::Composition::ExpressionAnimationBuilder::Conditional(v20, v38, v19);
        v5 = v22;
        if ( v22 >= 0 )
          return 0LL;
        v30 = (unsigned int)v22;
        v31 = 1743LL;
        *(_DWORD *)(*(_QWORD *)v15 + 1004LL) = v2;
        *(_DWORD *)(*(_QWORD *)v15 + 1008LL) = v21;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimationparser.cpp",
        (const char *)v30);
      wistd::unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>::~unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>(&v37);
    }
    wistd::unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>::~unique_ptr<Windows::UI::Composition::ExpressionAnimationBuilder,wistd::default_delete<Windows::UI::Composition::ExpressionAnimationBuilder>>(&v35);
    return v5;
  }
  if ( v10 == 1 )
    goto LABEL_20;
  Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 8LL);
  v29 = 1698LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimationparser.cpp",
    (const char *)0x80070057LL);
  return v5;
}
