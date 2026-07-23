/*
 * XREFs of ResFwFindMessage @ 0x140AEE06C
 * Callers:
 *     BcpFindMessage @ 0x140B9D35C (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140755AA0 (RtlFindMessage.c)
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
