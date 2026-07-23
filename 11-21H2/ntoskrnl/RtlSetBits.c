/*
 * XREFs of RtlSetBits @ 0x1402E4C80
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     sub_140246CCC @ 0x140246CCC (sub_140246CCC.c)
 *     sub_1402482BC @ 0x1402482BC (sub_1402482BC.c)
 *     sub_140250D70 @ 0x140250D70 (sub_140250D70.c)
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_140386D24 @ 0x140386D24 (sub_140386D24.c)
 *     sub_140389840 @ 0x140389840 (sub_140389840.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140530540 @ 0x140530540 (sub_140530540.c)
 *     sub_140533520 @ 0x140533520 (sub_140533520.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_14059BFB0 @ 0x14059BFB0 (sub_14059BFB0.c)
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_1407607D8 @ 0x1407607D8 (sub_1407607D8.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 *     sub_14079C0D4 @ 0x14079C0D4 (sub_14079C0D4.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_14079C578 @ 0x14079C578 (sub_14079C578.c)
 *     sub_14079C640 @ 0x14079C640 (sub_14079C640.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_1409098C0 @ 0x1409098C0 (sub_1409098C0.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140925A18 @ 0x140925A18 (sub_140925A18.c)
 *     sub_140972A10 @ 0x140972A10 (sub_140972A10.c)
 *     sub_140A4F990 @ 0x140A4F990 (sub_140A4F990.c)
 *     sub_140A4F9D8 @ 0x140A4F9D8 (sub_140A4F9D8.c)
 *     sub_140A4FAC4 @ 0x140A4FAC4 (sub_140A4FAC4.c)
 *     sub_140A50B90 @ 0x140A50B90 (sub_140A50B90.c)
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 *     sub_140A870B0 @ 0x140A870B0 (sub_140A870B0.c)
 *     sub_140B07614 @ 0x140B07614 (sub_140B07614.c)
 *     sub_140B1AC34 @ 0x140B1AC34 (sub_140B1AC34.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_140018DF0[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140015C40[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018DF0[v6];
      goto LABEL_4;
    }
  }
}
