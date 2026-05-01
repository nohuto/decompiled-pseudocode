/*
 * XREFs of sub_18000701C @ 0x18000701C
 * Callers:
 *     sub_180006F94 @ 0x180006F94 (sub_180006F94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000701C(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) == 0 )
  {
    *(_DWORD *)(a1 + 64) = result | 1;
    return TpPostWork(*(_QWORD *)(a1 + 56));
  }
  return result;
}
