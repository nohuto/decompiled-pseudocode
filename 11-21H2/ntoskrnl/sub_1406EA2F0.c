/*
 * XREFs of sub_1406EA2F0 @ 0x1406EA2F0
 * Callers:
 *     sub_14020B1F8 @ 0x14020B1F8 (sub_14020B1F8.c)
 * Callees:
 *     sub_14083D5F4 @ 0x14083D5F4 (sub_14083D5F4.c)
 */

int __fastcall sub_1406EA2F0(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 160);
  if ( (result & 0x800000) != 0 )
  {
    if ( (result & 0x20000) != 0 )
    {
      sub_14083D5F4(a1 + 224);
      result = *(_DWORD *)(a1 + 160);
    }
    result &= ~0x800000u;
    *(_DWORD *)(a1 + 160) = result;
  }
  return result;
}
