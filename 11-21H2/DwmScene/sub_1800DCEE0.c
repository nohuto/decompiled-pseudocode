/*
 * XREFs of sub_1800DCEE0 @ 0x1800DCEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 */

__int64 __fastcall sub_1800DCEE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18001D6B8(*(LPVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
