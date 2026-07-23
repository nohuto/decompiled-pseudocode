/*
 * XREFs of sub_140391998 @ 0x140391998
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140391998(char a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( a1 )
  {
    qword_140C4E488 = qword_140C4E4C0;
    result = qword_140C4E3F8;
  }
  else
  {
    if ( qword_140C4E488 != qword_140C4E390 )
    {
      v2 = sub_140303720(qword_140C4E488);
      sub_14042A5E0(v2, v3);
    }
    result = qword_140C4E488;
    qword_140C4E488 = 0LL;
  }
  qword_140C4E4C0 = result;
  return result;
}
