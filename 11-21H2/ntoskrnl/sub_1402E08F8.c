/*
 * XREFs of sub_1402E08F8 @ 0x1402E08F8
 * Callers:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 */

char sub_1402E08F8()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 562) != 1 || KeAreAllApcsDisabled() || *((_BYTE *)CurrentThread + 1390) > 1u )
    return 0;
  return v0;
}
