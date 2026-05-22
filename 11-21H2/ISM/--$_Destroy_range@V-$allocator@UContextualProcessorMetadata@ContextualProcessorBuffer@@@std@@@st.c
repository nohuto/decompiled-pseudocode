/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801A0A10
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$92 @ 0x1800548C0 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_1800548C0.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801A10E4 (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@U.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A1AA4 (--1-$_Uninitialized_backout_al@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuff.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A1ACC (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x1801A1B8C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801A1CF0 (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a2)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v3);
      v3 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v3 + 224);
    }
    while ( v3 != a2 );
  }
}
