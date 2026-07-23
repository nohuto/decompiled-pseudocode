/*
 * XREFs of sub_14025E708 @ 0x14025E708
 * Callers:
 *     sub_1403C1E60 @ 0x1403C1E60 (sub_1403C1E60.c)
 *     sub_140419B58 @ 0x140419B58 (sub_140419B58.c)
 * Callees:
 *     <none>
 */

__int64 sub_14025E708()
{
  __int64 result; // rax

  if ( byte_140D068E3 )
  {
    result = 1LL;
    __writemsr(0x17D4u, 1uLL);
  }
  return result;
}
