/*
 * XREFs of ?Remove@?$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z @ 0x180163468
 * Callers:
 *     ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C (-PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4.c)
 *     ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z @ 0x18003E940 (-AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUEx.c)
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNode@@@Z @ 0x180162AC8 (-DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNo.c)
 *     ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4 (-PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<ExpressionNode *,0>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
