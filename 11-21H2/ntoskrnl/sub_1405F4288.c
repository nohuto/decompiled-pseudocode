/*
 * XREFs of sub_1405F4288 @ 0x1405F4288
 * Callers:
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 */

_BYTE *__fastcall sub_1405F4288(PACL Acl)
{
  _BYTE *result; // rax
  ULONG Index; // [rsp+38h] [rbp+10h] BYREF

  Index = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(Acl, 0x13u, &Index);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
