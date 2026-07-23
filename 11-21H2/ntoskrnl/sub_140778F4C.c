/*
 * XREFs of sub_140778F4C @ 0x140778F4C
 * Callers:
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 */

__int64 __fastcall sub_140778F4C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rdx
  char v4; // bl
  void *v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 16);
  v4 = *((_BYTE *)CurrentThread + 562);
  if ( v3 )
    sub_1402DF554(*((_BYTE *)CurrentThread + 562), v3);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    sub_1402DF554(v4, v5);
  return 0LL;
}
