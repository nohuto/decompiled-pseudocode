/*
 * XREFs of sub_1800E8533 @ 0x1800E8533
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800124EC @ 0x1800124EC (sub_1800124EC.c)
 */

__int64 __fastcall sub_1800E8533(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_1800124EC();
  }
  return result;
}
