/*
 * XREFs of sub_1C001DFB4 @ 0x1C001DFB4
 * Callers:
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 * Callees:
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 *     sub_1C0058AEC @ 0x1C0058AEC (sub_1C0058AEC.c)
 */

__int64 __fastcall sub_1C001DFB4(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 + 640;
  while ( 1 )
  {
    result = sub_1C0022A14(v2);
    if ( !result )
      break;
    sub_1C0058AEC(a1, 8LL, result);
  }
  return result;
}
