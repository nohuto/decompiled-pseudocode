/*
 * XREFs of sub_1800A8E0C @ 0x1800A8E0C
 * Callers:
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A8E0C(__int64 a1, _OWORD *a2, int a3, int a4)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  return result;
}
