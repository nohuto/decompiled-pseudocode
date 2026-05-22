/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801BFA18
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$2 @ 0x18006FC2F (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801BEAFC (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        __int64 a1)
{
  ContextualProcessorBuffer::InputSample *v2; // rcx

  v2 = *(ContextualProcessorBuffer::InputSample **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      v2,
      *(ContextualProcessorBuffer::InputSample **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
