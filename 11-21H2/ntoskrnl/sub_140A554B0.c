/*
 * XREFs of sub_140A554B0 @ 0x140A554B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BBA90 @ 0x1403BBA90 (sub_1403BBA90.c)
 *     sub_140AF8A58 @ 0x140AF8A58 (sub_140AF8A58.c)
 *     sub_140AF8ACC @ 0x140AF8ACC (sub_140AF8ACC.c)
 *     sub_140AF8B84 @ 0x140AF8B84 (sub_140AF8B84.c)
 *     sub_140AF8BF8 @ 0x140AF8BF8 (sub_140AF8BF8.c)
 *     sub_140AF9204 @ 0x140AF9204 (sub_140AF9204.c)
 */

__int64 __fastcall sub_140A554B0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  switch ( a1 )
  {
    case 7:
      qword_140C4BF38 = a3;
      sub_140AF9204(a3);
      return v3;
    case 12:
      sub_1403BBA90();
      return v3;
    case 17:
      sub_140AF8BF8(a3);
      return v3;
  }
  if ( a1 != 23 )
  {
    if ( a1 != 28 )
      return v3;
    return (unsigned int)sub_140AF8A58();
  }
  result = sub_140AF8ACC();
  if ( (int)result >= 0 )
    return (unsigned int)sub_140AF8B84();
  return result;
}
