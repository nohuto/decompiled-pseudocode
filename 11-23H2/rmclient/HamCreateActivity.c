/*
 * XREFs of HamCreateActivity @ 0x180007AF0
 * Callers:
 *     <none>
 * Callees:
 *     HamCreateActivityEx @ 0x180007B20 (HamCreateActivityEx.c)
 */

__int64 __fastcall HamCreateActivity(int a1, int a2, int a3, int a4, __int64 a5)
{
  return HamCreateActivityEx(a1, a2, a3, a4, 0LL, a5);
}
