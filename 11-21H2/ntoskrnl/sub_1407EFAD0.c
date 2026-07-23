/*
 * XREFs of sub_1407EFAD0 @ 0x1407EFAD0
 * Callers:
 *     sub_14036A1B0 @ 0x14036A1B0 (sub_14036A1B0.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14036A210 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 *     sub_140993610 @ 0x140993610 (sub_140993610.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1407EFAD0()
{
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v1; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+58h] [rbp-B0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+68h] [rbp-A0h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(256LL, 4096LL, 1869638997LL);
  if ( !ReceiveMessage )
  {
    v1 = -1073741670;
LABEL_7:
    sub_140993610((unsigned int)v1);
    return;
  }
  memset(Buffer, 0, sizeof(Buffer));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, Buffer, 0xA0uLL, RequiredBufferSize);
    BufferLength = 4096LL;
    v1 = ZwAlpcSendWaitReceivePort(ConnectionPortHandle, 0, 0LL, 0LL, ReceiveMessage, &BufferLength, Buffer, &Timeout);
    if ( v1 )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
    sub_1407EFC00(ReceiveMessage, MessageAttribute);
  }
  ExFreePoolWithTag(ReceiveMessage, 0);
  if ( v1 < 0 )
    goto LABEL_7;
}
