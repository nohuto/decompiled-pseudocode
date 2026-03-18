/*
 * XREFs of ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0010554
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C00503FC (FxIoTargetFormatIo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestContext::FormatWriteParams(
        FxRequestContext *this,
        IFxMemory *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  unsigned __int64 BufferOffset; // rbx

  BufferOffset = 0LL;
  this->m_CompletionParams.Type = WdfRequestTypeWrite;
  if ( WriteMemory )
    this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)WriteMemory->GetHandle(WriteMemory);
  if ( WriteOffsets )
    BufferOffset = WriteOffsets->BufferOffset;
  this->m_CompletionParams.Parameters.Write.Offset = BufferOffset;
}
