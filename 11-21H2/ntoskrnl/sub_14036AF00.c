/*
 * XREFs of sub_14036AF00 @ 0x14036AF00
 * Callers:
 *     sub_14036ABA8 @ 0x14036ABA8 (sub_14036ABA8.c)
 *     sub_140398C28 @ 0x140398C28 (sub_140398C28.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     sub_1407EFDC8 @ 0x1407EFDC8 (sub_1407EFDC8.c)
 *     sub_1407F01CC @ 0x1407F01CC (sub_1407F01CC.c)
 *     sub_1407FE938 @ 0x1407FE938 (sub_1407FE938.c)
 *     sub_1408600E4 @ 0x1408600E4 (sub_1408600E4.c)
 *     sub_140862DB0 @ 0x140862DB0 (sub_140862DB0.c)
 *     sub_140989DD4 @ 0x140989DD4 (sub_140989DD4.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 *     sub_1407F02A8 @ 0x1407F02A8 (sub_1407F02A8.c)
 *     sub_1407F02CC @ 0x1407F02CC (sub_1407F02CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14036AF00(void *Src, size_t Size, char a3)
{
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-D8h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-C8h] BYREF

  BufferLength[0] = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(256LL, 4096LL, 1869638997LL);
  if ( !ReceiveMessage )
    return (unsigned int)-1073741670;
  sub_1407F02CC(0LL);
  if ( PortHandle )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(&ReceiveMessage->u2, 0, 0xFFCuLL);
    ReceiveMessage->u1.s1.DataLength = Size;
    ReceiveMessage->u1.s1.TotalLength = Size + 40;
    memmove(&ReceiveMessage[1], Src, Size);
    if ( a3 )
    {
      memset(Buffer, 0, sizeof(Buffer));
      BufferLength[0] = 4096LL;
      v8 = ZwAlpcSendWaitReceivePort(
             PortHandle,
             0x20000u,
             ReceiveMessage,
             0LL,
             ReceiveMessage,
             BufferLength,
             Buffer,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
      v7 = sub_1407EFC00(ReceiveMessage, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PortHandle, 0x10000u, ReceiveMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  sub_1407F02A8();
  ExFreePoolWithTag(ReceiveMessage, 0);
  return (unsigned int)v8;
}
