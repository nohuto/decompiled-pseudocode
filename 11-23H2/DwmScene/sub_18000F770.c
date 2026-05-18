/*
 * XREFs of sub_18000F770 @ 0x18000F770
 * Callers:
 *     sub_18000EAD0 @ 0x18000EAD0 (sub_18000EAD0.c)
 *     sub_18000F6C8 @ 0x18000F6C8 (sub_18000F6C8.c)
 * Callees:
 *     sub_18000C0C8 @ 0x18000C0C8 (sub_18000C0C8.c)
 */

__int64 __fastcall sub_18000F770(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a2 - 1;
  v4 = 0;
  v5 = sub_18000C0C8();
  if ( v5 < 0 || v5 > v2 )
  {
    *(_WORD *)(a1 + 2 * v2) = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v5 == v2 )
  {
    *(_WORD *)(a1 + 2 * v2) = 0;
  }
  return v4;
}
