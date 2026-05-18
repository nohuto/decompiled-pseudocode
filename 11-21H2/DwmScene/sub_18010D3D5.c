/*
 * XREFs of sub_18010D3D5 @ 0x18010D3D5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 */

__int64 __fastcall sub_18010D3D5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180011570(a2 + 72);
  }
  return result;
}
