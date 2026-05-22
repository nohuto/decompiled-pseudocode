/*
 * XREFs of ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x1801D0B5C
 * Callers:
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801CE198 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CEF50 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CF3D8 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___ @ 0x1801D0150 (std--call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___.c)
 */

struct InfoMetadata *__fastcall InfoMetadata::Get(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  struct InfoMetadata *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___(a1, a2);
  result = InfoMetadata::s_instanceInfoMetadata;
  if ( !InfoMetadata::s_instanceInfoMetadata )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
      v2);
  return result;
}
