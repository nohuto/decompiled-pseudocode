/*
 * XREFs of sub_140AB4138 @ 0x140AB4138
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 *     sub_140917F4C @ 0x140917F4C (sub_140917F4C.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

BOOLEAN sub_140AB4138()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v1 = sub_140347810(&stru_140C49430);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
