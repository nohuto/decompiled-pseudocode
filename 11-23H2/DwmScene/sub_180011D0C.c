/*
 * XREFs of sub_180011D0C @ 0x180011D0C
 * Callers:
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180016024 @ 0x180016024 (sub_180016024.c)
 *     sub_1800160F8 @ 0x1800160F8 (sub_1800160F8.c)
 *     sub_1800161CC @ 0x1800161CC (sub_1800161CC.c)
 *     sub_180024890 @ 0x180024890 (sub_180024890.c)
 *     sub_180024AA4 @ 0x180024AA4 (sub_180024AA4.c)
 *     sub_1800434F4 @ 0x1800434F4 (sub_1800434F4.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_18004730C @ 0x18004730C (sub_18004730C.c)
 *     sub_18004D0E8 @ 0x18004D0E8 (sub_18004D0E8.c)
 *     sub_18004D1BC @ 0x18004D1BC (sub_18004D1BC.c)
 *     sub_18004D290 @ 0x18004D290 (sub_18004D290.c)
 *     sub_18004D364 @ 0x18004D364 (sub_18004D364.c)
 *     sub_18004D438 @ 0x18004D438 (sub_18004D438.c)
 *     sub_18005EC34 @ 0x18005EC34 (sub_18005EC34.c)
 *     sub_180083C1C @ 0x180083C1C (sub_180083C1C.c)
 *     sub_1800860C4 @ 0x1800860C4 (sub_1800860C4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180011D0C(__int64 *a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 result; // rax

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return sub_1800109F0(a1, (__int64)v3, a2);
  *v3 = 0LL;
  v3[1] = 0LL;
  *v3 = *a2;
  result = a2[1];
  v3[1] = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[1] += 16LL;
  return result;
}
