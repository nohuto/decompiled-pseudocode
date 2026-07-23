/*
 * XREFs of sub_14081AE90 @ 0x14081AE90
 * Callers:
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14036A210 (AlpcInitializeMessageAttribute.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14081AE90(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
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
               qword_140C1C1E0,
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
        sub_14081AFCC(ReceiveMessage, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
        Timeout.QuadPart = 0LL;
      }
      sub_140346D64(ReceiveMessage, 0x70687373u);
    }
    sub_140346D64(ReceiveMessageAttributes, 0x70687373u);
  }
}
