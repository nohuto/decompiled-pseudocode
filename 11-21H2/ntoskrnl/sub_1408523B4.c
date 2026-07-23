/*
 * XREFs of sub_1408523B4 @ 0x1408523B4
 * Callers:
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlInitUTF8String @ 0x1405E4060 (RtlInitUTF8String.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14067BCBC @ 0x14067BCBC (sub_14067BCBC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BEC80 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408523B4(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  PVOID *v6; // rdi
  NTSTATUS Message; // ebx
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
  Message = sub_14067B694(KeyHandle, &DestinationString);
  if ( Message >= 0 )
  {
    v8 = (PVOID *)sub_14067BCBC(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      Message = RtlFindMessage(v8[3], 0xBu, 0, MessageId, &MessageEntry);
      if ( Message < 0 )
        goto LABEL_11;
      Flags = MessageEntry->Flags;
      Text = MessageEntry->Text;
      if ( (Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)Text) )
        {
LABEL_14:
          Message = -1073741670;
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
        Message = v17;
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
        Message = 0;
        goto LABEL_11;
      }
      goto LABEL_14;
    }
    Message = -1073741823;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)Message;
}
