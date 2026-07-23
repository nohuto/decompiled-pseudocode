/*
 * XREFs of sub_1403CFCF0 @ 0x1403CFCF0
 * Callers:
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403CFCF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 112);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
