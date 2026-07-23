/*
 * XREFs of sub_140864124 @ 0x140864124
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 */

void sub_140864124()
{
  KeInitializeGuardedMutex(&stru_140C16020);
  stru_140C16060 = 0LL;
  KeInitializeGuardedMutex(&stru_140C16080);
  stru_140C160C0 = 0LL;
}
