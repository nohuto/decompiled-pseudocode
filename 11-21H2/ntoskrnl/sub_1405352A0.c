/*
 * XREFs of sub_1405352A0 @ 0x1405352A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 */

__int64 __fastcall sub_1405352A0(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 108) = (unsigned __int16)sub_1403A34E0(a1);
  *(_DWORD *)(a1 + 104) = sub_1403A340C(a1) & 0x1F;
  result = 1LL;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  return result;
}
