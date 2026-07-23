/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x140759990
 * Callers:
 *     toupper @ 0x1403E30E0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B58B0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     sub_1402D7D00 @ 0x1402D7D00 (sub_1402D7D00.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14045EDD4 @ 0x14045EDD4 (sub_14045EDD4.c)
 *     sub_1405E4598 @ 0x1405E4598 (sub_1405E4598.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  _QWORD *v11; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)sub_1407CDA20(0LL) )
    return sub_1405E4598(MultiByteString, MaxBytesInMultiByteString, BytesInMultiByteString, (__int64)UnicodeString, v6);
  _InterlockedOr(v12, 0);
  v11 = sub_140347DB0();
  if ( *((_WORD *)v11 + 538) )
    return sub_14045EDD4(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  else
    return sub_1402D7D00(
             (__int64)MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6,
             v11[138],
             v11[137]);
}
