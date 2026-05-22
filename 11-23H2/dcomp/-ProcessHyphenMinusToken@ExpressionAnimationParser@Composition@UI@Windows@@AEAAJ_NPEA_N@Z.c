/*
 * XREFs of ?ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z @ 0x18003CDAC
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z @ 0x18003EBFC (-ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z @ 0x18005A068 (-ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessHyphenMinusToken(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        char a2,
        bool *a3)
{
  unsigned int v3; // ebp
  bool v4; // di
  unsigned int v7; // r15d
  __int64 v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  v7 = v3 + 1;
  if ( a2 )
  {
    *((_DWORD *)this + 4) = v7;
    if ( (unsigned __int64)v7 < *((_QWORD *)this + 1) )
    {
      v8 = *(_QWORD *)this;
      v9 = v3 + 1;
      while ( 1 )
      {
        v10 = v9;
        v11 = *(unsigned __int16 *)(v8 + 2LL * v9);
        if ( v11 > 0x31 )
        {
          v12 = v11 - 50;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    v17 = v16 - 1;
                    if ( v17 )
                    {
                      if ( v17 - 1 >= 2 )
                        goto LABEL_12;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_19;
        }
        if ( v11 == 49 )
          goto LABEL_19;
        v21 = v11 - 9;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 19;
                  if ( v26 )
                    break;
                }
              }
            }
          }
        }
        v9 = v10 + 1;
        *((_DWORD *)this + 4) = v10 + 1;
        if ( (unsigned __int64)(v10 + 1) >= *((_QWORD *)this + 1) )
          goto LABEL_12;
      }
      v27 = v26 - 14;
      if ( v27 && v27 != 2 )
        goto LABEL_12;
LABEL_19:
      v20 = Windows::UI::Composition::ExpressionAnimationParser::ProcessScalarToken(this, 1);
      v18 = v20;
      if ( v20 >= 0 )
        goto LABEL_14;
      v28 = 1139;
      goto LABEL_33;
    }
LABEL_12:
    v18 = Windows::UI::Composition::ExpressionAnimationParser::ProcessOperatorToken(
            this,
            TokenImpersonation|TokenPrimary|0x10,
            v3);
    if ( (v18 & 0x80000000) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)this + 12) + 1004LL) = v3;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v7;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v18,
        0x481u,
        0LL);
      return v18;
    }
  }
  else
  {
    v20 = Windows::UI::Composition::ExpressionAnimationParser::ProcessOperatorToken(this, (enum TOKEN_TYPE)15, v3);
    v18 = v20;
    if ( v20 < 0 )
    {
      v28 = 1165;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v20,
        v28,
        0LL);
      return v18;
    }
  }
  v4 = 1;
LABEL_14:
  *a3 = v4;
  return v18;
}
