/*
 * XREFs of AlpcGetMessageAttribute @ 0x14032B830
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 *     PopUmpoProcessMessages @ 0x1407A6E58 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084D6A0 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14032B8D0 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
