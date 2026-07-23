/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x14075A850
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407F9CA0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     RtlUTF8ToUnicodeN @ 0x14075AA20 (RtlUTF8ToUnicodeN.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  _QWORD *v6; // rax
  ULONG v7; // edx
  __int16 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_1407CDA20(0LL) )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    _InterlockedOr(v12, 0);
    v6 = sub_140347DB0();
    v9 = v6[151];
    if ( *((_WORD *)v6 + 538) != v8 )
    {
      if ( !BytesInMultiByteString )
        goto LABEL_14;
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)MultiByteString;
        --BytesInMultiByteString;
        ++MultiByteString;
        if ( *(_WORD *)(v9 + 2 * v10) != v8 )
        {
          if ( !BytesInMultiByteString )
          {
            v7 += 2;
            goto LABEL_14;
          }
          --BytesInMultiByteString;
          ++MultiByteString;
        }
        v7 += 2;
        if ( !BytesInMultiByteString )
          goto LABEL_14;
      }
    }
    v7 = 2 * BytesInMultiByteString;
LABEL_14:
    *BytesInUnicodeString = v7;
  }
  return 0;
}
