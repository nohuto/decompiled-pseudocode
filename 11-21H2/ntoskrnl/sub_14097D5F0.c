/*
 * XREFs of sub_14097D5F0 @ 0x14097D5F0
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1405AB920 @ 0x1405AB920 (sub_1405AB920.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 */

unsigned __int64 *__fastcall sub_14097D5F0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // r11

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1680LL);
  sub_1405AB9B8((__int64)CurrentThread);
  v5 = sub_1405AB920(
         *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
         (_QWORD *)(v4 + 384));
  RtlAvlRemoveNode(v6, v5);
  sub_1405AC950((__int64)CurrentThread);
  v5[2] = 0LL;
  return v5;
}
