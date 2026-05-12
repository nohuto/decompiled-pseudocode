/*
 * XREFs of sub_1C006F380 @ 0x1C006F380
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C006F380(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 >= 8 )
  {
    memset_0(a2, 0, a3);
    *a2 = ((__int64)*(unsigned int *)(a1 + 744) >> 1) & 0x7FFFFFFF;
    result = *(_QWORD *)(a1 + 744) / 0x100000000LL;
    a2[1] = result;
  }
  return result;
}
