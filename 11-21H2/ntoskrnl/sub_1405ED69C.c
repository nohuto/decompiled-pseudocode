/*
 * XREFs of sub_1405ED69C @ 0x1405ED69C
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405ED69C(__int64 a1)
{
  _WORD *v1; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) -= 2LL;
  v1 = *(_WORD **)(a1 + 40);
  if ( (unsigned __int16)(*v1 + 9215) <= 0x3FDu )
    *(_QWORD *)(a1 + 40) = v1 - 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 24) - 2LL;
  result = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 72) = 0;
  return result;
}
