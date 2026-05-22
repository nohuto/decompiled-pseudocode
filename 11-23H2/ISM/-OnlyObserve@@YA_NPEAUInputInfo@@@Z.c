/*
 * XREFs of ?OnlyObserve@@YA_NPEAUInputInfo@@@Z @ 0x1801C1B40
 * Callers:
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801C0928 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801C1B68 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     <none>
 */

bool __fastcall OnlyObserve(struct InputInfo *a1)
{
  if ( (*(_DWORD *)a1 & 0x100003B) != 0 )
    return *((_BYTE *)a1 + 314);
  if ( *(_DWORD *)a1 == 4096 )
    return *((_BYTE *)a1 + 125);
  return 0;
}
