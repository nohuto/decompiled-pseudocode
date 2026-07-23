/*
 * XREFs of sub_14077C484 @ 0x14077C484
 * Callers:
 *     sub_1406DC724 @ 0x1406DC724 (sub_1406DC724.c)
 *     sub_14077BF70 @ 0x14077BF70 (sub_14077BF70.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 */

__int64 __fastcall sub_14077C484(__int64 a1)
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
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    sub_1402DF554(v4, v5);
  return 0LL;
}
