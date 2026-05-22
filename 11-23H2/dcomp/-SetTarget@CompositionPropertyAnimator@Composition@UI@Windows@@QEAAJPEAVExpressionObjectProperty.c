/*
 * XREFs of ?SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x180191134
 * Callers:
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B730E (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z @ 0x18015ADBC (-OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@.c)
 *     GetExpressionTypeAsString @ 0x180162AFC (GetExpressionTypeAsString.c)
 *     ?SetTargetMask@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXPEAVSubchannelMaskInfo@@@Z @ 0x180191348 (-SetTargetMask@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXPEAVSubchannelMaskInfo@@.c)
 *     ?GetMaskedOutputType@SubchannelMaskInfo@@SA?AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z @ 0x1801B34E0 (-GetMaskedOutputType@SubchannelMaskInfo@@SA-AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::SetTarget(
        __int64 a1,
        int *a2,
        int a3,
        char *a4)
{
  _BYTE *v8; // rbx
  int *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rcx
  int MaskedOutputType; // eax
  const wchar_t *ExpressionTypeAsString; // rdi
  int v14; // ebx
  unsigned __int16 *ErrorContext; // rax
  int v16; // eax
  const unsigned __int16 *v17; // r8
  int v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+34h] [rbp-34h]
  int v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      162LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
      a4);
  v8 = a4 + 4;
  if ( a4 && *v8 )
  {
    v9 = (int *)(a1 + 168);
  }
  else
  {
    v9 = (int *)(a1 + 168);
    if ( a3 != *(_DWORD *)(a1 + 168) )
      goto LABEL_10;
  }
  if ( !a4 || (unsigned __int8)*v8 == (unsigned int)GetExpressionTypeChannelCount(*v9) )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      2,
      *a2);
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      3,
      (unsigned int)a2[1]);
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      1,
      1LL);
    Windows::UI::Composition::CompositionPropertyAnimator::SetTargetMask(
      (Windows::UI::Composition::CompositionPropertyAnimator *)a1,
      (struct SubchannelMaskInfo *)a4);
    *(_BYTE *)(a1 + 152) |= 1u;
    *(_DWORD *)(a1 + 172) = *a2;
    *(_DWORD *)(a1 + 176) = a2[1];
    *(_DWORD *)(a1 + 180) = a2[2];
    result = 0LL;
    *(_QWORD *)(a1 + 184) = a4;
    return result;
  }
LABEL_10:
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v18 = 12;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v18);
  if ( a4 )
    v11 = (unsigned __int8)*v8;
  else
    v11 = 0LL;
  MaskedOutputType = SubchannelMaskInfo::GetMaskedOutputType(v11, (unsigned int)*v9);
  ExpressionTypeAsString = GetExpressionTypeAsString(MaskedOutputType);
  v14 = (unsigned int)GetExpressionTypeAsString(a3);
  ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v18);
  v16 = StringCchPrintfW(ErrorContext, 120LL, L"%ws (output) vs %ws (target)", ExpressionTypeAsString);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      186LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
      (const char *)(unsigned int)v16,
      v14);
  Windows::UI::Composition::ExpressionAnimation::OriginateError(
    (struct Windows::UI::Composition::ExpressionErrorInfo *)&v18,
    0LL,
    v17);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBF,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
    (const char *)0x80070057LL);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v18);
  return 2147942487LL;
}
