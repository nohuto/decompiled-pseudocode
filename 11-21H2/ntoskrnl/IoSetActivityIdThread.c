/*
 * XREFs of IoSetActivityIdThread @ 0x1402DE9B0
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSetActivityIdThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *((_QWORD *)CurrentThread + 190);
  *((_QWORD *)CurrentThread + 190) = a1;
  return result;
}
