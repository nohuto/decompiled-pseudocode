/*
 * XREFs of ?SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAU6@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@@Z @ 0x180169470
 * Callers:
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z @ 0x18015ADBC (-OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@.c)
 *     ??1ExpressionErrorInfo@Composition@UI@Windows@@QEAA@XZ @ 0x1801676F8 (--1ExpressionErrorInfo@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C (-ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCom.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::SplitTargetPropertyNameAndMask(
        Windows::UI::Composition::AnimationBindingManager *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        HSTRING a3,
        HSTRING *a4,
        struct ExpressionObjectPropertyInfo *a5,
        enum DCOMPOSITION_EXPRESSION_TYPE *a6,
        struct SubchannelMaskInfo **a7)
{
  wchar_t *StringRawBuffer; // rax
  const unsigned __int16 *v11; // r8
  enum DCOMPOSITION_EXPRESSION_TYPE *v13; // rcx
  struct SubchannelMaskInfo *v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  Windows::UI::Composition::AnimationBindingManager *v21; // [rsp+80h] [rbp+10h] BYREF

  v21 = this;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  v16 = 1;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v16);
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 0x2FFFFFFFFLL;
  v14 = 0LL;
  LODWORD(v21) = 18;
  Windows::UI::Composition::ExpressionAnimationParser::ParseTargetProperty(
    a3,
    a2,
    (struct Windows::UI::Composition::ExpressionErrorInfo *)&v16,
    (struct ExpressionObjectPropertyInfo *)&v15,
    (enum DCOMPOSITION_EXPRESSION_TYPE *)&v21,
    &v14,
    a4);
  if ( v16 )
  {
    StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(a3, 0LL);
    Windows::UI::Composition::ExpressionAnimation::OriginateError(
      (struct Windows::UI::Composition::ExpressionErrorInfo *)&v16,
      StringRawBuffer,
      v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationbindingmanager.cpp",
      (const char *)0x80070057LL);
    Windows::UI::Composition::ExpressionErrorInfo::~ExpressionErrorInfo((Windows::UI::Composition::ExpressionErrorInfo *)&v16);
    return 2147942487LL;
  }
  else
  {
    v13 = a6;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_OWORD *)a5 = v15;
    *(_DWORD *)v13 = (_DWORD)v21;
    *a7 = v14;
    Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v16);
    return 0LL;
  }
}
