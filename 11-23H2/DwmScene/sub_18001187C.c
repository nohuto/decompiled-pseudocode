/*
 * XREFs of sub_18001187C @ 0x18001187C
 * Callers:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 *     sub_18001CC60 @ 0x18001CC60 (sub_18001CC60.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001E2E0 @ 0x18001E2E0 (sub_18001E2E0.c)
 *     sub_18001ED20 @ 0x18001ED20 (sub_18001ED20.c)
 *     sub_18002F71C @ 0x18002F71C (sub_18002F71C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18001187C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 0xF;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
