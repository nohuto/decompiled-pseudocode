/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800FC1D8
 * Callers:
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800FCDF4 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18016D2B0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801CE198 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CEF50 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        __int64 a1,
        int *a2,
        __int64 a3,
        const char *a4)
{
  size_t v6; // rbp
  void *v7; // rax
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  v6 = a2[6];
  if ( v6 < 0x20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      a4);
  v7 = operator new[](a2[6]);
  v8 = *(void **)a1;
  *(_QWORD *)a1 = v7;
  if ( v8 )
    operator delete[](v8);
  *(_DWORD *)(a1 + 8) = v6;
  memcpy_0(*(void **)a1, a2, v6);
  return a1;
}
