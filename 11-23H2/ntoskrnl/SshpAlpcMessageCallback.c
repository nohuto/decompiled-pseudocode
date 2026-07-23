/*
 * XREFs of SshpAlpcMessageCallback @ 0x14084C740
 * Callers:
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     AlpcGetMessageAttribute @ 0x14032BCA0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14032BCE0 (AlpcInitializeMessageAttribute.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C270 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C87C (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _ALPC_MESSAGE_ATTRIBUTES *ReceiveMessageAttributes; // rbx
  _PORT_MESSAGE *ReceiveMessage; // rdi
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG_PTR BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessageAttributes = (_ALPC_MESSAGE_ATTRIBUTES *)ExAllocatePool2(256LL, 160LL, 1885893491LL);
  if ( ReceiveMessageAttributes )
  {
    ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(256LL, 64LL, 1885893491LL);
    if ( ReceiveMessage )
    {
      memset(ReceiveMessageAttributes, 0, 0xA0uLL);
      memset(ReceiveMessage, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
      while ( 1 )
      {
        BufferLength = 64LL;
        if ( ZwAlpcSendWaitReceivePort(
               SshpAlpcContext,
               0,
               0LL,
               0LL,
               ReceiveMessage,
               &BufferLength,
               ReceiveMessageAttributes,
               &Timeout) )
        {
          break;
        }
        MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(ReceiveMessageAttributes, 0x20000000u);
        SshpAlpcProcessAlpcMessage(ReceiveMessage, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
        Timeout.QuadPart = 0LL;
      }
      CmpFreeTransientPoolWithTag(ReceiveMessage, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(ReceiveMessageAttributes, 0x70687373u);
  }
}
