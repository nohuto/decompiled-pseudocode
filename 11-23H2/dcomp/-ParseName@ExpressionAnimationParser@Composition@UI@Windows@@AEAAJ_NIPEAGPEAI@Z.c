/*
 * XREFs of ?ParseName@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NIPEAGPEAI@Z @ 0x180057660
 * Callers:
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ParseName(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        char a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rax
  char v6; // bp
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned __int16 *ErrorContext; // rax
  unsigned int v17; // [rsp+20h] [rbp-38h]

  v5 = *((unsigned int *)this + 4);
  v6 = 0;
  v9 = 0;
  if ( v5 < *((_QWORD *)this + 1) )
  {
    v10 = a3 - 1;
    while ( 1 )
    {
      v11 = *(_WORD *)(*(_QWORD *)this + 2LL * (unsigned int)v5);
      if ( v11 >= 0x41u )
      {
        v12 = a3 - 1;
        if ( v11 <= 0x5Au )
          break;
      }
      v12 = a3 - 1;
      if ( v11 < 0x61u )
      {
        if ( v11 == 95 )
          break;
        if ( (unsigned __int16)(v11 - 48) <= 9u )
        {
          if ( !v9 )
          {
            v17 = 2776;
            goto LABEL_29;
          }
          if ( v9 >= v10 )
          {
            v17 = 2770;
            goto LABEL_29;
          }
          goto LABEL_8;
        }
      }
      else if ( v11 <= 0x7Au )
      {
        break;
      }
      if ( !a2 || v11 != 46 )
      {
LABEL_13:
        if ( !v9 )
          goto LABEL_28;
        v13 = 0;
        goto LABEL_15;
      }
      if ( v9 >= v10 )
      {
        v17 = 2789;
        goto LABEL_29;
      }
      v11 = 46;
LABEL_8:
      a4[v9++] = v11;
      LODWORD(v5) = *((_DWORD *)this + 4) + 1;
      *((_DWORD *)this + 4) = v5;
      if ( (unsigned __int64)(unsigned int)v5 >= *((_QWORD *)this + 1) )
        goto LABEL_13;
    }
    if ( v9 >= v12 )
    {
      v17 = 2746;
      goto LABEL_29;
    }
    goto LABEL_8;
  }
LABEL_28:
  v6 = 1;
  v17 = 2824;
  *(_DWORD *)Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(*((_QWORD *)this + 12) + 1000LL)) = *(unsigned __int16 *)(*(_QWORD *)this + 2LL * *((unsigned int *)this + 4));
LABEL_29:
  v13 = -2147467259;
  *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 6;
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    -2147467259,
    v17,
    0LL);
LABEL_15:
  a4[v9] = 0;
  v14 = *((_QWORD *)this + 12);
  *a5 = v9;
  if ( *(_DWORD *)(v14 + 1000) )
  {
    *(_DWORD *)(v14 + 1004) = *((_DWORD *)this + 4);
    *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = *((_DWORD *)this + 4) + 1;
    if ( !v6 )
    {
      ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(*((_QWORD *)this + 12) + 1000LL));
      _o_wcscpy_s(ErrorContext, 120LL, a4);
    }
  }
  return v13;
}
