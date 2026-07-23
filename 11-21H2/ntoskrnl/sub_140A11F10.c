/*
 * XREFs of sub_140A11F10 @ 0x140A11F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 */

__int64 __fastcall sub_140A11F10(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  *a1 = ((unsigned int)sub_1407ECF5C(a3, a5, 0) & *(_DWORD *)(a2 + 560)) != 0;
  return 1LL;
}
