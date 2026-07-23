/*
 * XREFs of sub_140A9FE30 @ 0x140A9FE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A938A4 @ 0x140A938A4 (sub_140A938A4.c)
 */

__int64 __fastcall sub_140A9FE30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_14042A5E0(a1, a2);
  if ( result )
    return sub_140A938A4(result, a1);
  return result;
}
