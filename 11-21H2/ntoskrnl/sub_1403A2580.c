/*
 * XREFs of sub_1403A2580 @ 0x1403A2580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 */

__int64 __fastcall sub_1403A2580(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 20) = ((__int64 (*)(void))sub_1403A2F5C)();
  *(_WORD *)(a1 + 58) = sub_1403A2F5C(a1);
  *(_DWORD *)(a1 + 16) = sub_1403A2F5C(a1);
  result = 0xFFFFLL;
  if ( *(_DWORD *)(a1 + 20) == 0xFFFF && *(_WORD *)(a1 + 58) == 0xFFFF )
    dword_140C548D0 = 1;
  return result;
}
