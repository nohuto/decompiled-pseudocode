/*
 * XREFs of IoClearActivityIdThread @ 0x1402DE990
 * Callers:
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  *((_QWORD *)result + 190) = a1;
  return result;
}
