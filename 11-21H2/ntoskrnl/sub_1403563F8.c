/*
 * XREFs of sub_1403563F8 @ 0x1403563F8
 * Callers:
 *     sub_140355DFC @ 0x140355DFC (sub_140355DFC.c)
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_140356698 @ 0x140356698 (sub_140356698.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403563F8(__int64 a1, __int64 a2, __int64 a3, int a4, volatile signed __int32 *a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = a4;
  _InterlockedDecrement(a5);
  result = sub_14042A5E0(a1, a2);
  **(_DWORD **)(a3 + 8 * v6) &= ~2u;
  **(_DWORD **)(a3 + 8 * v6) &= ~8u;
  **(_DWORD **)(a3 + 8 * v6) |= 4u;
  return result;
}
