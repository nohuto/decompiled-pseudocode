/*
 * XREFs of sub_140AAE860 @ 0x140AAE860
 * Callers:
 *     sub_140B56094 @ 0x140B56094 (sub_140B56094.c)
 * Callees:
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 */

BYTE *__fastcall sub_140AAE860(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140C0E048
    && *(_QWORD *)qword_140C0E048
    && RtlFindMessage(*(PVOID *)qword_140C0E048, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
