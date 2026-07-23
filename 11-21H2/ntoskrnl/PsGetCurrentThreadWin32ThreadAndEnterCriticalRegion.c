/*
 * XREFs of PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion @ 0x14021B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = *((_QWORD *)CurrentThread + 153);
  --*((_WORD *)CurrentThread + 242);
  return *((_QWORD *)CurrentThread + 57);
}
