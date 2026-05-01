/*
 * XREFs of sub_18001AD80 @ 0x18001AD80
 * Callers:
 *     sub_18001AF10 @ 0x18001AF10 (sub_18001AF10.c)
 * Callees:
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 */

__int64 __fastcall sub_18001AD80(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return sub_18001BC10(2 * v1);
  return result;
}
