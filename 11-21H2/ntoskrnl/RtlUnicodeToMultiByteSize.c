/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x140759DB0
 * Callers:
 *     wcstombs @ 0x1403E35A0 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _QWORD *v6; // rax
  ULONG v7; // edx
  ULONG v8; // ebx
  __int64 v9; // r8
  __int16 v10; // r9
  __int64 v11; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_1407CDA20(0LL) )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    _InterlockedOr(v13, 0);
    v6 = sub_140347DB0();
    v8 = BytesInUnicodeString >> 1;
    v9 = v6[138];
    if ( *((_WORD *)v6 + 538) == v10 )
    {
      v7 = v8;
    }
    else
    {
      for ( ; v8; --v8 )
      {
        v11 = *UnicodeString++;
        v7 += (HIBYTE(*(_WORD *)(v9 + 2 * v11)) != 0) + 1;
      }
    }
    *BytesInMultiByteString = v7;
  }
  return 0;
}
