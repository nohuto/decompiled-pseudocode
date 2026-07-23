/*
 * XREFs of sub_1403BB500 @ 0x1403BB500
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BB500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  sub_1403AEF08(0xD2u, (int)sub_140305670, 13, a4, -3LL);
  v5 = qword_140C4E4B0;
  result = *(unsigned int *)(qword_140C4E4B0 + 224);
  if ( (result & 1) != 0 )
  {
    result = sub_1403AEF08(0xD1u, (int)sub_140303240, 13, v4, -3LL);
    if ( (*(_DWORD *)(v5 + 224) & 0x800) != 0 )
    {
      v7 = sub_140303720(v5);
      result = sub_14042A5E0(v7, 209LL);
    }
  }
  v8 = qword_140C4E4C8;
  if ( qword_140C4E4C8 )
  {
    result = *(unsigned int *)(qword_140C4E4C8 + 224);
    if ( (result & 1) != 0 )
    {
      result = sub_1403AEF08(0xD3u, (int)sub_140521AC0, 13, v4, -3LL);
      if ( (*(_DWORD *)(v8 + 224) & 0x800) != 0 )
      {
        v9 = sub_140303720(v8);
        return sub_14042A5E0(v9, 211LL);
      }
    }
  }
  return result;
}
