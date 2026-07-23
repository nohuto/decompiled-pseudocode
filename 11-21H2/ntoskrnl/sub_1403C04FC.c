/*
 * XREFs of sub_1403C04FC @ 0x1403C04FC
 * Callers:
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C04FC(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 38992) = 531;
  *(_QWORD *)(a1 + 39024) = 0LL;
  *(_QWORD *)(a1 + 39016) = sub_140578DE0;
  *(_QWORD *)(a1 + 39048) = 0LL;
  *(_QWORD *)(a1 + 39008) = 0LL;
  result = *(_QWORD *)(a1 + 39048);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 38994) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
