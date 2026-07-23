/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1407598D0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E7B60 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     sub_1402D7D00 @ 0x1402D7D00 (sub_1402D7D00.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14045EDD4 @ 0x14045EDD4 (sub_14045EDD4.c)
 *     sub_1405E4598 @ 0x1405E4598 (sub_1405E4598.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  CHAR *v5; // r14
  ULONG v6; // ebx
  _QWORD *v11; // rax
  __int16 v12; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = OemString;
  LOBYTE(OemString) = 1;
  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)sub_1407CDA20(OemString) )
    return sub_1405E4598(v5, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  _InterlockedOr(v13, 0);
  v11 = sub_140347DB0();
  if ( *((_WORD *)v11 + 570) == v12 )
    return sub_1402D7D00(
             (__int64)v5,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6,
             v11[146],
             v11[145]);
  else
    return sub_14045EDD4(v5, MaxBytesInOemString, BytesInOemString, (unsigned __int16 *)UnicodeString, v6);
}
