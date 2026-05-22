/*
 * XREFs of ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z @ 0x180163208
 * Callers:
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 * Callees:
 *     ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918 (-PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMP.c)
 *     ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z @ 0x18003F434 (-AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PushConstant(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        char a2)
{
  char v4; // bp
  __int64 v5; // rcx
  signed int NodeInBuffer; // ebx
  unsigned int v7; // eax
  _BYTE *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  NodeInBuffer = Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(this, 17);
  if ( NodeInBuffer < 0 )
  {
    v7 = 1129;
  }
  else
  {
    v4 = 1;
    NodeInBuffer = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateNodeInBuffer(v5, 0, (void **)&v9);
    if ( NodeInBuffer >= 0 )
    {
      NodeInBuffer = 0;
      v9[4] = a2;
      return (unsigned int)NodeInBuffer;
    }
    v7 = 1137;
  }
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, NodeInBuffer, v7, 0LL);
  if ( v4 && *(_DWORD *)this )
    --*(_DWORD *)this;
  return (unsigned int)NodeInBuffer;
}
