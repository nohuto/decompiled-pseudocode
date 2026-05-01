/*
 * XREFs of sub_18000E264 @ 0x18000E264
 * Callers:
 *     sub_18000C118 @ 0x18000C118 (sub_18000C118.c)
 *     sub_18000C198 @ 0x18000C198 (sub_18000C198.c)
 *     sub_18000E2D0 @ 0x18000E2D0 (sub_18000E2D0.c)
 * Callees:
 *     sub_18000C2A0 @ 0x18000C2A0 (sub_18000C2A0.c)
 */

DWORD __fastcall sub_18000E264(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18000C2A0(a1, a2, a3, 0LL, 0LL, a6, 0x8007029C);
    return 668;
  }
  return result;
}
