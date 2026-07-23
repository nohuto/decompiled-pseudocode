/*
 * XREFs of sub_1407099A4 @ 0x1407099A4
 * Callers:
 *     sub_1406D8E14 @ 0x1406D8E14 (sub_1406D8E14.c)
 *     sub_1407096A4 @ 0x1407096A4 (sub_1407096A4.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 * Callees:
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 */

__int64 __fastcall sub_1407099A4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx

  *a3 = 0LL;
  if ( (_DWORD)a1 )
  {
    v3 = 6224LL;
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (_DWORD)a1 )
      {
        case 5:
          v3 = 12312LL;
          break;
        case 6:
          v3 = 14416LL;
          break;
        case 1:
          v3 = 1200LL;
          break;
        case 2:
          v3 = 2040LL;
          break;
      }
    }
  }
  else
  {
    v3 = 2000LL;
  }
  return sub_140709A08(a1, (v3 + 4095) & 0xFFFFF000LL);
}
