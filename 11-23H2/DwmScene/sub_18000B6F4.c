/*
 * XREFs of sub_18000B6F4 @ 0x18000B6F4
 * Callers:
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x18000BF3A (_o__cexit.c)
 *     sub_18000CAAC @ 0x18000CAAC (sub_18000CAAC.c)
 */

__int64 sub_18000B6F4()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&xmmword_1801D3170);
  result = sub_18000CAAC();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
