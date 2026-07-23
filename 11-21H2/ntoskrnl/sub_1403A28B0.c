/*
 * XREFs of sub_1403A28B0 @ 0x1403A28B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 */

__int64 __fastcall sub_1403A28B0(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    v2 = 0;
  else
    v2 = (unsigned __int16)sub_1403A34E0();
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 20) = sub_1403A2F5C(a1);
  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
    *(_WORD *)(a1 + 58) = sub_1403A2F5C(a1);
  *(_DWORD *)(a1 + 40) += v2;
  result = 0xFFFFLL;
  if ( *(_DWORD *)(a1 + 20) == 0xFFFF && *(_WORD *)(a1 + 58) == 0xFFFF )
    dword_140C548D0 = 1;
  return result;
}
