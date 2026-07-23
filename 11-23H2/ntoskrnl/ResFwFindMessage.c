/*
 * XREFs of ResFwFindMessage @ 0x140AED0A8
 * Callers:
 *     BcpFindMessage @ 0x140B9C35C (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140755780 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140C0E568
    && *(_QWORD *)qword_140C0E568
    && RtlFindMessage(*(PVOID *)qword_140C0E568, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
