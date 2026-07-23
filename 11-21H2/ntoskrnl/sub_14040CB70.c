/*
 * XREFs of sub_14040CB70 @ 0x14040CB70
 * Callers:
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040B164 @ 0x14040B164 (sub_14040B164.c)
 *     sub_14040B644 @ 0x14040B644 (sub_14040B644.c)
 *     sub_14040D3B0 @ 0x14040D3B0 (sub_14040D3B0.c)
 */

__int64 __fastcall sub_14040CB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  _misaligned_access();
  sub_14040B644(a2, a3, a4, v5);
  sub_14040B164(a4, a1 + 128, a5, v5);
  return sub_14040D3B0(a5, a4, v5);
}
