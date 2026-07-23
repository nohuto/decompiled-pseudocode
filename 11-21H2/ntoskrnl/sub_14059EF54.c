/*
 * XREFs of sub_14059EF54 @ 0x14059EF54
 * Callers:
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 * Callees:
 *     sub_14059F4C4 @ 0x14059F4C4 (sub_14059F4C4.c)
 */

__int64 __fastcall sub_14059EF54(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 == 0x8000000000000000uLL || (v5 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 8) += 4096LL, v3 >= v5 - 1) )
  {
    result = sub_14059F4C4(a1, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 32));
    if ( (int)result >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 != 0x8000000000000000uLL )
      {
        *a2 = v7;
        return 0LL;
      }
      result = 3221227273LL;
    }
    *a2 = -1LL;
    return result;
  }
  *(_QWORD *)(a1 + 16) = v3 + 1;
  *a2 = v3 + 1;
  return 0LL;
}
