/*
 * XREFs of sub_140791970 @ 0x140791970
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 */

void __fastcall sub_140791970(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = *(void **)(v5 + 2152);
  if ( v4 )
    sub_1407919CC(v4);
  if ( a2 )
    sub_1407914BC(3LL, (__int64)&v5, 8u);
  KeLeaveCriticalRegion();
}
