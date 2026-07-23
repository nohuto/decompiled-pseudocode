/*
 * XREFs of sub_1403A2720 @ 0x1403A2720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403A2720(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d

  v1 = *(unsigned __int16 *)(a1 + 32);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = v1;
  sub_1403A346C();
  return v2;
}
