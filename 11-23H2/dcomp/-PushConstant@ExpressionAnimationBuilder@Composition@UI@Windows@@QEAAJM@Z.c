/*
 * XREFs of ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z @ 0x18003EDCC
 * Callers:
 *     ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z @ 0x18003EBFC (-ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z.c)
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 * Callees:
 *     ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z @ 0x18003F434 (-AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PushConstant(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        float a2)
{
  char v2; // bp
  int v4; // esi
  unsigned int v6; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_DWORD *)this >= 0x50u )
  {
    v4 = -2147024809;
    v6 = 1180;
  }
  else
  {
    v2 = 1;
    *((_DWORD *)this + (unsigned int)(*(_DWORD *)this)++ + 66) = 18;
    v4 = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateNodeInBuffer(this, 1LL, &v7);
    if ( v4 >= 0 )
    {
      v4 = 0;
      *(float *)(v7 + 4) = a2;
      return (unsigned int)v4;
    }
    v6 = 1188;
  }
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v4, v6, 0LL);
  if ( v2 && *(_DWORD *)this )
    --*(_DWORD *)this;
  return (unsigned int)v4;
}
