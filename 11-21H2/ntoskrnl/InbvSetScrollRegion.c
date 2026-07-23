/*
 * XREFs of InbvSetScrollRegion @ 0x140550D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall InbvSetScrollRegion(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 72);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
