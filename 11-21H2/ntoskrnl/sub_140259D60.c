/*
 * XREFs of sub_140259D60 @ 0x140259D60
 * Callers:
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 * Callees:
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 */

__int64 __fastcall sub_140259D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  sub_1402E1BD0(a1, &v5);
  *(_QWORD *)(a2 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = a2 + 32;
  *(_QWORD *)(a1 + 64) = a2 + 32;
  result = sub_1402E1B84(a1, &v5);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
