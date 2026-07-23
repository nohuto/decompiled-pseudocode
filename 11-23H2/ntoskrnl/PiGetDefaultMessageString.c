/*
 * XREFs of PiGetDefaultMessageString @ 0x140848E70
 * Callers:
 *     PiNormalizeDeviceText @ 0x1408710F8 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlInitUTF8String @ 0x1405A7BD0 (RtlInitUTF8String.c)
 *     IopReferenceDriverObjectByName @ 0x14068C668 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     RtlFindMessage @ 0x140755780 (RtlFindMessage.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1407FB330 (RtlCreateUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C2530 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  PVOID *v6; // rdi
  NTSTATUS DriverNameFromKeyNode; // ebx
  PVOID *v8; // rax
  WORD Flags; // ax
  BYTE *Text; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *Pool2; // rax
  _WORD *v15; // r14
  NTSTATUS v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+A8h] [rbp+48h] BYREF

  MessageEntry = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (PVOID *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[3], 0xBu, 0, MessageId, &MessageEntry);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      Flags = MessageEntry->Flags;
      Text = MessageEntry->Text;
      if ( (Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)Text) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (Flags & 2) != 0 )
        {
          SourceString = 0LL;
          RtlInitUTF8String(&SourceString, (PCSZ)Text);
          v17 = RtlUTF8StringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)Text);
          v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        DriverNameFromKeyNode = v17;
        if ( v17 < 0 )
          goto LABEL_11;
      }
      Length = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
      {
        *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
        Length -= 4;
        UnicodeString.Length = Length;
      }
      v13 = Length;
      Pool2 = (_WORD *)ExAllocatePool2(256LL, Length + 2LL, 538996816LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Buffer, (unsigned int)v13);
        *a3 = v15;
        v15[v13 >> 1] = 0;
        DriverNameFromKeyNode = 0;
        goto LABEL_11;
      }
      goto LABEL_14;
    }
    DriverNameFromKeyNode = -1073741823;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
