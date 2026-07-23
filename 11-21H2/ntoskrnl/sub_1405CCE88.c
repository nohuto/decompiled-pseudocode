/*
 * XREFs of sub_1405CCE88 @ 0x1405CCE88
 * Callers:
 *     sub_140395BDC @ 0x140395BDC (sub_140395BDC.c)
 *     sub_1405CCECC @ 0x1405CCECC (sub_1405CCECC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405CCE88(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 result; // rax

  v1 = 5LL;
  a1[4] += a1[16];
  a1[5] += a1[17];
  v2 = a1 + 6;
  do
  {
    *v2 += v2[12];
    result = v2[17];
    v2[5] += result;
    ++v2;
    --v1;
  }
  while ( v1 );
  return result;
}
