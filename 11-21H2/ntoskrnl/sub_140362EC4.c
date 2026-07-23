/*
 * XREFs of sub_140362EC4 @ 0x140362EC4
 * Callers:
 *     sub_140362C48 @ 0x140362C48 (sub_140362C48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140362EC4(unsigned int a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  if ( a1 >= 0xF0000 )
    a1 = 983040;
  _BitScanReverse(&a1, a1 - 1);
  v1 = a1 + 1;
  if ( v1 <= 7 )
  {
    return 7;
  }
  else
  {
    result = 18LL;
    if ( v1 >= 0x12 )
      return result;
  }
  return v1;
}
