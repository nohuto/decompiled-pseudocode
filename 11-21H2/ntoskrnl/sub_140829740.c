/*
 * XREFs of sub_140829740 @ 0x140829740
 * Callers:
 *     sub_1403C0F20 @ 0x1403C0F20 (sub_1403C0F20.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B034C0 @ 0x140B034C0 (sub_140B034C0.c)
 *     sub_140B246C0 @ 0x140B246C0 (sub_140B246C0.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 *     sub_140B271D8 @ 0x140B271D8 (sub_140B271D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140829740(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
