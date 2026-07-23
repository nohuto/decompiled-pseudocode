/*
 * XREFs of sub_140535530 @ 0x140535530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_140535530(__int64 a1)
{
  unsigned __int8 v2; // al
  unsigned int v3; // r8d

  v2 = sub_1403A340C(a1);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = v2;
  sub_1403A346C(a1);
  return v3;
}
