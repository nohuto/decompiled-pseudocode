/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140759C40
 * Callers:
 *     sub_1402D9DB4 @ 0x1402D9DB4 (sub_1402D9DB4.c)
 *     sub_14061BBF0 @ 0x14061BBF0 (sub_14061BBF0.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     sub_140759410 @ 0x140759410 (sub_140759410.c)
 *     sub_140759A80 @ 0x140759A80 (sub_140759A80.c)
 *     sub_14075AF34 @ 0x14075AF34 (sub_14075AF34.c)
 *     sub_14075B0E4 @ 0x14075B0E4 (sub_14075B0E4.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_140836EAC @ 0x140836EAC (sub_140836EAC.c)
 *     sub_140964D68 @ 0x140964D68 (sub_140964D68.c)
 *     sub_140A00DB0 @ 0x140A00DB0 (sub_140A00DB0.c)
 *     sub_140A01700 @ 0x140A01700 (sub_140A01700.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140A94030 @ 0x140A94030 (sub_140A94030.c)
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlUnicodeToMultiByteSize @ 0x140759DB0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x140759E60 (RtlUnicodeToCustomCPN.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r12
  NTSTATUS v7; // ebx
  ULONG v8; // esi
  char *v10; // rax
  ULONG MaximumLength; // eax
  ULONG BytesInUnicodeString; // r14d
  wchar_t *UnicodeString; // r15
  int v14; // esi
  char *Buffer; // r13
  _CPTABLEINFO *v16; // rax
  unsigned __int16 v17; // dx
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  int v19; // [rsp+30h] [rbp-48h]
  ULONG v20; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v21; // [rsp+90h] [rbp+18h]
  ULONG BytesInCustomCPString; // [rsp+98h] [rbp+20h] BYREF

  v21 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  v20 = 0;
  RtlUnicodeToMultiByteSize(&v20, SourceString->Buffer, SourceString->Length);
  v8 = v20 + 1;
  BytesInCustomCPString = v20 + 1;
  if ( v20 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    v10 = (char *)sub_1406BE560(v8);
    DestinationString->Buffer = v10;
    if ( !v10 )
      return -1073741801;
    DestinationString->MaximumLength = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v19 = 0;
  BytesInUnicodeString = SourceString->Length;
  UnicodeString = SourceString->Buffer;
  v14 = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  if ( (unsigned __int8)sub_1407CDA20(0LL) )
  {
    v16 = &CustomCP;
  }
  else
  {
    _InterlockedOr(v18, 0);
    v16 = (_CPTABLEINFO *)((char *)sub_140347DB0() + 1064);
  }
  RtlUnicodeToCustomCPN(v16, Buffer, v14 - 1, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
  v19 = 0;
  v17 = BytesInCustomCPString;
  DestinationString->Buffer[BytesInCustomCPString] = 0;
  DestinationString->Length = v17;
  if ( v6 )
    return -2147483643;
  return v7;
}
