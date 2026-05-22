/*
 * XREFs of ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18007B700
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z @ 0x180059178 (-ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEAAJPEFBUToken@ExpressionAnimationParser@Composition@UI@Windows@@I@Z @ 0x180073264 (-AddMultipleAndSet@-$DynArray@UToken@ExpressionAnimationParser@Composition@UI@Windows@@$0A@@@QEA.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessArgumentSeperatorToken(
        Windows::UI::Composition::ExpressionAnimationParser *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  signed int v13; // eax
  int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  while ( 1 )
  {
    if ( !*((_DWORD *)this + 20) )
    {
      Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 2LL);
      v15 = 1977;
      goto LABEL_26;
    }
    v2 = (_QWORD *)((char *)this + 56);
    v3 = *((_DWORD *)this + 20);
    if ( !v3 )
      ModuleFailFastForHRESULT(2147946717LL, retaddr);
    v4 = v3 - 1;
    v5 = *v2 + 12 * v4;
    if ( *(_DWORD *)v5 == 11 )
      break;
    v13 = Windows::UI::Composition::ExpressionAnimationParser::ApplyOperationToken(
            (Windows::UI::Composition::ExpressionAnimationBuilder **)this,
            (const struct Windows::UI::Composition::ExpressionAnimationParser::Token *)v5,
            0);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v13,
        0x7A9u,
        0LL);
      return v11;
    }
    v14 = *((_DWORD *)this + 20);
    if ( v14 )
      *((_DWORD *)this + 20) = v14 - 1;
    else
      DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  v6 = *(_DWORD *)(v5 + 8);
  v16 = *(_QWORD *)v5;
  v17 = v6;
  if ( (unsigned int)v4 >= v3 )
    DoStackCaptureDirect(-2147024809, 0x19Cu);
  else
    *((_DWORD *)this + 20) = v3 - 1;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_23;
  v7 = *((_DWORD *)this + 20);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147946717LL, retaddr);
  if ( (*(_DWORD *)(*v2 + 12LL * (unsigned int)(v7 - 1)) & 0xFFFFFF00) == 0x100 )
  {
    v8 = DynArray<Windows::UI::Composition::ExpressionAnimationParser::Token,0>::AddMultipleAndSet(
           (__int64 *)this + 7,
           &v16);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    if ( *((_DWORD *)this + 12) )
    {
      v9 = *((_QWORD *)this + 3);
      v10 = *(_DWORD *)(v9 + 4LL * (unsigned int)(*((_DWORD *)this + 12) - 1));
      if ( v10 )
      {
        *(_DWORD *)(v9 + 4LL * (unsigned int)(*((_DWORD *)this + 12) - 1)) = v10 + 1;
        ++*((_DWORD *)this + 4);
        return 0;
      }
    }
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 16LL);
    v15 = 1991;
  }
  else
  {
LABEL_23:
    Windows::UI::Composition::ExpressionAnimationParser::SetParseError(this, 8LL);
    v15 = 1948;
  }
LABEL_26:
  v11 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    0x80004005,
    v15,
    0LL);
  return v11;
}
