/*
 * XREFs of sub_18010471A @ 0x18010471A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012B58 @ 0x180012B58 (sub_180012B58.c)
 */

__int64 __fastcall sub_18010471A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180012B58(*(_QWORD *)(a2 + 112));
  }
  return result;
}
