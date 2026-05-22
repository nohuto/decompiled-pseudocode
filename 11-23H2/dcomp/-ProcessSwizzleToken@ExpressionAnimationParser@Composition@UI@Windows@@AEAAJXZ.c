/*
 * XREFs of ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668
 * Callers:
 *     ?ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180056BC0 (-ParseAndProcessTokens@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_ma.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@XZ @ 0x18003E768 (-GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA-AW4DCOMPOSITION_EXPRESSIO.c)
 *     ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784 (-Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z @ 0x18004C330 (-ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     GetExpressionTypeAsString @ 0x180162AFC (GetExpressionTypeAsString.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessSwizzleToken(
        Windows::UI::Composition::ExpressionAnimationParser *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned int OutputType; // r12d
  __int64 v5; // r14
  struct SubchannelMaskInfo *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // rax
  char v11; // r8
  unsigned int v12; // esi
  __int64 ExpressionTypeAsString; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int16 *ErrorContext; // rax
  int v18; // [rsp+70h] [rbp+8h] BYREF
  struct SubchannelMaskInfo *v19; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0;
  v2 = *((_QWORD *)this + 11);
  v19 = 0LL;
  OutputType = Windows::UI::Composition::ExpressionAnimationBuilder::GetOutputType(v2);
  v5 = (unsigned int)(*((_DWORD *)this + 4) + 1);
  *((_DWORD *)this + 4) = v5;
  if ( (unsigned __int64)(unsigned int)v5 >= *((_QWORD *)this + 1) )
  {
    v8 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) = 17;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024809,
      0x5AEu,
      0LL);
  }
  else
  {
    LOBYTE(v3) = 1;
    Windows::UI::Composition::ExpressionAnimationParser::ParseSwizzle(
      *(_QWORD *)this + 2 * v5,
      (unsigned int)(*((_DWORD *)this + 2) - v5),
      OutputType,
      v3,
      *((_QWORD *)this + 12) + 1000LL,
      &v19,
      &v18);
    v6 = v19;
    if ( *(_DWORD *)(*((_QWORD *)this + 12) + 1000LL) )
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147024809,
        0x5BDu,
        0LL);
    }
    else
    {
      v7 = Windows::UI::Composition::ExpressionAnimationBuilder::Swizzle(
             *((Windows::UI::Composition::ExpressionAnimationBuilder **)this + 11),
             v19);
      v8 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v7,
          0x5C5u,
          0LL);
      else
        *((_DWORD *)this + 4) += v18;
    }
    if ( v6 )
      operator delete(v6, 8uLL);
  }
  v9 = *((_QWORD *)this + 12);
  if ( *(_DWORD *)(v9 + 1000) )
  {
    v11 = 0;
    *(_DWORD *)(v9 + 1004) = v5;
    v12 = v5;
    while ( (unsigned __int64)v12 < *((_QWORD *)this + 1) )
    {
      if ( v11 )
        break;
      if ( *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 32
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 33
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 42
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 43
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 45
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 47
        || *(_WORD *)(*(_QWORD *)this + 2LL * v12) == 60
        || (unsigned int)*(unsigned __int16 *)(*(_QWORD *)this + 2LL * v12) - 61 < 2 )
      {
        v11 = 1;
      }
      else
      {
        ++v12;
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 12) + 1008LL) = v12;
    ExpressionTypeAsString = GetExpressionTypeAsString(OutputType);
    v14 = *((_QWORD *)this + 12);
    v15 = ExpressionTypeAsString;
    v16 = *(_QWORD *)this + 2LL * *(unsigned int *)(v14 + 1004);
    ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(v14 + 1000));
    StringCchPrintfW(ErrorContext, 120LL, L"%.*ws <%ws>", v12 - (unsigned int)v5, v16, v15);
  }
  return v8;
}
