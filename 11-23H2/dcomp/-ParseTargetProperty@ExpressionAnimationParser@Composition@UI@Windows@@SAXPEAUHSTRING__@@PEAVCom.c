/*
 * XREFs of ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C
 * Callers:
 *     ?SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAU6@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@@Z @ 0x180169470 (-SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyOb.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 * Callees:
 *     ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z @ 0x18004C330 (-ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?ParsePropertyName@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEAUHSTRING__@@W4AnimationBindingDirection@234@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAH@Z @ 0x1801974E8 (-ParsePropertyName@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEAUHSTRING__@@W4Animati.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationParser::ParseTargetProperty(
        HSTRING string,
        struct Windows::UI::Composition::CompositionObject *a2,
        struct Windows::UI::Composition::ExpressionErrorInfo *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5,
        struct SubchannelMaskInfo **a6,
        HSTRING *newString)
{
  int *v7; // r15
  struct SubchannelMaskInfo *v8; // rsi
  __int64 v11; // rdi
  const unsigned __int16 *StringRawBuffer; // rsi
  void *v13; // rdi
  int v14; // eax
  HRESULT v15; // eax
  struct SubchannelMaskInfo **v16; // rax
  unsigned int v17; // [rsp+40h] [rbp-10h] BYREF
  void *v18; // [rsp+48h] [rbp-8h] BYREF
  UINT32 length; // [rsp+80h] [rbp+30h] BYREF

  v7 = (int *)a5;
  v8 = 0LL;
  v17 = 0;
  v18 = 0LL;
  Windows::UI::Composition::ExpressionAnimationParser::ParsePropertyName(
    string,
    2,
    (__int64)a2,
    a3,
    (__int64)a4,
    (__int64)a5,
    (int *)&length);
  if ( *(_DWORD *)a3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      0x80070057,
      0xB4Cu,
      0LL);
    return;
  }
  v11 = (int)length;
  if ( (int)length <= -1 )
    goto LABEL_10;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  Windows::UI::Composition::ExpressionAnimationParser::ParseSwizzle(
    &StringRawBuffer[v11 + 1],
    length - v11,
    *v7,
    0,
    (__int64)a3,
    &v18,
    &v17);
  if ( !*(_DWORD *)a3 )
  {
    v14 = length - v11 - 1;
    if ( v14 != v17 )
    {
      *((_DWORD *)a3 + 2) = v17;
      *(_DWORD *)a3 = 17;
      *((_DWORD *)a3 + 1) = v14;
      Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(a3, StringRawBuffer);
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        0x80070057,
        0xB78u,
        0LL);
      goto LABEL_6;
    }
    v8 = (struct SubchannelMaskInfo *)v18;
LABEL_10:
    if ( newString )
    {
      if ( (int)v11 <= -1 )
        v15 = WindowsDuplicateString(string, newString);
      else
        v15 = WindowsSubstringWithSpecifiedLength(string, 0, v11, newString);
      if ( v15 < 0 )
        Microsoft::WRL2::FailFast::OutOfMemory();
    }
    v16 = a6;
    v13 = 0LL;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *v16 = v8;
    Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext(a3);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    0x80070057,
    0xB63u,
    0LL);
LABEL_6:
  v13 = v18;
LABEL_17:
  if ( v13 )
    operator delete(v13);
}
