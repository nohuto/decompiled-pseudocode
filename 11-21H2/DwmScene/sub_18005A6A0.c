/*
 * XREFs of sub_18005A6A0 @ 0x18005A6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 */

__int64 __fastcall sub_18005A6A0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18005E3D8();
  return result;
}
