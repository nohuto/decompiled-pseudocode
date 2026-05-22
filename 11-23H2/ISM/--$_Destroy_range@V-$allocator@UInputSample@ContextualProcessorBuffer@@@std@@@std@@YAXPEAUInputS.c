/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801BEAFC
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$16 @ 0x1801BED1C (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1801BED1C.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801BF220 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801BF9A4 (--1-$_Uninitialized_backout_al@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@.c)
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801BFA18 (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x1801BFA78 (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1801C2598 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x1801C262C (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 * Callees:
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801BFDDC (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
        ContextualProcessorBuffer::InputSample *this,
        ContextualProcessorBuffer::InputSample *a2)
{
  ContextualProcessorBuffer::InputSample *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::InputSample::~InputSample(v3);
      v3 = (ContextualProcessorBuffer::InputSample *)((char *)v3 + 208);
    }
    while ( v3 != a2 );
  }
}
