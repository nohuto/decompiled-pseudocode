/*
 * XREFs of RtlInitCodePageTable @ 0x1800F0300
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800B0A42 (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  wchar_t *v2; // r10
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  USHORT *v6; // rax
  USHORT *v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // ax

  v2 = 0LL;
  if ( !TableBase || TableBase[1] == 0xFDE9 )
  {
    *CodePageTable = Utf8TableInfo;
  }
  else
  {
    v4 = *TableBase;
    v5 = *TableBase + TableBase[v4];
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    v6 = &TableBase[v4 + 1];
    v7 = v6 + 256;
    CodePageTable->MultiByteTable = v6;
    v8 = v6[256] != 0 ? 0x200 : 0;
    if ( *(USHORT *)((char *)v6 + v8 + 514) )
    {
      v9 = 1;
      v2 = (USHORT *)((char *)v7 + v8 + 4);
    }
    else
    {
      v9 = 0;
    }
    CodePageTable->DBCSOffsets = v2;
    CodePageTable->DBCSCodePage = v9;
    CodePageTable->WideCharTable = &TableBase[v5 + 1];
    CodePageTable->CodePage = TableBase[1];
  }
}
