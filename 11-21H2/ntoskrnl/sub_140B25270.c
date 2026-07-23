/*
 * XREFs of sub_140B25270 @ 0x140B25270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

void __fastcall sub_140B25270(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  __int64 v7; // rdx

  sub_1402D2774(&stru_140012E98, (unsigned __int16 *)(a5 + 8));
  v7 = *a3;
  if ( *((_DWORD *)qword_140B57890 + v7) > *((_DWORD *)qword_140B57890 + *a4) )
    *a4 = v7;
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 2));
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 14));
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 10));
}
