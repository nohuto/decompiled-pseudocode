/*
 * XREFs of sub_140405B20 @ 0x140405B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_1404010DC @ 0x1404010DC (sub_1404010DC.c)
 *     sub_140401244 @ 0x140401244 (sub_140401244.c)
 *     sub_14040A750 @ 0x14040A750 (sub_14040A750.c)
 */

void __fastcall __noreturn sub_140405B20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // eax

  v7 = sub_140400F4C();
  sub_140401244(*(_QWORD *)(a1 + 624), v7, 6, *(_DWORD *)(a1 + 36) + a4, a5 - *(unsigned int *)(a1 + 36));
}
