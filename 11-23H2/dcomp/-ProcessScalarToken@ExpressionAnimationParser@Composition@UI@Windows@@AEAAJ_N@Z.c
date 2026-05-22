/*
 * XREFs of ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z @ 0x18003EBFC
 * Callers:
 *     ?ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z @ 0x18003CDAC (-ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z.c)
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z @ 0x18003EDCC (-PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180095C88 (__report_rangecheckfailure.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessScalarToken(
        Windows::UI::Composition::ExpressionAnimationParser *this,
        char a2)
{
  unsigned __int64 v2; // r15
  char v5; // r11
  char v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // r12
  unsigned int v9; // edx
  unsigned int v10; // r14d
  unsigned int v11; // edi
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  float v15; // xmm1_4
  int v16; // edi
  int v17; // r9d
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbx
  unsigned __int16 *ErrorContext; // rax
  wchar_t String[40]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *((unsigned int *)this + 4);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v2 >= *((_QWORD *)this + 1) )
    return 0;
  v8 = *(_QWORD *)this;
  v9 = *((_DWORD *)this + 4);
  while ( 1 )
  {
    v10 = v9;
    v11 = *(unsigned __int16 *)(v8 + 2LL * v9);
    if ( v11 > 0x46 )
      break;
    if ( v11 == 70 )
      goto LABEL_29;
    if ( v11 > 0x34 )
    {
      if ( v11 != 53 )
      {
        v13 = v11 - 54;
        v12 = v11 == 54;
LABEL_9:
        if ( !v12 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 - 1 >= 2 )
              goto LABEL_12;
          }
        }
      }
LABEL_19:
      if ( v7 >= 0x27 )
      {
        v17 = -2147467259;
        v16 = -2147467259;
        *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 7;
        v20 = 645;
        goto LABEL_37;
      }
      v6 = 1;
      goto LABEL_21;
    }
    if ( v11 == 52 )
      goto LABEL_19;
    if ( v11 != 46 )
    {
      v13 = v11 - 48;
      v12 = v11 == 48;
      goto LABEL_9;
    }
    if ( v5 )
    {
      v10 = v9 + 1;
      v17 = -2147467259;
      v16 = -2147467259;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 6;
      v20 = 583;
      goto LABEL_37;
    }
    if ( v7 >= 0x27 )
    {
      v17 = -2147467259;
      v16 = -2147467259;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 7;
      v20 = 571;
LABEL_37:
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v17,
        v20,
        0LL);
      *(_DWORD *)(*((_QWORD *)this + 12) + 1004LL) = v2;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v10;
      v21 = *(_QWORD *)this + 2 * v2;
      ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(*((_QWORD *)this + 12) + 1000LL));
      _o_wcsncpy_s(ErrorContext, 120LL, v21, v10 - (unsigned int)v2);
      return (unsigned int)v16;
    }
    v5 = 1;
LABEL_21:
    v19 = v7++;
    String[v19] = v11;
    v9 = *((_DWORD *)this + 4) + 1;
    *((_DWORD *)this + 4) = v9;
    if ( (unsigned __int64)v9 >= *((_QWORD *)this + 1) )
      goto LABEL_12;
  }
  if ( v11 == 102 )
  {
LABEL_29:
    if ( !v6 )
    {
      v17 = -2147467259;
      v10 = v9 + 1;
      v16 = -2147467259;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 6;
      v20 = 616;
      goto LABEL_37;
    }
    *((_DWORD *)this + 4) = v9 + 1;
  }
LABEL_12:
  if ( v7 )
  {
    if ( 2 * (unsigned __int64)v7 >= 0x50 )
      _report_rangecheckfailure();
    String[v7] = 0;
    v15 = _wtof(String);
    if ( a2 )
      LODWORD(v15) ^= _xmm;
    v16 = Windows::UI::Composition::ExpressionAnimationBuilder::PushConstant(
            *((Windows::UI::Composition::ExpressionAnimationBuilder **)this + 11),
            v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      v20 = 671;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1004LL) = v2;
      *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v10;
      goto LABEL_37;
    }
  }
  return 0;
}
