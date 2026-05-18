/*
 * XREFs of sub_180029870 @ 0x180029870
 * Callers:
 *     sub_180026238 @ 0x180026238 (sub_180026238.c)
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_1800331F0 @ 0x1800331F0 (sub_1800331F0.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_18004745C @ 0x18004745C (sub_18004745C.c)
 *     sub_180047504 @ 0x180047504 (sub_180047504.c)
 *     sub_1800475AC @ 0x1800475AC (sub_1800475AC.c)
 *     sub_180047654 @ 0x180047654 (sub_180047654.c)
 *     sub_1800476F4 @ 0x1800476F4 (sub_1800476F4.c)
 *     sub_18004779C @ 0x18004779C (sub_18004779C.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_18006F930 @ 0x18006F930 (sub_18006F930.c)
 *     sub_18006FA10 @ 0x18006FA10 (sub_18006FA10.c)
 *     sub_18006FA84 @ 0x18006FA84 (sub_18006FA84.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_18008A8AC @ 0x18008A8AC (sub_18008A8AC.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029870(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
