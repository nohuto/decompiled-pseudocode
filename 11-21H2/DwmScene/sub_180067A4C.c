/*
 * XREFs of sub_180067A4C @ 0x180067A4C
 * Callers:
 *     sub_180103AC2 @ 0x180103AC2 (sub_180103AC2.c)
 * Callees:
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 */

__int64 __fastcall sub_180067A4C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18005470C(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
