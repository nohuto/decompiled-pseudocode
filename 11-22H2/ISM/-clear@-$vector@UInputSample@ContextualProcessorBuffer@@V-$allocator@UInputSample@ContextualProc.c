/*
 * XREFs of ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x1801CFE9C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801CC36C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

ContextualProcessorBuffer::InputSample *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::clear(
        ContextualProcessorBuffer::InputSample **a1)
{
  ContextualProcessorBuffer::InputSample *result; // rax

  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
