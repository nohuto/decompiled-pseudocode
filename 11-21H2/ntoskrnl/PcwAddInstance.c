/*
 * XREFs of PcwAddInstance @ 0x1407E18E0
 * Callers:
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_14092EB58 @ 0x14092EB58 (sub_14092EB58.c)
 *     sub_14092EC30 @ 0x14092EC30 (sub_14092EC30.c)
 *     sub_140960D50 @ 0x140960D50 (sub_140960D50.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 *     sub_140990360 @ 0x140990360 (sub_140990360.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_140A36BE0 @ 0x140A36BE0 (sub_140A36BE0.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A029F8 @ 0x140A029F8 (sub_140A029F8.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  NTSTATUS v7; // ebx

  if ( !sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D3B080) )
    return sub_140A029F8();
  v7 = sub_14042A5E0(Buffer, Name);
  sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D3B080);
  return v7;
}
