/*
 * XREFs of sub_18010D2FE @ 0x18010D2FE
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 */

__int64 __fastcall sub_18010D2FE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180011570(a2 + 56);
  }
  return result;
}
