/*
 * XREFs of sub_1C00220D8 @ 0x1C00220D8
 * Callers:
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C00ACDF4 @ 0x1C00ACDF4 (sub_1C00ACDF4.c)
 * Callees:
 *     sub_1C0019680 @ 0x1C0019680 (sub_1C0019680.c)
 *     sub_1C002212C @ 0x1C002212C (sub_1C002212C.c)
 */

__int64 __fastcall sub_1C00220D8(__int64 a1)
{
  _BYTE *v2; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 3488) = _InterlockedIncrement(&dword_1C0093B6C);
  v2 = *(_BYTE **)(a1 + 104);
  if ( v2 && (*v2 & 0x1F) == 1 )
    sub_1C0019680(a1, 1u, 1u);
  sub_1C002212C(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
