/*
 * XREFs of sub_14059A640 @ 0x14059A640
 * Callers:
 *     sub_14098259C @ 0x14098259C (sub_14098259C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14059A640(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *a1 && a1[1] )
  {
    if ( a1[2] )
      return a1[3] != 0LL;
  }
  return result;
}
