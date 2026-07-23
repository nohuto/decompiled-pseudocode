/*
 * XREFs of IoGetActivityIdThread @ 0x1402E0960
 * Callers:
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

__int64 IoGetActivityIdThread()
{
  return *((_QWORD *)KeGetCurrentThread() + 190);
}
