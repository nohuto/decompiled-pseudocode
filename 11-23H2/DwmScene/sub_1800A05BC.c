/*
 * XREFs of sub_1800A05BC @ 0x1800A05BC
 * Callers:
 *     sub_18009FFB8 @ 0x18009FFB8 (sub_18009FFB8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002E2B0 @ 0x18002E2B0 (sub_18002E2B0.c)
 */

__int64 __fastcall sub_1800A05BC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002E2B0((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
