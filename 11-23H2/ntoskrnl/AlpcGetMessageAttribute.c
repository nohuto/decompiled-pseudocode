/*
 * XREFs of AlpcGetMessageAttribute @ 0x14032BA10
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 *     PopUmpoProcessMessages @ 0x1407A6948 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084C440 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14032BAB0 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
