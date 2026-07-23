/*
 * XREFs of sub_14084AA50 @ 0x14084AA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 */

__int64 __fastcall sub_14084AA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r10d

  v4 = a4;
  LOBYTE(a4) = *((_BYTE *)KeGetCurrentThread() + 562);
  return sub_14084AA8C(a1, a2, a3, a4, v4, &StartContext);
}
