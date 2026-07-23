/*
 * XREFs of InitializeSListHead @ 0x1402A05A0
 * Callers:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     sub_140251C60 @ 0x140251C60 (sub_140251C60.c)
 *     sub_140260D58 @ 0x140260D58 (sub_140260D58.c)
 *     sub_1402A03B0 @ 0x1402A03B0 (sub_1402A03B0.c)
 *     sub_14036FF40 @ 0x14036FF40 (sub_14036FF40.c)
 *     sub_1403B7358 @ 0x1403B7358 (sub_1403B7358.c)
 *     sub_1403B7B80 @ 0x1403B7B80 (sub_1403B7B80.c)
 *     sub_1403C4368 @ 0x1403C4368 (sub_1403C4368.c)
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     sub_14054560C @ 0x14054560C (sub_14054560C.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 *     sub_14081D9C8 @ 0x14081D9C8 (sub_14081D9C8.c)
 *     sub_140840FF8 @ 0x140840FF8 (sub_140840FF8.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_14084FC2C @ 0x14084FC2C (sub_14084FC2C.c)
 *     sub_140883718 @ 0x140883718 (sub_140883718.c)
 *     sub_1409B74BC @ 0x1409B74BC (sub_1409B74BC.c)
 *     sub_1409DAC68 @ 0x1409DAC68 (sub_1409DAC68.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409F1710 @ 0x1409F1710 (sub_1409F1710.c)
 *     sub_1409F17A4 @ 0x1409F17A4 (sub_1409F17A4.c)
 *     sub_140A485D4 @ 0x140A485D4 (sub_140A485D4.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 *     sub_140A8B104 @ 0x140A8B104 (sub_140A8B104.c)
 *     sub_140A9A2E8 @ 0x140A9A2E8 (sub_140A9A2E8.c)
 *     sub_140B2A068 @ 0x140B2A068 (sub_140B2A068.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
