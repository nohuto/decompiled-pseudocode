/*
 * XREFs of sub_1800C7180 @ 0x1800C7180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C1C4 @ 0x18001C1C4 (sub_18001C1C4.c)
 */

__int64 __fastcall sub_1800C7180(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18001C1C4(*(LPVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
