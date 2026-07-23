/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x14032BCE0
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041A2A4 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     PopUmpoProcessMessages @ 0x1407A6B38 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084C740 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14032BD40 (AlpcGetHeaderSize.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *RequiredBufferSize = HeaderSize;
  if ( HeaderSize > BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->ValidAttributes = 0;
    Buffer->AllocatedAttributes = AttributeFlags;
  }
  return 0;
}
