/*
 * XREFs of sub_140420590 @ 0x140420590
 * Callers:
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 * Callees:
 *     <none>
 */

// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_140420590(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7, __int64 a8)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _disable();
  return sub_1404205D0(a1, a2, a3, a4, a5, a6, a7, (__int64)&retaddr);
}
