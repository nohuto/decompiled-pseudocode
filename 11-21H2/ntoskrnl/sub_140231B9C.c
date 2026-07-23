/*
 * XREFs of sub_140231B9C @ 0x140231B9C
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 * Callees:
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 */

__int64 __fastcall sub_140231B9C(ULONG_PTR a1)
{
  __int64 result; // rax

  sub_14033FAA4(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = *(_QWORD *)(a1 + 16);
  if ( (result & 0x400) == 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
